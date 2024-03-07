/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:326
*/
struct LegalizeGatherV2 : public ::mlir::RewritePattern {
  LegalizeGatherV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.GatherV2", {"mhlo.torch_index_select"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr batch_dims;
    Attribute axis;
    ::mlir::Operation::operand_range indices(op0->getOperands());
    ::mlir::Operation::operand_range params(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::GatherV2Op>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.GatherV2' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    params = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.GatherV2' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    indices = castedOp0.getODSOperands(1);
    {
      auto *op1 = (*castedOp0.getODSOperands(2).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        axis = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("batch_dims");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      batch_dims = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::TorchIndexSelectOp tblgen_TorchIndexSelectOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*params.begin()));
      tblgen_values.push_back((*indices.begin()));
      if (auto tmpAttr = GetHLOAxisFromTFAxis(axis, (*params.begin()).getType().cast<RankedTensorType>().getRank(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("dim"), tmpAttr);
      }
      if (auto tmpAttr = GetHLOAxisFromTFAxis(batch_dims, (*indices.begin()).getType().cast<RankedTensorType>().getRank(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("batch_dims"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_TorchIndexSelectOp_0 = rewriter.create<::mlir::mhlo::TorchIndexSelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TorchIndexSelectOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:79
*/
struct LowerAssert : public ::mlir::RewritePattern {
  LowerAssert(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Assert", {}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr summarize;
    ::mlir::Operation::operand_range condition(op0->getOperands());
    ::mlir::Operation::operand_range data(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AssertOp>(op0); (void)castedOp0;
    condition = castedOp0.getODSOperands(0);
    data = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("summarize");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 3);
      summarize = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:108
*/
struct LowerRightShiftSigned : public ::mlir::RewritePattern {
  LowerRightShiftSigned(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RightShift", {"chlo.broadcast_shift_right_arithmetic"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RightShiftOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.RightShift' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.RightShift' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*r.begin()).getType()).isa<::mlir::TensorType>())) && (((((*r.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*r.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*r.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*r.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*r.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'r' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastShiftRightArithmeticOp tblgen_BroadcastShiftRightArithmeticOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastShiftRightArithmeticOp_0 = rewriter.create<::mlir::chlo::BroadcastShiftRightArithmeticOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastShiftRightArithmeticOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:59
*/
struct GeneratedConvert0 : public ::mlir::RewritePattern {
  GeneratedConvert0(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FusedBatchNorm", {"mhlo.batch_norm_inference"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr is_training;
    ::mlir::StringAttr data_format;
    ::mlir::TF::FusedBatchNormOp root;
    ::mlir::Operation::operand_range scale(op0->getOperands());
    ::mlir::FloatAttr exponential_avg_factor;
    ::mlir::Operation::operand_range offset(op0->getOperands());
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range mean(op0->getOperands());
    ::mlir::FloatAttr epsilon;
    ::mlir::Operation::operand_range variance(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FusedBatchNormOp>(op0); (void)castedOp0;
    root = castedOp0;
    x = castedOp0.getODSOperands(0);
    scale = castedOp0.getODSOperands(1);
    offset = castedOp0.getODSOperands(2);
    mean = castedOp0.getODSOperands(3);
    variance = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FloatAttr>("epsilon");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getFloatAttr(rewriter.getF32Type(), 0.0001f);
      epsilon = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FloatAttr>("exponential_avg_factor");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getFloatAttr(rewriter.getF32Type(), 1.0f);
      exponential_avg_factor = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("data_format");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getStringAttr("NHWC");
      data_format = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("is_training");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      if (!((!tblgen_attr.getValue()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.FusedBatchNorm' attribute 'is_training' failed to satisfy constraint: ";
        });
      }
      is_training = tblgen_attr;
    }
    if (!(((*root.getODSResults(1).begin()).use_empty()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities '' failed to satisfy constraint: has no use";
      });
    }
    if (!(((*root.getODSResults(2).begin()).use_empty()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities '' failed to satisfy constraint: has no use";
      });
    }
    if (!(((*root.getODSResults(3).begin()).use_empty()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities '' failed to satisfy constraint: has no use";
      });
    }
    if (!(((*root.getODSResults(4).begin()).use_empty()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities '' failed to satisfy constraint: has no use";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::BatchNormInferenceOp tblgen_BatchNormInferenceOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_values.push_back((*scale.begin()));
      tblgen_values.push_back((*offset.begin()));
      tblgen_values.push_back((*mean.begin()));
      tblgen_values.push_back((*variance.begin()));
      if (auto tmpAttr = epsilon) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("epsilon"), tmpAttr);
      }
      if (auto tmpAttr = getFeatureDimensionAttr(rewriter, data_format.getValue(), (*x.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("feature_index"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BatchNormInferenceOp_0 = rewriter.create<::mlir::mhlo::BatchNormInferenceOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BatchNormInferenceOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert1 : public ::mlir::RewritePattern {
  GeneratedConvert1(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AddV2", {"chlo.broadcast_add"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AddV2Op>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.AddV2' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.AddV2' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastAddOp tblgen_BroadcastAddOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastAddOp_0 = rewriter.create<::mlir::chlo::BroadcastAddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastAddOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert2 : public ::mlir::RewritePattern {
  GeneratedConvert2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Atan2", {"chlo.broadcast_atan2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::Atan2Op>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Atan2' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Atan2' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastAtan2Op tblgen_BroadcastAtan2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastAtan2Op_0 = rewriter.create<::mlir::chlo::BroadcastAtan2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastAtan2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert3 : public ::mlir::RewritePattern {
  GeneratedConvert3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Complex", {"chlo.broadcast_complex"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ComplexOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Complex' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Complex' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastComplexOp tblgen_BroadcastComplexOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastComplexOp_0 = rewriter.create<::mlir::chlo::BroadcastComplexOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastComplexOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert4 : public ::mlir::RewritePattern {
  GeneratedConvert4(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Div", {"chlo.broadcast_divide"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::DivOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Div' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Div' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastDivOp tblgen_BroadcastDivOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastDivOp_0 = rewriter.create<::mlir::chlo::BroadcastDivOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastDivOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert5 : public ::mlir::RewritePattern {
  GeneratedConvert5(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LeftShift", {"chlo.broadcast_shift_left"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LeftShiftOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.LeftShift' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.LeftShift' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastShiftLeftOp tblgen_BroadcastShiftLeftOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastShiftLeftOp_0 = rewriter.create<::mlir::chlo::BroadcastShiftLeftOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastShiftLeftOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert6 : public ::mlir::RewritePattern {
  GeneratedConvert6(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Maximum", {"chlo.broadcast_maximum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MaximumOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Maximum' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Maximum' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastMaxOp tblgen_BroadcastMaxOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastMaxOp_0 = rewriter.create<::mlir::chlo::BroadcastMaxOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastMaxOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert7 : public ::mlir::RewritePattern {
  GeneratedConvert7(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Minimum", {"chlo.broadcast_minimum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MinimumOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Minimum' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Minimum' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastMinOp tblgen_BroadcastMinOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastMinOp_0 = rewriter.create<::mlir::chlo::BroadcastMinOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastMinOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert8 : public ::mlir::RewritePattern {
  GeneratedConvert8(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Mul", {"chlo.broadcast_multiply"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MulOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Mul' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Mul' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastMulOp tblgen_BroadcastMulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastMulOp_0 = rewriter.create<::mlir::chlo::BroadcastMulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastMulOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert9 : public ::mlir::RewritePattern {
  GeneratedConvert9(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Polygamma", {"chlo.broadcast_polygamma"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PolygammaOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Polygamma' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Polygamma' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastPolygammaOp tblgen_BroadcastPolygammaOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastPolygammaOp_0 = rewriter.create<::mlir::chlo::BroadcastPolygammaOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastPolygammaOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert10 : public ::mlir::RewritePattern {
  GeneratedConvert10(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Pow", {"chlo.broadcast_power"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PowOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Pow' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Pow' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastPowOp tblgen_BroadcastPowOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastPowOp_0 = rewriter.create<::mlir::chlo::BroadcastPowOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastPowOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert11 : public ::mlir::RewritePattern {
  GeneratedConvert11(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RealDiv", {"chlo.broadcast_divide"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RealDivOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.RealDiv' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.RealDiv' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastDivOp tblgen_BroadcastDivOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastDivOp_0 = rewriter.create<::mlir::chlo::BroadcastDivOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastDivOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert12 : public ::mlir::RewritePattern {
  GeneratedConvert12(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sub", {"chlo.broadcast_subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SubOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Sub' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Sub' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastSubOp tblgen_BroadcastSubOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastSubOp_0 = rewriter.create<::mlir::chlo::BroadcastSubOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastSubOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:106
*/
struct GeneratedConvert13 : public ::mlir::RewritePattern {
  GeneratedConvert13(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Zeta", {"chlo.broadcast_zeta"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ZetaOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Zeta' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Zeta' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastZetaOp tblgen_BroadcastZetaOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastZetaOp_0 = rewriter.create<::mlir::chlo::BroadcastZetaOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastZetaOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:120
*/
struct GeneratedConvert14 : public ::mlir::RewritePattern {
  GeneratedConvert14(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FloorDiv", {"chlo.broadcast_divide", "mhlo.floor"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FloorDivOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.FloorDiv' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.FloorDiv' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF16())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF32())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF64()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 16-bit float or 32-bit float or 64-bit float values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastDivOp tblgen_BroadcastDivOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*r.begin());
      tblgen_BroadcastDivOp_0 = rewriter.create<::mlir::chlo::BroadcastDivOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))
      );
    }
    ::mlir::mhlo::FloorOp tblgen_FloorOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastDivOp_0.getODSResults(0).begin()));
      tblgen_FloorOp_1 = rewriter.create<::mlir::mhlo::FloorOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_FloorOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:144
*/
struct GeneratedConvert15 : public ::mlir::RewritePattern {
  GeneratedConvert15(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FloorDiv", {"chlo.broadcast_add", "chlo.broadcast_compare", "chlo.broadcast_divide", "chlo.broadcast_subtract", "mhlo.abs", "mhlo.constant", "mhlo.negate", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FloorDivOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.FloorDiv' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.FloorDiv' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*l.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_1 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*r.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_3 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_BroadcastCompareOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_BroadcastCompareOp_3.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_4 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin())),
        rewriter.getStringAttr("EQ"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastDivOp tblgen_BroadcastDivOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*r.begin());
      tblgen_BroadcastDivOp_5 = rewriter.create<::mlir::chlo::BroadcastDivOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      tblgen_AbsOp_6 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      tblgen_AbsOp_7 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_8;
    {
      tblgen_ConstOp_8 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*r.begin())),1)
      );
    }
    ::mlir::chlo::BroadcastSubOp tblgen_BroadcastSubOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_8.getODSResults(0).begin());
      tblgen_BroadcastSubOp_9 = rewriter.create<::mlir::chlo::BroadcastSubOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr()
      );
    }
    ::mlir::chlo::BroadcastAddOp tblgen_BroadcastAddOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_6.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_BroadcastSubOp_9.getODSResults(0).begin());
      tblgen_BroadcastAddOp_10 = rewriter.create<::mlir::chlo::BroadcastAddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))
      );
    }
    ::mlir::mhlo::NegOp neg;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastAddOp_10.getODSResults(0).begin()));
      neg = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AbsOp abs;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      abs = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::chlo::BroadcastDivOp tblgen_BroadcastDivOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*neg.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*abs.getODSResults(0).begin());
      tblgen_BroadcastDivOp_11 = rewriter.create<::mlir::chlo::BroadcastDivOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*neg.getODSResults(0).begin()), (*abs.getODSResults(0).begin()))
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_12;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_4.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_BroadcastDivOp_5.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_BroadcastDivOp_11.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_12 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_12.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:172
*/
struct GeneratedConvert16 : public ::mlir::RewritePattern {
  GeneratedConvert16(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FloorMod", {"chlo.broadcast_add", "chlo.broadcast_and", "chlo.broadcast_compare", "chlo.broadcast_remainder", "mhlo.constant", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FloorModOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.FloorMod' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.FloorMod' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastRemOp rem;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*r.begin());
      rem = rewriter.create<::mlir::chlo::BroadcastRemOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))
      );
    }
    ::mlir::mhlo::ConstOp l_zeros;
    {
      l_zeros = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*l.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*rem.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*l_zeros.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*rem.getODSResults(0).begin())),
        rewriter.getStringAttr("NE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::ConstOp r_zeros;
    {
      r_zeros = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*r.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp r_cmp;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      ::mlir::Value tblgen_value_1 = (*r_zeros.getODSResults(0).begin());
      r_cmp = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastCompareOp rem_cmp;
    {
      ::mlir::Value tblgen_value_0 = (*rem.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*r_zeros.getODSResults(0).begin());
      rem_cmp = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*rem.getODSResults(0).begin()), (*r_zeros.getODSResults(0).begin())),
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*r_cmp.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*rem_cmp.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_1 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*r_cmp.getODSResults(0).begin()), (*rem_cmp.getODSResults(0).begin())),
        rewriter.getStringAttr("NE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastAndOp tblgen_BroadcastAndOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_BroadcastCompareOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_BroadcastCompareOp_1.getODSResults(0).begin());
      tblgen_BroadcastAndOp_2 = rewriter.create<::mlir::chlo::BroadcastAndOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr()
      );
    }
    ::mlir::chlo::BroadcastAddOp tblgen_BroadcastAddOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      ::mlir::Value tblgen_value_1 = (*rem.getODSResults(0).begin());
      tblgen_BroadcastAddOp_3 = rewriter.create<::mlir::chlo::BroadcastAddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*r.begin()), (*rem.getODSResults(0).begin()))
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastAndOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_BroadcastAddOp_3.getODSResults(0).begin()));
      tblgen_values.push_back((*rem.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_4 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_4.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:198
*/
struct GeneratedConvert17 : public ::mlir::RewritePattern {
  GeneratedConvert17(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RiscAdd", {"mhlo.add"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RiscAddOp>(op0); (void)castedOp0;
    l = castedOp0.getODSOperands(0);
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AddOp tblgen_AddOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      tblgen_AddOp_0 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:200
*/
struct GeneratedConvert18 : public ::mlir::RewritePattern {
  GeneratedConvert18(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RiscDot", {"mhlo.dot", "tf.Const", "tf.Transpose"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr transpose_b;
    ::mlir::BoolAttr transpose_a;
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RiscDotOp>(op0); (void)castedOp0;
    a = castedOp0.getODSOperands(0);
    b = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("transpose_a");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      transpose_a = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("transpose_b");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      transpose_b = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/Get2DTransposePerm(transpose_a, &rewriter)
      );
    }
    ::mlir::TF::TransposeOp tblgen_TransposeOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*a.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_TransposeOp_1 = rewriter.create<::mlir::TF::TransposeOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*perm=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/Get2DTransposePerm(transpose_b, &rewriter)
      );
    }
    ::mlir::TF::TransposeOp tblgen_TransposeOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*b.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      tblgen_TransposeOp_3 = rewriter.create<::mlir::TF::TransposeOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*perm=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::DotOp tblgen_DotOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_TransposeOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_TransposeOp_3.getODSResults(0).begin()));
      if (auto tmpAttr = ArrayAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("precision_config"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_4 = rewriter.create<::mlir::mhlo::DotOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_4.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:220
*/
struct GeneratedConvert19 : public ::mlir::RewritePattern {
  GeneratedConvert19(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalAnd", {"chlo.broadcast_and"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalAndOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.LogicalAnd' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.LogicalAnd' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastAndOp tblgen_BroadcastAndOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastAndOp_0 = rewriter.create<::mlir::chlo::BroadcastAndOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastAndOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:220
*/
struct GeneratedConvert20 : public ::mlir::RewritePattern {
  GeneratedConvert20(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalOr", {"chlo.broadcast_or"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalOrOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.LogicalOr' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.LogicalOr' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastOrOp tblgen_BroadcastOrOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastOrOp_0 = rewriter.create<::mlir::chlo::BroadcastOrOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastOrOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:220
*/
struct GeneratedConvert21 : public ::mlir::RewritePattern {
  GeneratedConvert21(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BitwiseAnd", {"chlo.broadcast_and"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BitwiseAndOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.BitwiseAnd' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.BitwiseAnd' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastAndOp tblgen_BroadcastAndOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastAndOp_0 = rewriter.create<::mlir::chlo::BroadcastAndOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastAndOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:220
*/
struct GeneratedConvert22 : public ::mlir::RewritePattern {
  GeneratedConvert22(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BitwiseOr", {"chlo.broadcast_or"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BitwiseOrOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.BitwiseOr' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.BitwiseOr' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastOrOp tblgen_BroadcastOrOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastOrOp_0 = rewriter.create<::mlir::chlo::BroadcastOrOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastOrOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:220
*/
struct GeneratedConvert23 : public ::mlir::RewritePattern {
  GeneratedConvert23(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BitwiseXor", {"chlo.broadcast_xor"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BitwiseXorOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.BitwiseXor' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.BitwiseXor' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of 1-bit signless integer or 8-bit signless integer or 16-bit signless integer or 32-bit signless integer or 64-bit signless integer values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastXorOp tblgen_BroadcastXorOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastXorOp_0 = rewriter.create<::mlir::chlo::BroadcastXorOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastXorOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:232
*/
struct GeneratedConvert24 : public ::mlir::RewritePattern {
  GeneratedConvert24(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Greater", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::GreaterOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Greater' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Greater' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("GT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:233
*/
struct GeneratedConvert25 : public ::mlir::RewritePattern {
  GeneratedConvert25(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.GreaterEqual", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::GreaterEqualOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.GreaterEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.GreaterEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("GE")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:234
*/
struct GeneratedConvert26 : public ::mlir::RewritePattern {
  GeneratedConvert26(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Less", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LessOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Less' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Less' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("LT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:235
*/
struct GeneratedConvert27 : public ::mlir::RewritePattern {
  GeneratedConvert27(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LessEqual", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LessEqualOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.LessEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.LessEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("LE")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:245
*/
struct GeneratedConvert28 : public ::mlir::RewritePattern {
  GeneratedConvert28(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Equal", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::BoolAttr incompatible_shape_error;
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::EqualOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Equal' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Equal' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("incompatible_shape_error");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      if (!((tblgen_attr.getValue()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.Equal' attribute 'incompatible_shape_error' failed to satisfy constraint: ";
        });
      }
      incompatible_shape_error = tblgen_attr;
    }
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("EQ")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:246
*/
struct GeneratedConvert29 : public ::mlir::RewritePattern {
  GeneratedConvert29(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.NotEqual", {"chlo.broadcast_compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::BoolAttr incompatible_shape_error;
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::NotEqualOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.NotEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.NotEqual' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("incompatible_shape_error");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      if (!((tblgen_attr.getValue()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.NotEqual' attribute 'incompatible_shape_error' failed to satisfy constraint: ";
        });
      }
      incompatible_shape_error = tblgen_attr;
    }
    if (!(((((*l.begin()).getType()).isa<::mlir::TensorType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((((*l.begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'l' failed to satisfy constraint: tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*l.begin()));
      tblgen_values.push_back((*r.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*l.begin()), (*r.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getStringAttr("NE")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = StringAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("compare_type"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastCompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:273
*/
struct GeneratedConvert30 : public ::mlir::RewritePattern {
  GeneratedConvert30(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ConcatV2", {"mhlo.concatenate"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute axis;
    ::mlir::Operation::operand_range inputs(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ConcatV2Op>(op0); (void)castedOp0;
    inputs = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        axis = arg1_0;
        if (!(((arg1_0.isa<::mlir::ElementsAttr>())) && ((arg1_0.cast<ElementsAttr>().getType().getNumElements() == 1)))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'Scalar ElementsAttr'";
          });
        }
      tblgen_ops[1] = op1;
    }
    if (!(((*inputs.begin()).getType().isa<RankedTensorType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'inputs' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConcatenateOp tblgen_ConcatenateOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      for (auto v: inputs) {
        tblgen_values.push_back(v);
      }
      if (auto tmpAttr = GetHLOAxisFromTFAxis(axis, (*inputs.begin()).getType().cast<RankedTensorType>().getRank(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("dimension"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConcatenateOp_0 = rewriter.create<::mlir::mhlo::ConcatenateOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConcatenateOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:282
*/
struct GeneratedConvert31 : public ::mlir::RewritePattern {
  GeneratedConvert31(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.CollectivePermute", {"mhlo.collective_permute"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute source_target_pairs;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CollectivePermuteOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        source_target_pairs = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CollectivePermuteOp tblgen_CollectivePermuteOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = hlo::ConvertElementsAttr(source_target_pairs.cast<ElementsAttr>(), rewriter.getIntegerType(64)).cast<DenseIntElementsAttr>()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("source_target_pairs"), tmpAttr);
      }
      tblgen_CollectivePermuteOp_0 = rewriter.create<::mlir::mhlo::CollectivePermuteOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CollectivePermuteOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:290
*/
struct GeneratedConvert32 : public ::mlir::RewritePattern {
  GeneratedConvert32(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.CrossReplicaSum", {"mhlo.cross-replica-sum"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute group_assignment;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CrossReplicaSumOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        group_assignment = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CrossReplicaSumOp tblgen_CrossReplicaSumOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = hlo::ConvertElementsAttr(group_assignment.cast<ElementsAttr>(), rewriter.getIntegerType(64)).cast<DenseIntElementsAttr>()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("replica_groups"), tmpAttr);
      }
      tblgen_CrossReplicaSumOp_0 = rewriter.create<::mlir::mhlo::CrossReplicaSumOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CrossReplicaSumOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:298
*/
struct GeneratedConvert33 : public ::mlir::RewritePattern {
  GeneratedConvert33(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AllToAll", {"mhlo.all_to_all"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr split_count;
    ::mlir::IntegerAttr split_dimension;
    ::mlir::IntegerAttr concat_dimension;
    ::mlir::Operation::operand_range input(op0->getOperands());
    Attribute group_assignment;
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AllToAllOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.AllToAll' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        group_assignment = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("concat_dimension");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.AllToAll' to have attribute 'concat_dimension' of type '::mlir::IntegerAttr'";
        });
      }
      if (!(((tblgen_attr.isa<::mlir::IntegerAttr>())) && ((tblgen_attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.AllToAll' attribute 'concat_dimension' failed to satisfy constraint: 64-bit signless integer attribute";
        });
      }
      concat_dimension = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("split_dimension");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.AllToAll' to have attribute 'split_dimension' of type '::mlir::IntegerAttr'";
        });
      }
      split_dimension = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("split_count");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.AllToAll' to have attribute 'split_count' of type '::mlir::IntegerAttr'";
        });
      }
      split_count = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AllToAllOp tblgen_AllToAllOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = split_dimension) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("split_dimension"), tmpAttr);
      }
      if (auto tmpAttr = concat_dimension) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("concat_dimension"), tmpAttr);
      }
      if (auto tmpAttr = split_count) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("split_count"), tmpAttr);
      }
      if (auto tmpAttr = hlo::ConvertElementsAttr(group_assignment.cast<ElementsAttr>(), rewriter.getIntegerType(64)).cast<DenseIntElementsAttr>()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("replica_groups"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AllToAllOp_0 = rewriter.create<::mlir::mhlo::AllToAllOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AllToAllOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:311
*/
struct GeneratedConvert34 : public ::mlir::RewritePattern {
  GeneratedConvert34(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FFT", {"mhlo.fft"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::FFTOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FFTOp>(op0); (void)castedOp0;
    res = castedOp0;
    input = castedOp0.getODSOperands(0);
    if (!((CheckInnerDimStatic((*input.begin()).getType().cast<ShapedType>(), &rewriter)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'input' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::FftOp tblgen_FftOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = rewriter.getStringAttr("FFT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("fft_type"), tmpAttr);
      }
      if (auto tmpAttr = GetInnerDimFromValue((*res.getODSResults(0).begin()).getType().cast<ShapedType>(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("fft_length"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_FftOp_0 = rewriter.create<::mlir::mhlo::FftOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_FftOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:315
*/
struct GeneratedConvert35 : public ::mlir::RewritePattern {
  GeneratedConvert35(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IFFT", {"mhlo.fft"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::IFFTOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IFFTOp>(op0); (void)castedOp0;
    res = castedOp0;
    input = castedOp0.getODSOperands(0);
    if (!((CheckInnerDimStatic((*input.begin()).getType().cast<ShapedType>(), &rewriter)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'input' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::FftOp tblgen_FftOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = rewriter.getStringAttr("IFFT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("fft_type"), tmpAttr);
      }
      if (auto tmpAttr = GetInnerDimFromValue((*res.getODSResults(0).begin()).getType().cast<ShapedType>(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("fft_length"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_FftOp_0 = rewriter.create<::mlir::mhlo::FftOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_FftOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:347
*/
struct GeneratedConvert36 : public ::mlir::RewritePattern {
  GeneratedConvert36(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.PadV2", {"mhlo.pad"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range c(op0->getOperands());
    ::mlir::Operation::operand_range input(op0->getOperands());
    Attribute padding;
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PadV2Op>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        padding = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }
    c = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::PadOp tblgen_PadOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*c.begin()));
      if (auto tmpAttr = SliceDenseIntElementsAttrColumn2D(padding.cast<ElementsAttr>(), 0 )) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("edge_padding_low"), tmpAttr);
      }
      if (auto tmpAttr = SliceDenseIntElementsAttrColumn2D(padding.cast<ElementsAttr>(), 1 )) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("edge_padding_high"), tmpAttr);
      }
      if (auto tmpAttr = GetInteriorPadding(padding.cast<ElementsAttr>())) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("interior_padding"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_PadOp_0 = rewriter.create<::mlir::mhlo::PadOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_PadOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:358
*/
struct GeneratedConvert37 : public ::mlir::RewritePattern {
  GeneratedConvert37(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Identity", {}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range op(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IdentityOp>(op0); (void)castedOp0;
    op = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ op }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:358
*/
struct GeneratedConvert38 : public ::mlir::RewritePattern {
  GeneratedConvert38(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.StopGradient", {}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range op(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::StopGradientOp>(op0); (void)castedOp0;
    op = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ op }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:362
*/
struct GeneratedConvert39 : public ::mlir::RewritePattern {
  GeneratedConvert39(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.PreventGradient", {}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr msg;
    ::mlir::Operation::operand_range op(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PreventGradientOp>(op0); (void)castedOp0;
    op = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("message");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.PreventGradient' to have attribute 'message' of type '::mlir::StringAttr'";
        });
      }
      msg = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ op }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:362
*/
struct GeneratedConvert40 : public ::mlir::RewritePattern {
  GeneratedConvert40(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.CheckNumerics", {}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr msg;
    ::mlir::Operation::operand_range op(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CheckNumericsOp>(op0); (void)castedOp0;
    op = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("message");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.CheckNumerics' to have attribute 'message' of type '::mlir::StringAttr'";
        });
      }
      msg = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ op }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:368
*/
struct GeneratedConvert41 : public ::mlir::RewritePattern {
  GeneratedConvert41(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.MatMul", {"mhlo.dot", "tf.Const", "tf.Transpose"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr transpose_b;
    ::mlir::BoolAttr transpose_a;
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MatMulOp>(op0); (void)castedOp0;
    a = castedOp0.getODSOperands(0);
    b = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("transpose_a");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      transpose_a = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("transpose_b");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      transpose_b = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/Get2DTransposePerm(transpose_a, &rewriter)
      );
    }
    ::mlir::TF::TransposeOp tblgen_TransposeOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*a.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_TransposeOp_1 = rewriter.create<::mlir::TF::TransposeOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*perm=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/Get2DTransposePerm(transpose_b, &rewriter)
      );
    }
    ::mlir::TF::TransposeOp tblgen_TransposeOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*b.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      tblgen_TransposeOp_3 = rewriter.create<::mlir::TF::TransposeOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*perm=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::DotOp tblgen_DotOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_TransposeOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_TransposeOp_3.getODSResults(0).begin()));
      if (auto tmpAttr = ArrayAttr()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("precision_config"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_4 = rewriter.create<::mlir::mhlo::DotOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_4.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:414
*/
struct GeneratedConvert42 : public ::mlir::RewritePattern {
  GeneratedConvert42(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.MatrixBandPart", {"chlo.broadcast_compare", "mhlo.and", "mhlo.compare", "mhlo.constant", "mhlo.negate", "mhlo.select", "mhlo.subtract", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range num_upper(op0->getOperands());
    ::mlir::Operation::operand_range num_lower(op0->getOperands());
    ::mlir::TF::MatrixBandPartOp op;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MatrixBandPartOp>(op0); (void)castedOp0;
    op = castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.MatrixBandPart' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    num_lower = castedOp0.getODSOperands(1);
    num_upper = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::mhlo::ConstOp m_dim;
    {
      m_dim = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getIntegerAttr(getElementTypeOrSelf((*num_lower.begin()).getType()),                          GetDimensionSizeFromEnd((*input.begin()), 1))
      );
    }
    ::mlir::mhlo::ConstOp n_dim;
    {
      n_dim = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getIntegerAttr(getElementTypeOrSelf((*num_upper.begin()).getType()),                          GetDimensionSizeFromEnd((*input.begin()), 0))
      );
    }
    ::mlir::mhlo::ConstOp zero;
    {
      zero = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::getSplat(&rewriter, (*num_lower.begin()), 0)
      );
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*num_lower.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_CompareOp_0 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::SelectOp num_lower_or_m;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*m_dim.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*num_lower.begin());
      num_lower_or_m = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*num_upper.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_CompareOp_1 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::SelectOp num_upper_or_n;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*n_dim.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*num_upper.begin());
      num_upper_or_n = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::NegOp tblgen_NegOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*num_lower_or_m.getODSResults(0).begin()));
      tblgen_NegOp_2 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp offset;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(rewriter.create<mhlo::IotaOp>((*op.getODSResults(0).begin()).getOwner()->getLoc(), Get2DTensorType((*input.begin()), (*num_lower.begin())), rewriter.getI64IntegerAttr(1)));
      tblgen_values.push_back(rewriter.create<mhlo::IotaOp>((*op.getODSResults(0).begin()).getOwner()->getLoc(), Get2DTensorType((*input.begin()), (*num_lower.begin())), rewriter.getI64IntegerAttr(0)));
      offset = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_NegOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*offset.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_3 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*offset.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*num_upper_or_n.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_4 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::AndOp tblgen_AndOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_3.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_4.getODSResults(0).begin()));
      tblgen_AndOp_5 = rewriter.create<::mlir::mhlo::AndOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_6;
    {
      tblgen_ConstOp_6 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::getSplat(&rewriter, (*input.begin()), 0)
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AndOp_5.getODSResults(0).begin()));
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_6.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_7 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_7.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:458
*/
struct GeneratedConvert43 : public ::mlir::RewritePattern {
  GeneratedConvert43(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Const", {"mhlo.constant", "tensor.cast"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::ElementsAttr value;
    ::mlir::TF::ConstOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ConstOp>(op0); (void)castedOp0;
    res = castedOp0;
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::ElementsAttr>("value");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.Const' to have attribute 'value' of type '::mlir::ElementsAttr'";
        });
      }
      if (!((tblgen_attr.isa<::mlir::ElementsAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.Const' attribute 'value' failed to satisfy constraint: constant vector/tensor attribute";
        });
      }
      value = tblgen_attr;
    }
    if (!(((((*res.getODSResults(0).begin()).getType()).isa<::mlir::TensorType>())) && (((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || ((((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || (((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || (((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'res' failed to satisfy constraint: tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/value
      );
    }
    ::mlir::tensor::CastOp tblgen_CastOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CastOp_1 = rewriter.create<::mlir::tensor::CastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CastOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:466
*/
struct GeneratedConvert44 : public ::mlir::RewritePattern {
  GeneratedConvert44(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Elu", {"chlo.broadcast_compare", "mhlo.constant", "mhlo.exponential_minus_one", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::EluOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Elu' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp zero;
    {
      zero = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*features.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*zero.getODSResults(0).begin()), (*features.begin())),
        rewriter.getStringAttr("GT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::Expm1Op tblgen_Expm1Op_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features.begin()));
      tblgen_Expm1Op_1 = rewriter.create<::mlir::mhlo::Expm1Op>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*features.begin()));
      tblgen_values.push_back((*tblgen_Expm1Op_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_2 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:476
*/
struct GeneratedConvert45 : public ::mlir::RewritePattern {
  GeneratedConvert45(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.EluGrad", {"chlo.broadcast_add", "chlo.broadcast_compare", "mhlo.constant", "mhlo.multiply", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation::operand_range gradients(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::EluGradOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.EluGrad' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    gradients = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.EluGrad' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp zero;
    {
      zero = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*features.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_0 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*zero.getODSResults(0).begin()), (*features.begin())),
        rewriter.getStringAttr("GT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::ConstOp one;
    {
      one = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*features.begin())),1)
      );
    }
    ::mlir::chlo::BroadcastAddOp tblgen_BroadcastAddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*one.getODSResults(0).begin());
      tblgen_BroadcastAddOp_1 = rewriter.create<::mlir::chlo::BroadcastAddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/hlo::getBroadcastDimensionsAttr(&rewriter, (*one.getODSResults(0).begin()), (*features.begin()))
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*gradients.begin()));
      tblgen_values.push_back((*tblgen_BroadcastAddOp_1.getODSResults(0).begin()));
      tblgen_MulOp_2 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*gradients.begin()));
      tblgen_values.push_back((*tblgen_MulOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_3 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:500
*/
struct GeneratedConvert46 : public ::mlir::RewritePattern {
  GeneratedConvert46(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Relu", {"chlo.broadcast_maximum", "mhlo.constant"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReluOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Relu' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    if (!(((((*input.begin()).getType()).isa<::mlir::TensorType>())) && (((((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF16())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF32())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF64())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isBF16())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'input' failed to satisfy constraint: tensor of signed integer or floating-point values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp zero;
    {
      zero = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*input.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastMaxOp tblgen_BroadcastMaxOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*input.begin()));
      if (auto tmpAttr = hlo::getBroadcastDimensionsAttr(&rewriter, (*zero.getODSResults(0).begin()), (*input.begin()))) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("broadcast_dimensions"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastMaxOp_0 = rewriter.create<::mlir::chlo::BroadcastMaxOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastMaxOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:508
*/
struct GeneratedConvert47 : public ::mlir::RewritePattern {
  GeneratedConvert47(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Relu6", {"mhlo.clamp", "mhlo.constant"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::Relu6Op>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Relu6' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    if (!(((((*input.begin()).getType()).isa<::mlir::TensorType>())) && (((((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF16())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF32())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF64())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isBF16())) || ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'input' failed to satisfy constraint: tensor of signed integer or floating-point values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*input.begin())),0)
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*input.begin())),6)
      );
    }
    ::mlir::mhlo::ClampOp tblgen_ClampOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ClampOp_2 = rewriter.create<::mlir::mhlo::ClampOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ClampOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:523
*/
struct GeneratedConvert48 : public ::mlir::RewritePattern {
  GeneratedConvert48(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ReluGrad", {"chlo.broadcast_compare", "mhlo.constant", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation::operand_range gradients(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReluGradOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.ReluGrad' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    gradients = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.ReluGrad' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*features.begin())),0)
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_1 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("GT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::getSplat(&rewriter, (*gradients.begin()), 0)
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_BroadcastCompareOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*gradients.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_3 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:545
*/
struct GeneratedConvert49 : public ::mlir::RewritePattern {
  GeneratedConvert49(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Slice", {"mhlo.dynamic-slice"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute slice_sizes;
    ::mlir::Operation::operand_range starting_indices(op0->getOperands());
    ::mlir::TF::SliceOp op;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SliceOp>(op0); (void)castedOp0;
    op = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Slice' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Slice' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    starting_indices = castedOp0.getODSOperands(1);
    {
      auto *op1 = (*castedOp0.getODSOperands(2).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        slice_sizes = arg1_0;
        if (!((true))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'any attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }
    if (!((CanBeTranslatedToDynamicSlice((*input.begin()), (*starting_indices.begin()), slice_sizes.cast<DenseIntElementsAttr>())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'input, starting_indices, slice_sizes' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DynamicSliceOp tblgen_DynamicSliceOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      for (auto v: UnpackTensorAlongZeroDim((*op.getODSResults(0).begin()).getLoc(), CastValueToI64((*op.getODSResults(0).begin()).getLoc(), (*starting_indices.begin()), &rewriter), &rewriter).output()) {
        tblgen_values.push_back(v);
      }
      if (auto tmpAttr = TFSliceSizes2HLOSliceSizes((*input.begin()), (*starting_indices.begin()), slice_sizes.cast<DenseIntElementsAttr>(),&rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("slice_sizes"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DynamicSliceOp_0 = rewriter.create<::mlir::mhlo::DynamicSliceOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DynamicSliceOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:557
*/
struct GeneratedConvert50 : public ::mlir::RewritePattern {
  GeneratedConvert50(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SelectV2", {"chlo.broadcast_select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range on_false(op0->getOperands());
    ::mlir::Operation::operand_range pred(op0->getOperands());
    ::mlir::Operation::operand_range on_true(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SelectV2Op>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SelectV2' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    pred = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.SelectV2' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    on_true = castedOp0.getODSOperands(1);
    if (!((((*castedOp0.getODSOperands(2).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 2 of op 'tf.SelectV2' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    on_false = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::BroadcastSelectOp tblgen_BroadcastSelectOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*pred.begin()));
      tblgen_values.push_back((*on_true.begin()));
      tblgen_values.push_back((*on_false.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastSelectOp_0 = rewriter.create<::mlir::chlo::BroadcastSelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastSelectOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:569
*/
struct GeneratedConvert51 : public ::mlir::RewritePattern {
  GeneratedConvert51(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.PartitionedCall", {"std.call"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr executor_type;
    ::mlir::StringAttr config;
    ::mlir::TF::PartitionedCallOp op;
    ::mlir::StringAttr config_proto;
    ::mlir::SymbolRefAttr f;
    ::mlir::Operation::operand_range args(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PartitionedCallOp>(op0); (void)castedOp0;
    op = castedOp0;
    args = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::SymbolRefAttr>("f");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.PartitionedCall' to have attribute 'f' of type '::mlir::SymbolRefAttr'";
        });
      }
      if (!((tblgen_attr.isa<::mlir::FlatSymbolRefAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.PartitionedCall' attribute 'f' failed to satisfy constraint: flat symbol reference attribute";
        });
      }
      f = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("config");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.PartitionedCall' to have attribute 'config' of type '::mlir::StringAttr'";
        });
      }
      config = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("config_proto");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.PartitionedCall' to have attribute 'config_proto' of type '::mlir::StringAttr'";
        });
      }
      config_proto = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("executor_type");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.PartitionedCall' to have attribute 'executor_type' of type '::mlir::StringAttr'";
        });
      }
      executor_type = tblgen_attr;
    }
    if (!((ArgTypesMatchCallee(op.getODSResults(0)[0].getOwner(), args, f)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'op, args, f' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    CallOp tblgen_CallOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = f) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("callee"), tmpAttr);
      }
      for (auto v: args) {
        tblgen_values.push_back(v);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CallOp_0 = rewriter.create<CallOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CallOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:569
*/
struct GeneratedConvert52 : public ::mlir::RewritePattern {
  GeneratedConvert52(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.StatefulPartitionedCall", {"std.call"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr executor_type;
    ::mlir::StringAttr config;
    ::mlir::TF::StatefulPartitionedCallOp op;
    ::mlir::StringAttr config_proto;
    ::mlir::FlatSymbolRefAttr f;
    ::mlir::Operation::operand_range args(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::StatefulPartitionedCallOp>(op0); (void)castedOp0;
    op = castedOp0;
    args = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FlatSymbolRefAttr>("f");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.StatefulPartitionedCall' to have attribute 'f' of type '::mlir::FlatSymbolRefAttr'";
        });
      }
      if (!((tblgen_attr.isa<::mlir::FlatSymbolRefAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.StatefulPartitionedCall' attribute 'f' failed to satisfy constraint: flat symbol reference attribute";
        });
      }
      f = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("config");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.StatefulPartitionedCall' to have attribute 'config' of type '::mlir::StringAttr'";
        });
      }
      config = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("config_proto");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.StatefulPartitionedCall' to have attribute 'config_proto' of type '::mlir::StringAttr'";
        });
      }
      config_proto = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("executor_type");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.StatefulPartitionedCall' to have attribute 'executor_type' of type '::mlir::StringAttr'";
        });
      }
      executor_type = tblgen_attr;
    }
    if (!((ArgTypesMatchCallee(op.getODSResults(0)[0].getOwner(), args, f)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'op, args, f' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    CallOp tblgen_CallOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = f) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("callee"), tmpAttr);
      }
      for (auto v: args) {
        tblgen_values.push_back(v);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CallOp_0 = rewriter.create<CallOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CallOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:577
*/
struct GeneratedConvert53 : public ::mlir::RewritePattern {
  GeneratedConvert53(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LegacyCall", {"std.call"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr attr;
    ::mlir::TF::LegacyCallOp op;
    ::mlir::FlatSymbolRefAttr f;
    ::mlir::Operation::operand_range args(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LegacyCallOp>(op0); (void)castedOp0;
    op = castedOp0;
    args = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FlatSymbolRefAttr>("f");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.LegacyCall' to have attribute 'f' of type '::mlir::FlatSymbolRefAttr'";
        });
      }
      if (!((tblgen_attr.isa<::mlir::FlatSymbolRefAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.LegacyCall' attribute 'f' failed to satisfy constraint: flat symbol reference attribute";
        });
      }
      f = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("_disable_call_shape_inference");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      attr = tblgen_attr;
    }
    if (!((ArgTypesMatchCallee(op.getODSResults(0)[0].getOwner(), args, f)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'op, args, f' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    CallOp tblgen_CallOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = f) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("callee"), tmpAttr);
      }
      for (auto v: args) {
        tblgen_values.push_back(v);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CallOp_0 = rewriter.create<CallOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CallOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:588
*/
struct GeneratedConvert54 : public ::mlir::RewritePattern {
  GeneratedConvert54(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ReverseV2", {"mhlo.reverse"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute axis;
    ::mlir::Operation::operand_range values(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReverseV2Op>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.ReverseV2' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    values = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        axis = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ReverseOp tblgen_ReverseOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*values.begin()));
      if (auto tmpAttr = ConvertAxisAttr((*values.begin()), axis.cast<ElementsAttr>(), &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("dimensions"), tmpAttr);
      }
      tblgen_ReverseOp_0 = rewriter.create<::mlir::mhlo::ReverseOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReverseOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert55 : public ::mlir::RewritePattern {
  GeneratedConvert55(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Abs", {"mhlo.abs"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AbsOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Abs' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AbsOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert56 : public ::mlir::RewritePattern {
  GeneratedConvert56(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Acos", {"chlo.acos"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AcosOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Acos' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AcosOp tblgen_AcosOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AcosOp_0 = rewriter.create<::mlir::chlo::AcosOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AcosOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert57 : public ::mlir::RewritePattern {
  GeneratedConvert57(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Acosh", {"chlo.acosh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AcoshOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Acosh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AcoshOp tblgen_AcoshOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AcoshOp_0 = rewriter.create<::mlir::chlo::AcoshOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AcoshOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert58 : public ::mlir::RewritePattern {
  GeneratedConvert58(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Asin", {"chlo.asin"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AsinOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Asin' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AsinOp tblgen_AsinOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AsinOp_0 = rewriter.create<::mlir::chlo::AsinOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AsinOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert59 : public ::mlir::RewritePattern {
  GeneratedConvert59(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Asinh", {"chlo.asinh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AsinhOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Asinh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AsinhOp tblgen_AsinhOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AsinhOp_0 = rewriter.create<::mlir::chlo::AsinhOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AsinhOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert60 : public ::mlir::RewritePattern {
  GeneratedConvert60(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Atan", {"chlo.atan"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AtanOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Atan' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AtanOp tblgen_AtanOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AtanOp_0 = rewriter.create<::mlir::chlo::AtanOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AtanOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert61 : public ::mlir::RewritePattern {
  GeneratedConvert61(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Atanh", {"chlo.atanh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AtanhOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Atanh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::AtanhOp tblgen_AtanhOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_AtanhOp_0 = rewriter.create<::mlir::chlo::AtanhOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AtanhOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert62 : public ::mlir::RewritePattern {
  GeneratedConvert62(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Ceil", {"mhlo.ceil"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CeilOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Ceil' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CeilOp tblgen_CeilOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_CeilOp_0 = rewriter.create<::mlir::mhlo::CeilOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CeilOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert63 : public ::mlir::RewritePattern {
  GeneratedConvert63(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Cosh", {"chlo.cosh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CoshOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Cosh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::CoshOp tblgen_CoshOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_CoshOp_0 = rewriter.create<::mlir::chlo::CoshOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CoshOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert64 : public ::mlir::RewritePattern {
  GeneratedConvert64(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ComplexAbs", {"mhlo.abs"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ComplexAbsOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.ComplexAbs' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AbsOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert65 : public ::mlir::RewritePattern {
  GeneratedConvert65(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Conj", {"chlo.conj"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ConjOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Conj' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::ConjOp tblgen_ConjOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_ConjOp_0 = rewriter.create<::mlir::chlo::ConjOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConjOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert66 : public ::mlir::RewritePattern {
  GeneratedConvert66(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Cos", {"mhlo.cosine"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CosOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Cos' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CosOp tblgen_CosOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_CosOp_0 = rewriter.create<::mlir::mhlo::CosOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CosOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert67 : public ::mlir::RewritePattern {
  GeneratedConvert67(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Digamma", {"chlo.digamma"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::DigammaOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Digamma' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::DigammaOp tblgen_DigammaOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_DigammaOp_0 = rewriter.create<::mlir::chlo::DigammaOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DigammaOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert68 : public ::mlir::RewritePattern {
  GeneratedConvert68(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Exp", {"mhlo.exponential"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ExpOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Exp' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ExpOp tblgen_ExpOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_ExpOp_0 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ExpOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert69 : public ::mlir::RewritePattern {
  GeneratedConvert69(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Expm1", {"mhlo.exponential_minus_one"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::Expm1Op>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Expm1' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::Expm1Op tblgen_Expm1Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_Expm1Op_0 = rewriter.create<::mlir::mhlo::Expm1Op>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Expm1Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert70 : public ::mlir::RewritePattern {
  GeneratedConvert70(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Erf", {"chlo.erf"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ErfOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Erf' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::ErfOp tblgen_ErfOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_ErfOp_0 = rewriter.create<::mlir::chlo::ErfOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ErfOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert71 : public ::mlir::RewritePattern {
  GeneratedConvert71(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Erfc", {"chlo.erfc"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ErfcOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Erfc' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::ErfcOp tblgen_ErfcOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_ErfcOp_0 = rewriter.create<::mlir::chlo::ErfcOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ErfcOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert72 : public ::mlir::RewritePattern {
  GeneratedConvert72(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Floor", {"mhlo.floor"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FloorOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Floor' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::FloorOp tblgen_FloorOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_FloorOp_0 = rewriter.create<::mlir::mhlo::FloorOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_FloorOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert73 : public ::mlir::RewritePattern {
  GeneratedConvert73(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Imag", {"mhlo.imag"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ImagOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Imag' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ImagOp tblgen_ImagOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ImagOp_0 = rewriter.create<::mlir::mhlo::ImagOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ImagOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert74 : public ::mlir::RewritePattern {
  GeneratedConvert74(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Invert", {"mhlo.not"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::InvertOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Invert' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::NotOp tblgen_NotOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NotOp_0 = rewriter.create<::mlir::mhlo::NotOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_NotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert75 : public ::mlir::RewritePattern {
  GeneratedConvert75(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IsFinite", {"mhlo.is_finite"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IsFiniteOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.IsFinite' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::IsFiniteOp tblgen_IsFiniteOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_IsFiniteOp_0 = rewriter.create<::mlir::mhlo::IsFiniteOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_IsFiniteOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert76 : public ::mlir::RewritePattern {
  GeneratedConvert76(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IsInf", {"chlo.is_inf"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IsInfOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.IsInf' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::IsInfOp tblgen_IsInfOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_IsInfOp_0 = rewriter.create<::mlir::chlo::IsInfOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_IsInfOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert77 : public ::mlir::RewritePattern {
  GeneratedConvert77(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Lgamma", {"chlo.lgamma"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LgammaOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Lgamma' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::LgammaOp tblgen_LgammaOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_LgammaOp_0 = rewriter.create<::mlir::chlo::LgammaOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LgammaOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert78 : public ::mlir::RewritePattern {
  GeneratedConvert78(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Log", {"mhlo.log"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Log' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::LogOp tblgen_LogOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_LogOp_0 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LogOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert79 : public ::mlir::RewritePattern {
  GeneratedConvert79(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Log1p", {"mhlo.log_plus_one"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::Log1pOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Log1p' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_Log1pOp_0 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Log1pOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert80 : public ::mlir::RewritePattern {
  GeneratedConvert80(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"mhlo.not"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.LogicalNot' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::NotOp tblgen_NotOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NotOp_0 = rewriter.create<::mlir::mhlo::NotOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_NotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert81 : public ::mlir::RewritePattern {
  GeneratedConvert81(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Neg", {"mhlo.negate"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::NegOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Neg' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::NegOp tblgen_NegOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NegOp_0 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_NegOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert82 : public ::mlir::RewritePattern {
  GeneratedConvert82(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Real", {"mhlo.real"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RealOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Real' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::RealOp tblgen_RealOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_RealOp_0 = rewriter.create<::mlir::mhlo::RealOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_RealOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert83 : public ::mlir::RewritePattern {
  GeneratedConvert83(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Rsqrt", {"mhlo.rsqrt"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RsqrtOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Rsqrt' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::RsqrtOp tblgen_RsqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_RsqrtOp_0 = rewriter.create<::mlir::mhlo::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_RsqrtOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert84 : public ::mlir::RewritePattern {
  GeneratedConvert84(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sigmoid", {"mhlo.logistic"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SigmoidOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Sigmoid' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::LogisticOp tblgen_LogisticOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_LogisticOp_0 = rewriter.create<::mlir::mhlo::LogisticOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LogisticOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert85 : public ::mlir::RewritePattern {
  GeneratedConvert85(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sinh", {"chlo.sinh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SinhOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Sinh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::SinhOp tblgen_SinhOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_SinhOp_0 = rewriter.create<::mlir::chlo::SinhOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SinhOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert86 : public ::mlir::RewritePattern {
  GeneratedConvert86(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sin", {"mhlo.sine"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SinOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Sin' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::SinOp tblgen_SinOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_SinOp_0 = rewriter.create<::mlir::mhlo::SinOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SinOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert87 : public ::mlir::RewritePattern {
  GeneratedConvert87(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sqrt", {"mhlo.sqrt"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Sqrt' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_SqrtOp_0 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SqrtOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert88 : public ::mlir::RewritePattern {
  GeneratedConvert88(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Tanh", {"mhlo.tanh"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::TanhOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Tanh' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::TanhOp tblgen_TanhOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_TanhOp_0 = rewriter.create<::mlir::mhlo::TanhOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TanhOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:632
*/
struct GeneratedConvert89 : public ::mlir::RewritePattern {
  GeneratedConvert89(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Tan", {"chlo.tan"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::TanOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Tan' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::chlo::TanOp tblgen_TanOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_TanOp_0 = rewriter.create<::mlir::chlo::TanOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TanOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:636
*/
struct GeneratedConvert90 : public ::mlir::RewritePattern {
  GeneratedConvert90(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Angle", {"mhlo.atan2", "mhlo.imag", "mhlo.real"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AngleOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ImagOp tblgen_ImagOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      tblgen_ImagOp_0 = rewriter.create<::mlir::mhlo::ImagOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::RealOp tblgen_RealOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      tblgen_RealOp_1 = rewriter.create<::mlir::mhlo::RealOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ImagOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_RealOp_1.getODSResults(0).begin()));
      tblgen_Atan2Op_2 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Atan2Op_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:640
*/
struct GeneratedConvert91 : public ::mlir::RewritePattern {
  GeneratedConvert91(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Cast", {"mhlo.convert"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::CastOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Cast' failed to satisfy constraint: 'tensor of pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or floating-point values'";
      });
    }
    arg = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("Truncate");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(false)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.Cast' attribute 'Truncate' failed to satisfy constraint: constant attribute false";
        });
      }
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConvertOp tblgen_ConvertOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConvertOp_0 = rewriter.create<::mlir::mhlo::ConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:643
*/
struct GeneratedConvert92 : public ::mlir::RewritePattern {
  GeneratedConvert92(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Transpose", {"mhlo.transpose"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    Attribute permutation;
    ::mlir::TF::TransposeOp res;
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::TransposeOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        permutation = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::TransposeOp tblgen_TransposeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      if (auto tmpAttr = hlo::ConvertElementsAttr(permutation.cast<ElementsAttr>(), rewriter.getIntegerType(64)).cast<DenseIntElementsAttr>()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("permutation"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_TransposeOp_0 = rewriter.create<::mlir::mhlo::TransposeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TransposeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:651
*/
struct GeneratedConvert93 : public ::mlir::RewritePattern {
  GeneratedConvert93(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ExpandDims", {"mhlo.reshape"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range ignored(op0->getOperands());
    ::mlir::TF::ExpandDimsOp res;
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ExpandDimsOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);
    ignored = castedOp0.getODSOperands(1);
    if (!((((((*res.getODSResults(0).begin()).getType()).isa<::mlir::TensorType>())) && ((true))) && ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'res' failed to satisfy constraint: statically shaped tensor of any type values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ReshapeOp tblgen_ReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ReshapeOp_0 = rewriter.create<::mlir::mhlo::ReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:651
*/
struct GeneratedConvert94 : public ::mlir::RewritePattern {
  GeneratedConvert94(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Reshape", {"mhlo.reshape"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range ignored(op0->getOperands());
    ::mlir::TF::ReshapeOp res;
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReshapeOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);
    ignored = castedOp0.getODSOperands(1);
    if (!((((((*res.getODSResults(0).begin()).getType()).isa<::mlir::TensorType>())) && ((true))) && ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'res' failed to satisfy constraint: statically shaped tensor of any type values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ReshapeOp tblgen_ReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ReshapeOp_0 = rewriter.create<::mlir::mhlo::ReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:651
*/
struct GeneratedConvert95 : public ::mlir::RewritePattern {
  GeneratedConvert95(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Squeeze", {"mhlo.reshape"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::ArrayAttr ignored;
    ::mlir::TF::SqueezeOp res;
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SqueezeOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::ArrayAttr>("squeeze_dims");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getI64ArrayAttr({});
      ignored = tblgen_attr;
    }
    if (!((((((*res.getODSResults(0).begin()).getType()).isa<::mlir::TensorType>())) && ((true))) && ((((*res.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'res' failed to satisfy constraint: statically shaped tensor of any type values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ReshapeOp tblgen_ReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ReshapeOp_0 = rewriter.create<::mlir::mhlo::ReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:656
*/
struct GeneratedConvert96 : public ::mlir::RewritePattern {
  GeneratedConvert96(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sign", {"mhlo.sign"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SignOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::SignOp tblgen_SignOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_SignOp_0 = rewriter.create<::mlir::mhlo::SignOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SignOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:668
*/
struct GeneratedConvert97 : public ::mlir::RewritePattern {
  GeneratedConvert97(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Bitcast", {"mhlo.bitcast_convert"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::TF::BitcastOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BitcastOp>(op0); (void)castedOp0;
    res = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(1))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64)))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Bitcast' failed to satisfy constraint: 'tensor of floating-point or pred (AKA boolean or 1-bit integer) or 8/16/32/64-bit signless integer or 8/16/32/64-bit unsigned integer or complex type with 32-bit float or 64-bit float elements values'";
      });
    }
    arg = castedOp0.getODSOperands(0);
    if (!((getElementTypeOrSelf((*res.getODSResults(0).begin()).getType()).isIntOrFloat() && getElementTypeOrSelf((*arg.begin()).getType()).isIntOrFloat() && getElementTypeOrSelf((*res.getODSResults(0).begin()).getType()).getIntOrFloatBitWidth() == getElementTypeOrSelf((*arg.begin()).getType()).getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: element types must be integers or floats of same width";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::BitcastConvertOp tblgen_BitcastConvertOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BitcastConvertOp_0 = rewriter.create<::mlir::mhlo::BitcastConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BitcastConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:682
*/
struct GeneratedConvert98 : public ::mlir::RewritePattern {
  GeneratedConvert98(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RandomUniform", {"mhlo.constant", "mhlo.rng_uniform"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr seed2;
    ::mlir::TF::RandomUniformOp old;
    ::mlir::IntegerAttr seed;
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RandomUniformOp>(op0); (void)castedOp0;
    old = castedOp0;
    shape = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("seed");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      seed = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("seed2");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      seed2 = tblgen_attr;
    }
    if (!(((*shape.begin()).getType().isa<RankedTensorType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'shape' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getFloatAttr(old.dtype(), 0.0)
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getFloatAttr(old.dtype(), 1.0)
      );
    }
    ::mlir::mhlo::RngUniformOp tblgen_RngUniformOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      tblgen_values.push_back(CastValueToI64((*old.getODSResults(0).begin()).getLoc(), (*shape.begin()), &rewriter));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_RngUniformOp_2 = rewriter.create<::mlir::mhlo::RngUniformOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_RngUniformOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:682
*/
struct GeneratedConvert99 : public ::mlir::RewritePattern {
  GeneratedConvert99(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RandomStandardNormal", {"mhlo.constant", "mhlo.rng_normal"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr seed2;
    ::mlir::TF::RandomStandardNormalOp old;
    ::mlir::IntegerAttr seed;
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RandomStandardNormalOp>(op0); (void)castedOp0;
    old = castedOp0;
    shape = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("seed");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      seed = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("seed2");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      seed2 = tblgen_attr;
    }
    if (!(((*shape.begin()).getType().isa<RankedTensorType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'shape' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getFloatAttr(old.dtype(), 0.0)
      );
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/rewriter.getFloatAttr(old.dtype(), 1.0)
      );
    }
    ::mlir::mhlo::RngNormalOp tblgen_RngNormalOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      tblgen_values.push_back(CastValueToI64((*old.getODSResults(0).begin()).getLoc(), (*shape.begin()), &rewriter));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_RngNormalOp_2 = rewriter.create<::mlir::mhlo::RngNormalOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_RngNormalOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:698
*/
struct GeneratedConvert100 : public ::mlir::RewritePattern {
  GeneratedConvert100(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SigmoidGrad", {"mhlo.constant", "mhlo.multiply", "mhlo.subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SigmoidGradOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SigmoidGrad' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    l = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.SigmoidGrad' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::MulOp tblgen_MulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*r.begin()));
      tblgen_values.push_back((*l.begin()));
      tblgen_MulOp_0 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::getSplat(&rewriter, (*l.begin()), 1)
      );
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*l.begin()));
      tblgen_SubOp_2 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubOp_2.getODSResults(0).begin()));
      tblgen_MulOp_3 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:709
*/
struct GeneratedConvert101 : public ::mlir::RewritePattern {
  GeneratedConvert101(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Softplus", {"chlo.broadcast_add", "chlo.broadcast_compare", "mhlo.constant", "mhlo.exponential", "mhlo.log", "mhlo.log_plus_one", "mhlo.negate", "mhlo.select"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SoftplusOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Softplus' failed to satisfy constraint: 'tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::mhlo::ExpOp features_exp;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features.begin()));
      features_exp = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/GetEpsilonValue((*features.begin()).getType())
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_LogOp_1 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*features.begin())),2)
      );
    }
    ::mlir::chlo::BroadcastAddOp threshold;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LogOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      threshold = rewriter.create<::mlir::chlo::BroadcastAddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr()
      );
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*threshold.getODSResults(0).begin()));
      tblgen_NegOp_3 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_NegOp_3.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_4 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("GT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::chlo::BroadcastCompareOp tblgen_BroadcastCompareOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*features.begin());
      ::mlir::Value tblgen_value_1 = (*threshold.getODSResults(0).begin());
      tblgen_BroadcastCompareOp_5 = rewriter.create<::mlir::chlo::BroadcastCompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        /*broadcast_dimensions=*/DenseIntElementsAttr(),
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features_exp.getODSResults(0).begin()));
      tblgen_Log1pOp_6 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_BroadcastCompareOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*features_exp.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_Log1pOp_6.getODSResults(0).begin());
      tblgen_SelectOp_7 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::SelectOp output;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_BroadcastCompareOp_4.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*features.begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_SelectOp_7.getODSResults(0).begin());
      output = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ output.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:745
*/
struct GeneratedConvert102 : public ::mlir::RewritePattern {
  GeneratedConvert102(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.XlaReplicaId", {"mhlo.replica_id", "tf.Cast"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XlaReplicaIdOp>(op0); (void)castedOp0;

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ReplicaIdOp tblgen_ReplicaIdOp_0;
    {
      tblgen_ReplicaIdOp_0 = rewriter.create<::mlir::mhlo::ReplicaIdOp>(odsLoc
      );
    }
    ::mlir::TF::CastOp tblgen_CastOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ReplicaIdOp_0.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(false)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("Truncate"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CastOp_1 = rewriter.create<::mlir::TF::CastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CastOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:756
*/
struct GeneratedConvert103 : public ::mlir::RewritePattern {
  GeneratedConvert103(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.XlaGather", {"mhlo.gather"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr indices_are_sorted;
    ::mlir::StringAttr dimension_numbers;
    Attribute slice_sizes;
    ::mlir::Operation::operand_range operand(op0->getOperands());
    ::mlir::Operation::operand_range start_indices(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XlaGatherOp>(op0); (void)castedOp0;
    operand = castedOp0.getODSOperands(0);
    start_indices = castedOp0.getODSOperands(1);
    {
      auto *op1 = (*castedOp0.getODSOperands(2).begin()).getDefiningOp();
        if(!op1) return ::mlir::failure();
        Attribute arg1_0;
        if (failed(success(matchPattern(op1->getResult(0), m_Constant(&arg1_0))))) return ::mlir::failure();
        slice_sizes = arg1_0;
        if (!((arg1_0.isa<::mlir::ElementsAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "operand 0 of native code call 'success(matchPattern($0->getResult(0), m_Constant(&$1)))' failed to satisfy constraint: 'constant vector/tensor attribute'";
          });
        }
      tblgen_ops[1] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("dimension_numbers");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.XlaGather' to have attribute 'dimension_numbers' of type '::mlir::StringAttr'";
        });
      }
      dimension_numbers = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("indices_are_sorted");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.XlaGather' to have attribute 'indices_are_sorted' of type '::mlir::BoolAttr'";
        });
      }
      indices_are_sorted = tblgen_attr;
    }
    if (!((HasValidGatherDims(dimension_numbers)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'dimension_numbers' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::GatherOp tblgen_GatherOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*operand.begin()));
      tblgen_values.push_back((*start_indices.begin()));
      if (auto tmpAttr = GetGatherDimNumsAttr(dimension_numbers, &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = hlo::ConvertElementsAttr(slice_sizes.cast<ElementsAttr>(), rewriter.getIntegerType(64)).cast<DenseIntElementsAttr>()) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("slice_sizes"), tmpAttr);
      }
      if (auto tmpAttr = indices_are_sorted) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("indices_are_sorted"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_GatherOp_0 = rewriter.create<::mlir::mhlo::GatherOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_GatherOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/xla/transforms/legalize_tf_patterns.td:777
*/
struct GeneratedConvert104 : public ::mlir::RewritePattern {
  GeneratedConvert104(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.XlaDotV2", {"mhlo.dot_general"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr precision_config;
    ::mlir::StringAttr dimension_numbers;
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XlaDotV2Op>(op0); (void)castedOp0;
    lhs = castedOp0.getODSOperands(0);
    rhs = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("dimension_numbers");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.XlaDotV2' to have attribute 'dimension_numbers' of type '::mlir::StringAttr'";
        });
      }
      dimension_numbers = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("precision_config");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.XlaDotV2' to have attribute 'precision_config' of type '::mlir::StringAttr'";
        });
      }
      precision_config = tblgen_attr;
    }
    if (!((HasValidDotDims(dimension_numbers)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'dimension_numbers' failed to satisfy constraint: ";
      });
    }
    if (!((HasValidPrecisionConfig(precision_config)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'precision_config' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DotGeneralOp tblgen_DotGeneralOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = GetDotDimNumsAttr(dimension_numbers, &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("dot_dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = GetPrecisionConfigAttr(precision_config, &rewriter)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("precision_config"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotGeneralOp_0 = rewriter.create<::mlir::mhlo::DotGeneralOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotGeneralOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<LegalizeGatherV2>(patterns.getContext());
  patterns.add<LowerAssert>(patterns.getContext());
  patterns.add<LowerRightShiftSigned>(patterns.getContext());
  patterns.add<GeneratedConvert0>(patterns.getContext());
  patterns.add<GeneratedConvert1>(patterns.getContext());
  patterns.add<GeneratedConvert2>(patterns.getContext());
  patterns.add<GeneratedConvert3>(patterns.getContext());
  patterns.add<GeneratedConvert4>(patterns.getContext());
  patterns.add<GeneratedConvert5>(patterns.getContext());
  patterns.add<GeneratedConvert6>(patterns.getContext());
  patterns.add<GeneratedConvert7>(patterns.getContext());
  patterns.add<GeneratedConvert8>(patterns.getContext());
  patterns.add<GeneratedConvert9>(patterns.getContext());
  patterns.add<GeneratedConvert10>(patterns.getContext());
  patterns.add<GeneratedConvert11>(patterns.getContext());
  patterns.add<GeneratedConvert12>(patterns.getContext());
  patterns.add<GeneratedConvert13>(patterns.getContext());
  patterns.add<GeneratedConvert14>(patterns.getContext());
  patterns.add<GeneratedConvert15>(patterns.getContext());
  patterns.add<GeneratedConvert16>(patterns.getContext());
  patterns.add<GeneratedConvert17>(patterns.getContext());
  patterns.add<GeneratedConvert18>(patterns.getContext());
  patterns.add<GeneratedConvert19>(patterns.getContext());
  patterns.add<GeneratedConvert20>(patterns.getContext());
  patterns.add<GeneratedConvert21>(patterns.getContext());
  patterns.add<GeneratedConvert22>(patterns.getContext());
  patterns.add<GeneratedConvert23>(patterns.getContext());
  patterns.add<GeneratedConvert24>(patterns.getContext());
  patterns.add<GeneratedConvert25>(patterns.getContext());
  patterns.add<GeneratedConvert26>(patterns.getContext());
  patterns.add<GeneratedConvert27>(patterns.getContext());
  patterns.add<GeneratedConvert28>(patterns.getContext());
  patterns.add<GeneratedConvert29>(patterns.getContext());
  patterns.add<GeneratedConvert30>(patterns.getContext());
  patterns.add<GeneratedConvert31>(patterns.getContext());
  patterns.add<GeneratedConvert32>(patterns.getContext());
  patterns.add<GeneratedConvert33>(patterns.getContext());
  patterns.add<GeneratedConvert34>(patterns.getContext());
  patterns.add<GeneratedConvert35>(patterns.getContext());
  patterns.add<GeneratedConvert36>(patterns.getContext());
  patterns.add<GeneratedConvert37>(patterns.getContext());
  patterns.add<GeneratedConvert38>(patterns.getContext());
  patterns.add<GeneratedConvert39>(patterns.getContext());
  patterns.add<GeneratedConvert40>(patterns.getContext());
  patterns.add<GeneratedConvert41>(patterns.getContext());
  patterns.add<GeneratedConvert42>(patterns.getContext());
  patterns.add<GeneratedConvert43>(patterns.getContext());
  patterns.add<GeneratedConvert44>(patterns.getContext());
  patterns.add<GeneratedConvert45>(patterns.getContext());
  patterns.add<GeneratedConvert46>(patterns.getContext());
  patterns.add<GeneratedConvert47>(patterns.getContext());
  patterns.add<GeneratedConvert48>(patterns.getContext());
  patterns.add<GeneratedConvert49>(patterns.getContext());
  patterns.add<GeneratedConvert50>(patterns.getContext());
  patterns.add<GeneratedConvert51>(patterns.getContext());
  patterns.add<GeneratedConvert52>(patterns.getContext());
  patterns.add<GeneratedConvert53>(patterns.getContext());
  patterns.add<GeneratedConvert54>(patterns.getContext());
  patterns.add<GeneratedConvert55>(patterns.getContext());
  patterns.add<GeneratedConvert56>(patterns.getContext());
  patterns.add<GeneratedConvert57>(patterns.getContext());
  patterns.add<GeneratedConvert58>(patterns.getContext());
  patterns.add<GeneratedConvert59>(patterns.getContext());
  patterns.add<GeneratedConvert60>(patterns.getContext());
  patterns.add<GeneratedConvert61>(patterns.getContext());
  patterns.add<GeneratedConvert62>(patterns.getContext());
  patterns.add<GeneratedConvert63>(patterns.getContext());
  patterns.add<GeneratedConvert64>(patterns.getContext());
  patterns.add<GeneratedConvert65>(patterns.getContext());
  patterns.add<GeneratedConvert66>(patterns.getContext());
  patterns.add<GeneratedConvert67>(patterns.getContext());
  patterns.add<GeneratedConvert68>(patterns.getContext());
  patterns.add<GeneratedConvert69>(patterns.getContext());
  patterns.add<GeneratedConvert70>(patterns.getContext());
  patterns.add<GeneratedConvert71>(patterns.getContext());
  patterns.add<GeneratedConvert72>(patterns.getContext());
  patterns.add<GeneratedConvert73>(patterns.getContext());
  patterns.add<GeneratedConvert74>(patterns.getContext());
  patterns.add<GeneratedConvert75>(patterns.getContext());
  patterns.add<GeneratedConvert76>(patterns.getContext());
  patterns.add<GeneratedConvert77>(patterns.getContext());
  patterns.add<GeneratedConvert78>(patterns.getContext());
  patterns.add<GeneratedConvert79>(patterns.getContext());
  patterns.add<GeneratedConvert80>(patterns.getContext());
  patterns.add<GeneratedConvert81>(patterns.getContext());
  patterns.add<GeneratedConvert82>(patterns.getContext());
  patterns.add<GeneratedConvert83>(patterns.getContext());
  patterns.add<GeneratedConvert84>(patterns.getContext());
  patterns.add<GeneratedConvert85>(patterns.getContext());
  patterns.add<GeneratedConvert86>(patterns.getContext());
  patterns.add<GeneratedConvert87>(patterns.getContext());
  patterns.add<GeneratedConvert88>(patterns.getContext());
  patterns.add<GeneratedConvert89>(patterns.getContext());
  patterns.add<GeneratedConvert90>(patterns.getContext());
  patterns.add<GeneratedConvert91>(patterns.getContext());
  patterns.add<GeneratedConvert92>(patterns.getContext());
  patterns.add<GeneratedConvert93>(patterns.getContext());
  patterns.add<GeneratedConvert94>(patterns.getContext());
  patterns.add<GeneratedConvert95>(patterns.getContext());
  patterns.add<GeneratedConvert96>(patterns.getContext());
  patterns.add<GeneratedConvert97>(patterns.getContext());
  patterns.add<GeneratedConvert98>(patterns.getContext());
  patterns.add<GeneratedConvert99>(patterns.getContext());
  patterns.add<GeneratedConvert100>(patterns.getContext());
  patterns.add<GeneratedConvert101>(patterns.getContext());
  patterns.add<GeneratedConvert102>(patterns.getContext());
  patterns.add<GeneratedConvert103>(patterns.getContext());
  patterns.add<GeneratedConvert104>(patterns.getContext());
}
