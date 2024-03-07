/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:54
*/
struct LowerBiasAddGradOp : public ::mlir::RewritePattern {
  LowerBiasAddGradOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BiasAddGrad", {"tf.Const", "tf.Sum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr data_format;
    ::mlir::Operation::operand_range out_backprop(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BiasAddGradOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.BiasAddGrad' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    out_backprop = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("data_format");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getStringAttr("NHWC");
      data_format = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetBiasAddGradReductionIndices((*out_backprop.begin()).getType().cast<RankedTensorType>().getRank(), data_format, &rewriter)
      );
    }
    ::mlir::TF::SumOp tblgen_SumOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*out_backprop.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(false)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("keep_dims"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SumOp_1 = rewriter.create<::mlir::TF::SumOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SumOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:161
*/
struct LowerDivNoNanOp : public ::mlir::RewritePattern {
  LowerDivNoNanOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.DivNoNan", {"tf.Const", "tf.Div", "tf.Equal", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::DivNoNanOp>(op0); (void)castedOp0;
    l = castedOp0.getODSOperands(0);
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*r.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*r.begin());
      tblgen_DivOp_1 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_EqualOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_DivOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_2 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:176
*/
struct LowerEmptyOp : public ::mlir::RewritePattern {
  LowerEmptyOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Empty", {"tf.BroadcastTo", "tf.Const"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr init;
    ::mlir::TF::EmptyOp result;
    ::mlir::Operation::operand_range dims(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::EmptyOp>(op0); (void)castedOp0;
    result = castedOp0;
    dims = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("init");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.getValue()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.Empty' attribute 'init' failed to satisfy constraint: ";
        });
      }
      init = tblgen_attr;
    }
    if (!(((((*result.getODSResults(0).begin()).getType()).isa<::mlir::TensorType>())) && (((((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || ((((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF16())) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF32())) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isF64())) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || (((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isBF16())) || ((((*result.getODSResults(0).begin()).getType()).cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>()))))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'result' failed to satisfy constraint: tensor of signed integer or floating-point values";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*result.getODSResults(0).begin())),0)
      );
    }
    ::mlir::TF::BroadcastToOp tblgen_BroadcastToOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*dims.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastToOp_1 = rewriter.create<::mlir::TF::BroadcastToOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastToOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:356
*/
struct LowerFakeQuantWithMinMaxArgs : public ::mlir::RewritePattern {
  LowerFakeQuantWithMinMaxArgs(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.FakeQuantWithMinMaxArgs", {"tf.Const", "tf.FakeQuantWithMinMaxVars"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr narrow_range;
    ::mlir::IntegerAttr bits;
    ::mlir::FloatAttr max;
    ::mlir::FloatAttr min;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FakeQuantWithMinMaxArgsOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF64())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isBF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.FakeQuantWithMinMaxArgs' failed to satisfy constraint: 'tensor of floating-point values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FloatAttr>("min");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getFloatAttr(rewriter.getF32Type(), -6.0f);
      min = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::FloatAttr>("max");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getFloatAttr(rewriter.getF32Type(), 6.0f);
      max = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("num_bits");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 8);
      bits = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("narrow_range");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      narrow_range = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/min
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/max
      );
    }
    ::mlir::TF::FakeQuantWithMinMaxVarsOp tblgen_FakeQuantWithMinMaxVarsOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      if (auto tmpAttr = bits) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("num_bits"), tmpAttr);
      }
      if (auto tmpAttr = narrow_range) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("narrow_range"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_FakeQuantWithMinMaxVarsOp_2 = rewriter.create<::mlir::TF::FakeQuantWithMinMaxVarsOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_FakeQuantWithMinMaxVarsOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:169
*/
struct LowerFillOp : public ::mlir::RewritePattern {
  LowerFillOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Fill", {"tf.BroadcastTo"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range value(op0->getOperands());
    ::mlir::Operation::operand_range dims(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::FillOp>(op0); (void)castedOp0;
    dims = castedOp0.getODSOperands(0);
    value = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::BroadcastToOp tblgen_BroadcastToOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*value.begin()));
      tblgen_values.push_back((*dims.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastToOp_0 = rewriter.create<::mlir::TF::BroadcastToOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastToOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:417
*/
struct LowerIsFiniteOp : public ::mlir::RewritePattern {
  LowerIsFiniteOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IsFinite", {"tf.Const", "tf.Equal", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IsFiniteOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*x.begin());
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_1.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(true)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("incompatible_shape_error"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_EqualOp_2 = rewriter.create<::mlir::TF::EqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_EqualOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:185
*/
struct LowerIsInfOp : public ::mlir::RewritePattern {
  LowerIsInfOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IsInf", {"tf.Abs", "tf.Const", "tf.Equal"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IsInfOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::AbsOp abs;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      abs = rewriter.create<::mlir::TF::AbsOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::ConstOp inf;
    {
      inf = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())), std::numeric_limits<double>::infinity())
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*abs.getODSResults(0).begin()));
      tblgen_values.push_back((*inf.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(true)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("incompatible_shape_error"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_EqualOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:194
*/
struct LowerIsNanOp : public ::mlir::RewritePattern {
  LowerIsNanOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.IsNan", {"tf.NotEqual"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::IsNanOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::NotEqualOp tblgen_NotEqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_values.push_back((*x.begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(true)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("incompatible_shape_error"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_NotEqualOp_0 = rewriter.create<::mlir::TF::NotEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_NotEqualOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:211
*/
struct LowerL2LossOp : public ::mlir::RewritePattern {
  LowerL2LossOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.L2Loss", {"tf.Const", "tf.Div", "tf.Mul", "tf.Sum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::L2LossOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.L2Loss' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetI64ElementsAttrForSeq(0, (*input.begin()).getType().cast<RankedTensorType>().getRank(), &rewriter)
      );
    }
    ::mlir::TF::SumOp tblgen_SumOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_1.getODSResults(0).begin());
      tblgen_SumOp_2 = rewriter.create<::mlir::TF::SumOp>(odsLoc,
        /*input=*/tblgen_value_0,
        /*reduction_indices=*/tblgen_value_1,
        rewriter.getBoolAttr(false)
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_3;
    {
      tblgen_ConstOp_3 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),2)
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SumOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_3.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DivOp_4 = rewriter.create<::mlir::TF::DivOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DivOp_4.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:163
*/
struct LowerMulNoNanOp : public ::mlir::RewritePattern {
  LowerMulNoNanOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.MulNoNan", {"tf.Const", "tf.Equal", "tf.Mul", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range r(op0->getOperands());
    ::mlir::Operation::operand_range l(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MulNoNanOp>(op0); (void)castedOp0;
    l = castedOp0.getODSOperands(0);
    r = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*r.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*r.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*l.begin());
      ::mlir::Value tblgen_value_1 = (*r.begin());
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_EqualOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_2 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:374
*/
struct LowerOnesLikeOp : public ::mlir::RewritePattern {
  LowerOnesLikeOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.OnesLike", {"tf.BroadcastTo", "tf.Const"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::OnesLikeOp src_op;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::OnesLikeOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::IntegerType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.OnesLike' failed to satisfy constraint: 'tensor of integer or floating-point or complex-type values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),1)
      );
    }
    ::mlir::TF::BroadcastToOp tblgen_BroadcastToOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back(rewriter.create<TF::ShapeOp>((*src_op.getODSResults(0).begin()).getLoc(), (*input.begin()), rewriter.getBoolAttr(false)));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastToOp_1 = rewriter.create<::mlir::TF::BroadcastToOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastToOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:223
*/
struct LowerPadOp : public ::mlir::RewritePattern {
  LowerPadOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Pad", {"tf.Const", "tf.PadV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range paddings(op0->getOperands());
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::PadOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Pad' failed to satisfy constraint: 'tensor of signless integer or floating-point values'";
      });
    }
    input = castedOp0.getODSOperands(0);
    paddings = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),0)
      );
    }
    ::mlir::TF::PadV2Op tblgen_PadV2Op_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*paddings.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_PadV2Op_1 = rewriter.create<::mlir::TF::PadV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_PadV2Op_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:235
*/
struct LowerReciprocal : public ::mlir::RewritePattern {
  LowerReciprocal(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Reciprocal", {"tf.Const", "tf.Div"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReciprocalOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())),1)
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*x.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DivOp_1 = rewriter.create<::mlir::TF::DivOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DivOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:244
*/
struct LowerRintOp : public ::mlir::RewritePattern {
  LowerRintOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Rint", {"tf.Round"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::RintOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RintOp>(op0); (void)castedOp0;
    res = castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::RoundOp tblgen_RoundOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_RoundOp_0 = rewriter.create<::mlir::TF::RoundOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_RoundOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:253
*/
struct LowerRoundOpOnFloatTensor : public ::mlir::RewritePattern {
  LowerRoundOpOnFloatTensor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Round", {"tf.AddV2", "tf.Const", "tf.Equal", "tf.Floor", "tf.Greater", "tf.LogicalAnd", "tf.LogicalOr", "tf.Mul", "tf.Select", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::RoundOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RoundOp>(op0); (void)castedOp0;
    res = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF64())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isBF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Round' failed to satisfy constraint: 'tensor of floating-point values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::FloorOp round_val;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      round_val = rewriter.create<::mlir::TF::FloorOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp fraction;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*round_val.getODSResults(0).begin());
      fraction = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp half;
    {
      half = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),0.5)
      );
    }
    ::mlir::TF::GreaterOp tblgen_GreaterOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*fraction.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*half.getODSResults(0).begin());
      tblgen_GreaterOp_0 = rewriter.create<::mlir::TF::GreaterOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*fraction.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*half.getODSResults(0).begin());
      tblgen_EqualOp_1 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),2)
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*half.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_MulOp_3 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::FloorOp tblgen_FloorOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_3.getODSResults(0).begin()));
      tblgen_FloorOp_4 = rewriter.create<::mlir::TF::FloorOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_FloorOp_4.getODSResults(0).begin());
      tblgen_MulOp_5 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*round_val.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_5.getODSResults(0).begin());
      tblgen_SubOp_6 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),1)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_6.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*one.getODSResults(0).begin());
      tblgen_EqualOp_7 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::LogicalAndOp tblgen_LogicalAndOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_EqualOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_EqualOp_7.getODSResults(0).begin());
      tblgen_LogicalAndOp_8 = rewriter.create<::mlir::TF::LogicalAndOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::LogicalOrOp tblgen_LogicalOrOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_GreaterOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_LogicalAndOp_8.getODSResults(0).begin());
      tblgen_LogicalOrOp_9 = rewriter.create<::mlir::TF::LogicalOrOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_10;
    {
      ::mlir::Value tblgen_value_0 = (*round_val.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*one.getODSResults(0).begin());
      tblgen_AddV2Op_10 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectOp tblgen_SelectOp_11;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_LogicalOrOp_9.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddV2Op_10.getODSResults(0).begin()));
      tblgen_values.push_back((*round_val.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_11 = rewriter.create<::mlir::TF::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_11.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:247
*/
struct LowerRoundOpOnIntTensor : public ::mlir::RewritePattern {
  LowerRoundOpOnIntTensor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Round", {"tf.Identity"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::RoundOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RoundOp>(op0); (void)castedOp0;
    res = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Round' failed to satisfy constraint: 'tensor of integer values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::IdentityOp tblgen_IdentityOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_IdentityOp_0 = rewriter.create<::mlir::TF::IdentityOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_IdentityOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:291
*/
struct LowerRsqrtGradOp : public ::mlir::RewritePattern {
  LowerRsqrtGradOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RsqrtGrad", {"tf.Const", "tf.Div", "tf.Mul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RsqrtGradOp>(op0); (void)castedOp0;
    lhs = castedOp0.getODSOperands(0);
    rhs = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*lhs.begin());
      ::mlir::Value tblgen_value_1 = (*lhs.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*lhs.begin());
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*rhs.begin())),-2)
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*rhs.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      tblgen_DivOp_3 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_DivOp_3.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_4 = rewriter.create<::mlir::TF::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_4.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:376
*/
struct LowerScatterNdOp : public ::mlir::RewritePattern {
  LowerScatterNdOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ScatterNd", {"tf.Const", "tf.Fill", "tf.TensorScatterAdd"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::Operation::operand_range updates(op0->getOperands());
    ::mlir::Operation::operand_range indices(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ScatterNdOp>(op0); (void)castedOp0;
    indices = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::IntegerType>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.ScatterNd' failed to satisfy constraint: 'tensor of integer or floating-point or complex-type values'";
      });
    }
    updates = castedOp0.getODSOperands(1);
    shape = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*updates.begin())),0)
      );
    }
    ::mlir::TF::FillOp tblgen_FillOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*shape.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_FillOp_1 = rewriter.create<::mlir::TF::FillOp>(odsLoc,
        /*dims=*/tblgen_value_0,
        /*value=*/tblgen_value_1
      );
    }
    ::mlir::TF::TensorScatterAddOp tblgen_TensorScatterAddOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_FillOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*indices.begin()));
      tblgen_values.push_back((*updates.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_TensorScatterAddOp_2 = rewriter.create<::mlir::TF::TensorScatterAddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TensorScatterAddOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:311
*/
struct LowerSizeOp : public ::mlir::RewritePattern {
  LowerSizeOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Size", {"tf.Const", "tf.Prod"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::TF::SizeOp res;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SizeOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*res.getODSResults(0).begin())),0)
      );
    }
    ::mlir::TF::ProdOp tblgen_ProdOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(rewriter.create<TF::ShapeOp>((*res.getODSResults(0).begin()).getLoc(), (*arg.begin()), rewriter.getBoolAttr(getElementTypeOrSelf((*res.getODSResults(0).begin()).getType()).isInteger(32))));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(false)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("keep_dims"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ProdOp_1 = rewriter.create<::mlir::TF::ProdOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ProdOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:81
*/
struct LowerSoftmaxCrossEntropyWithLogitsOp : public ::mlir::RewritePattern {
  LowerSoftmaxCrossEntropyWithLogitsOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SoftmaxCrossEntropyWithLogits", {"tf.Const", "tf.LogSoftmax", "tf.MulNoNan", "tf.Neg", "tf.Softmax", "tf.Sub", "tf.Sum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range labels(op0->getOperands());
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SoftmaxCrossEntropyWithLogitsOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SoftmaxCrossEntropyWithLogits' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasRank()))) && ((true)))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.SoftmaxCrossEntropyWithLogits' failed to satisfy constraint: 'ranked tensor of any type values'";
      });
    }
    labels = castedOp0.getODSOperands(1);
    if (!(!(((((*features.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*features.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 0))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'features' failed to satisfy constraint: Non scalar type";
      });
    }
    if (!(!(((((*labels.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*labels.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 0))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'labels' failed to satisfy constraint: Non scalar type";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::LogSoftmaxOp tblgen_LogSoftmaxOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features.begin()));
      tblgen_LogSoftmaxOp_0 = rewriter.create<::mlir::TF::LogSoftmaxOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::NegOp tblgen_NegOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*labels.begin()));
      tblgen_NegOp_1 = rewriter.create<::mlir::TF::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulNoNanOp sum_input;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LogSoftmaxOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_NegOp_1.getODSResults(0).begin());
      sum_input = rewriter.create<::mlir::TF::MulNoNanOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetI64ElementsAttr({-1}, &rewriter)
      );
    }
    ::mlir::TF::SumOp tblgen_SumOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*sum_input.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConstOp_2.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getBoolAttr(false)) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("keep_dims"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SumOp_3 = rewriter.create<::mlir::TF::SumOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SumOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }
    ::mlir::TF::SoftmaxOp tblgen_SoftmaxOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features.begin()));
      tblgen_SoftmaxOp_4 = rewriter.create<::mlir::TF::SoftmaxOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp tblgen_SubOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SoftmaxOp_4.getODSResults(0).begin()));
      tblgen_values.push_back((*labels.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(1)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubOp_5 = rewriter.create<::mlir::TF::SubOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubOp_5.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:112
*/
struct LowerSparseSoftmaxCrossEntropyWithLogitsOp : public ::mlir::RewritePattern {
  LowerSparseSoftmaxCrossEntropyWithLogitsOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SparseSoftmaxCrossEntropyWithLogits", {"tf.AddV2", "tf.Const", "tf.ExpandDims", "tf.Less", "tf.LessEqual", "tf.LogicalAnd", "tf.OneHot", "tf.SelectV2", "tf.SoftmaxCrossEntropyWithLogits"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range sparse_labels(op0->getOperands());
    ::mlir::TF::SparseSoftmaxCrossEntropyWithLogitsOp src_op;
    ::mlir::Operation::operand_range features(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SparseSoftmaxCrossEntropyWithLogitsOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SparseSoftmaxCrossEntropyWithLogits' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    features = castedOp0.getODSOperands(0);
    sparse_labels = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(rewriter.getIntegerType(32), (*features.begin()).getType().cast<RankedTensorType>().getDimSize(1))
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_1;
    {
      tblgen_ConstOp_1 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*features.begin())),1)
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_2;
    {
      tblgen_ConstOp_2 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*features.begin())),0)
      );
    }
    ::mlir::TF::OneHotOp labels;
    {
      ::mlir::Value tblgen_value_0 = (*sparse_labels.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_ConstOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_3 = (*tblgen_ConstOp_2.getODSResults(0).begin());
      labels = rewriter.create<::mlir::TF::OneHotOp>(odsLoc,
        /*indices=*/tblgen_value_0,
        /*depth=*/tblgen_value_1,
        /*on_value=*/tblgen_value_2,
        /*off_value=*/tblgen_value_3,
        rewriter.getIntegerAttr(rewriter.getIntegerType(64), 1)
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_3;
    {
      tblgen_ConstOp_3 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*sparse_labels.begin())),0)
      );
    }
    ::mlir::TF::LessEqualOp tblgen_LessEqualOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_ConstOp_3.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*sparse_labels.begin());
      tblgen_LessEqualOp_4 = rewriter.create<::mlir::TF::LessEqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_5;
    {
      tblgen_ConstOp_5 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*sparse_labels.begin())), (*features.begin()).getType().cast<RankedTensorType>().getDimSize(1))
      );
    }
    ::mlir::TF::LessOp tblgen_LessOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*sparse_labels.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_5.getODSResults(0).begin());
      tblgen_LessOp_6 = rewriter.create<::mlir::TF::LessOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::LogicalAndOp tblgen_LogicalAndOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LessEqualOp_4.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_LessOp_6.getODSResults(0).begin());
      tblgen_LogicalAndOp_7 = rewriter.create<::mlir::TF::LogicalAndOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_8;
    {
      tblgen_ConstOp_8 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*features.begin())),0)
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_9;
    {
      tblgen_ConstOp_9 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*labels.getODSResults(0).begin())), std::numeric_limits<double>::quiet_NaN())
      );
    }
    ::mlir::TF::SelectV2Op zero_or_nan;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LogicalAndOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_ConstOp_9.getODSResults(0).begin());
      zero_or_nan = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc,
        /*condition=*/tblgen_value_0,
        /*t=*/tblgen_value_1,
        /*e=*/tblgen_value_2
      );
    }
    ::mlir::TF::ConstOp tblgen_ConstOp_10;
    {
      tblgen_ConstOp_10 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetI64ElementsAttr({-1}, &rewriter)
      );
    }
    ::mlir::TF::ExpandDimsOp tblgen_ExpandDimsOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*zero_or_nan.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_10.getODSResults(0).begin());
      tblgen_ExpandDimsOp_11 = rewriter.create<::mlir::TF::ExpandDimsOp>(odsLoc,
        /*input=*/tblgen_value_0,
        /*dim=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op adjusted_labels;
    {
      ::mlir::Value tblgen_value_0 = (*labels.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ExpandDimsOp_11.getODSResults(0).begin());
      adjusted_labels = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SoftmaxCrossEntropyWithLogitsOp tblgen_SoftmaxCrossEntropyWithLogitsOp_12;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*features.begin()));
      tblgen_values.push_back((*adjusted_labels.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      for (auto v: castedOp0.getODSResults(1)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SoftmaxCrossEntropyWithLogitsOp_12 = rewriter.create<::mlir::TF::SoftmaxCrossEntropyWithLogitsOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SoftmaxCrossEntropyWithLogitsOp_12.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SoftmaxCrossEntropyWithLogitsOp_12.getODSResults(1) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:332
*/
struct LowerSqrtGradOp : public ::mlir::RewritePattern {
  LowerSqrtGradOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SqrtGrad", {"tf.Const", "tf.Div", "tf.Mul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range dy(op0->getOperands());
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtGradOp>(op0); (void)castedOp0;
    y = castedOp0.getODSOperands(0);
    dy = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*dy.begin())),0.5)
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*dy.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*y.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DivOp_2 = rewriter.create<::mlir::TF::DivOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DivOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:140
*/
struct LowerSquareOp : public ::mlir::RewritePattern {
  LowerSquareOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Square", {"tf.Mul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range val(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SquareOp>(op0); (void)castedOp0;
    val = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*val.begin()));
      tblgen_values.push_back((*val.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:142
*/
struct LowerSquaredDifferenceOpOnRealTensors : public ::mlir::RewritePattern {
  LowerSquaredDifferenceOpOnRealTensors(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SquaredDifference", {"tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SquaredDifferenceOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SquaredDifference' failed to satisfy constraint: 'tensor of signless integer or floating-point values'";
      });
    }
    lhs = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.SquaredDifference' failed to satisfy constraint: 'tensor of signless integer or floating-point values'";
      });
    }
    rhs = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*lhs.begin());
      ::mlir::Value tblgen_value_1 = (*rhs.begin());
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_0.getODSResults(0).begin()));
      tblgen_SquareOp_1 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SquareOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:146
*/
struct LowerSquaredDifferenceOpOneComplexTensors : public ::mlir::RewritePattern {
  LowerSquaredDifferenceOpOneComplexTensors(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.SquaredDifference", {"tf.Conj", "tf.Mul", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SquaredDifferenceOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.SquaredDifference' failed to satisfy constraint: 'tensor of complex-type values'";
      });
    }
    lhs = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.SquaredDifference' failed to satisfy constraint: 'tensor of complex-type values'";
      });
    }
    rhs = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SubOp diff;
    {
      ::mlir::Value tblgen_value_0 = (*lhs.begin());
      ::mlir::Value tblgen_value_1 = (*rhs.begin());
      diff = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::ConjOp tblgen_ConjOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*diff.getODSResults(0).begin()));
      tblgen_ConjOp_0 = rewriter.create<::mlir::TF::ConjOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*diff.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ConjOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:345
*/
struct LowerTanhGradOp : public ::mlir::RewritePattern {
  LowerTanhGradOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.TanhGrad", {"tf.Const", "tf.Mul", "tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range dy(op0->getOperands());
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::TanhGradOp>(op0); (void)castedOp0;
    y = castedOp0.getODSOperands(0);
    dy = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*y.begin())),1)
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*y.begin()));
      tblgen_SquareOp_1 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp tblgen_SubOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_ConstOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SquareOp_1.getODSResults(0).begin());
      tblgen_SubOp_2 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*dy.begin()));
      tblgen_values.push_back((*tblgen_SubOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_3 = rewriter.create<::mlir::TF::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:401
*/
struct LowerXdivyOp : public ::mlir::RewritePattern {
  LowerXdivyOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Xdivy", {"tf.Const", "tf.Div", "tf.Equal", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XdivyOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);
    y = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*y.begin());
      tblgen_DivOp_1 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_EqualOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_DivOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_2 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:405
*/
struct LowerXlog1pyOp : public ::mlir::RewritePattern {
  LowerXlog1pyOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Xlog1py", {"tf.Const", "tf.Equal", "tf.Log1p", "tf.Mul", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::Xlog1pyOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);
    y = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::Log1pOp tblgen_Log1pOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*y.begin()));
      tblgen_Log1pOp_1 = rewriter.create<::mlir::TF::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_Log1pOp_1.getODSResults(0).begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_EqualOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_3 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:409
*/
struct LowerXlogyOp : public ::mlir::RewritePattern {
  LowerXlogyOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Xlogy", {"tf.Const", "tf.Equal", "tf.Log", "tf.Mul", "tf.SelectV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XlogyOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);
    y = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*x.begin())),0)
      );
    }
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_EqualOp_0 = rewriter.create<::mlir::TF::EqualOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1,
        rewriter.getBoolAttr(true)
      );
    }
    ::mlir::TF::LogOp tblgen_LogOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*y.begin()));
      tblgen_LogOp_1 = rewriter.create<::mlir::TF::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*x.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_LogOp_1.getODSResults(0).begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op tblgen_SelectV2Op_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_EqualOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*zero.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectV2Op_3 = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectV2Op_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/lower_tf.td:373
*/
struct LowerZerosLikeOp : public ::mlir::RewritePattern {
  LowerZerosLikeOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ZerosLike", {"tf.BroadcastTo", "tf.Const"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::TF::ZerosLikeOp src_op;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ZerosLikeOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::IntegerType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::FloatType>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>()))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.ZerosLike' failed to satisfy constraint: 'tensor of integer or floating-point or complex-type values'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*input.begin())),0)
      );
    }
    ::mlir::TF::BroadcastToOp tblgen_BroadcastToOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back(rewriter.create<TF::ShapeOp>((*src_op.getODSResults(0).begin()).getLoc(), (*input.begin()), rewriter.getBoolAttr(false)));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BroadcastToOp_1 = rewriter.create<::mlir::TF::BroadcastToOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BroadcastToOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<LowerBiasAddGradOp>(patterns.getContext());
  patterns.add<LowerDivNoNanOp>(patterns.getContext());
  patterns.add<LowerEmptyOp>(patterns.getContext());
  patterns.add<LowerFakeQuantWithMinMaxArgs>(patterns.getContext());
  patterns.add<LowerFillOp>(patterns.getContext());
  patterns.add<LowerIsFiniteOp>(patterns.getContext());
  patterns.add<LowerIsInfOp>(patterns.getContext());
  patterns.add<LowerIsNanOp>(patterns.getContext());
  patterns.add<LowerL2LossOp>(patterns.getContext());
  patterns.add<LowerMulNoNanOp>(patterns.getContext());
  patterns.add<LowerOnesLikeOp>(patterns.getContext());
  patterns.add<LowerPadOp>(patterns.getContext());
  patterns.add<LowerReciprocal>(patterns.getContext());
  patterns.add<LowerRintOp>(patterns.getContext());
  patterns.add<LowerRoundOpOnFloatTensor>(patterns.getContext());
  patterns.add<LowerRoundOpOnIntTensor>(patterns.getContext());
  patterns.add<LowerRsqrtGradOp>(patterns.getContext());
  patterns.add<LowerScatterNdOp>(patterns.getContext());
  patterns.add<LowerSizeOp>(patterns.getContext());
  patterns.add<LowerSoftmaxCrossEntropyWithLogitsOp>(patterns.getContext());
  patterns.add<LowerSparseSoftmaxCrossEntropyWithLogitsOp>(patterns.getContext());
  patterns.add<LowerSqrtGradOp>(patterns.getContext());
  patterns.add<LowerSquareOp>(patterns.getContext());
  patterns.add<LowerSquaredDifferenceOpOnRealTensors>(patterns.getContext());
  patterns.add<LowerSquaredDifferenceOpOneComplexTensors>(patterns.getContext());
  patterns.add<LowerTanhGradOp>(patterns.getContext());
  patterns.add<LowerXdivyOp>(patterns.getContext());
  patterns.add<LowerXlog1pyOp>(patterns.getContext());
  patterns.add<LowerXlogyOp>(patterns.getContext());
  patterns.add<LowerZerosLikeOp>(patterns.getContext());
}
