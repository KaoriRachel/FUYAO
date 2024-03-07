/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:41
*/
struct AddToAddV2 : public ::mlir::RewritePattern {
  AddToAddV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Add", {"tf.AddV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AddOp>(op0); (void)castedOp0;
    if (!((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && (((((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF64())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isBF16())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint8Type>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint16Type>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint16RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint32Type>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint32RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint8Type>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint8RefType>()))) || ((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint16Type>())) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint16RefType>())))) || ((((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || (((((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.Add' failed to satisfy constraint: 'tensor of number values'";
      });
    }
    arg0 = castedOp0.getODSOperands(0);
    if (!((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && (((((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int8RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int16RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int32RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isSignlessInteger(64))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Int64RefType>())))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(8))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint8RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(16))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint16RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(32))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint32RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isUnsignedInteger(64))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Uint64RefType>()))))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF16())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::HalfRefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF32())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::FloatRefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isF64())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::DoubleRefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isBF16())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Bfloat16RefType>())))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint8Type>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint8RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint16Type>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint16RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint32Type>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Qint32RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint8Type>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint8RefType>()))) || ((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint16Type>())) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Quint16RefType>())))) || ((((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF32()))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex64RefType>()))) || (((((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<::mlir::ComplexType>())) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().cast<::mlir::ComplexType>().getElementType().isF64()))) || (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().getElementType().isa<mlir::TF::Complex128RefType>()))))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.Add' failed to satisfy constraint: 'tensor of number values'";
      });
    }
    arg1 = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::AddV2Op tblgen_AddV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddV2Op_0 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddV2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:48
*/
struct AddV2OfNegLeft : public ::mlir::RewritePattern {
  AddV2OfNegLeft(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AddV2", {"tf.Sub"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AddV2Op>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::NegOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }
    arg1 = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg1.begin()));
      tblgen_values.push_back((*arg0.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:51
*/
struct AddV2OfNegRight : public ::mlir::RewritePattern {
  AddV2OfNegRight(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AddV2", {"tf.Sub"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AddV2Op>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::NegOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:68
*/
struct BatchMatMulToMatMul : public ::mlir::RewritePattern {
  BatchMatMulToMatMul(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BatchMatMul", {"tf.MatMul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr adj_y;
    ::mlir::BoolAttr adj_x;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BatchMatMulOp>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);
    y = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_x");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_x = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_y");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_y = tblgen_attr;
    }
    if (!(((((*x.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*x.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 2)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'x' failed to satisfy constraint: Rank 2 tensor";
      });
    }
    if (!(((((*y.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*y.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 2)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'y' failed to satisfy constraint: Rank 2 tensor";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MatMulOp tblgen_MatMulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_values.push_back((*y.begin()));
      if (auto tmpAttr = adj_x) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("transpose_a"), tmpAttr);
      }
      if (auto tmpAttr = adj_y) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("transpose_b"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MatMulOp_0 = rewriter.create<::mlir::TF::MatMulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MatMulOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:63
*/
struct BatchMatMulToV2 : public ::mlir::RewritePattern {
  BatchMatMulToV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BatchMatMul", {"tf.BatchMatMulV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr adj_y;
    ::mlir::BoolAttr adj_x;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BatchMatMulOp>(op0); (void)castedOp0;
    if (!(((((*castedOp0.getODSOperands(0).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(0).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'tf.BatchMatMul' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    x = castedOp0.getODSOperands(0);
    if (!(((((*castedOp0.getODSOperands(1).begin()).getType().isa<::mlir::TensorType>())) && ((true))) && (((*castedOp0.getODSOperands(1).begin()).getType().cast<::mlir::ShapedType>().hasStaticShape())))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 1 of op 'tf.BatchMatMul' failed to satisfy constraint: 'statically shaped tensor of any type values'";
      });
    }
    y = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_x");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_x = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_y");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_y = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::BatchMatMulV2Op tblgen_BatchMatMulV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_values.push_back((*y.begin()));
      if (auto tmpAttr = adj_x) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("adj_x"), tmpAttr);
      }
      if (auto tmpAttr = adj_y) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("adj_y"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BatchMatMulV2Op_0 = rewriter.create<::mlir::TF::BatchMatMulV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BatchMatMulV2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:76
*/
struct BatchMatMulV2ToMatMul : public ::mlir::RewritePattern {
  BatchMatMulV2ToMatMul(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BatchMatMulV2", {"tf.MatMul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr adj_y;
    ::mlir::BoolAttr adj_x;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range y(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BatchMatMulV2Op>(op0); (void)castedOp0;
    x = castedOp0.getODSOperands(0);
    y = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_x");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_x = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("adj_y");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      adj_y = tblgen_attr;
    }
    if (!(((((*x.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*x.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 2)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'x' failed to satisfy constraint: Rank 2 tensor";
      });
    }
    if (!(((((*y.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*y.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 2)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'y' failed to satisfy constraint: Rank 2 tensor";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MatMulOp tblgen_MatMulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      tblgen_values.push_back((*y.begin()));
      if (auto tmpAttr = adj_x) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("transpose_a"), tmpAttr);
      }
      if (auto tmpAttr = adj_y) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("transpose_b"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MatMulOp_0 = rewriter.create<::mlir::TF::MatMulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MatMulOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:88
*/
struct BatchToSpaceToBatchToSpaceND : public ::mlir::RewritePattern {
  BatchToSpaceToBatchToSpaceND(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BatchToSpace", {"tf.BatchToSpaceND", "tf.Const"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr block_size;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation::operand_range crops(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BatchToSpaceOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    crops = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("block_size");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.BatchToSpace' to have attribute 'block_size' of type '::mlir::IntegerAttr'";
        });
      }
      block_size = tblgen_attr;
    }
    if (!(((((*input.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*input.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 4)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'input' failed to satisfy constraint: Rank 4 tensor";
      });
    }
    if (!(((((*crops.begin()).getType()).cast<::mlir::ShapedType>().hasRank())) && ((((*crops.begin()).getType()).cast<::mlir::ShapedType>().getRank()
                             == 2)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'crops' failed to satisfy constraint: Rank 2 tensor";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/DenseElementsAttr::get(RankedTensorType::get({2}, rewriter.getI64Type()), ArrayRef<APInt>{block_size.getValue(), block_size.getValue()})
      );
    }
    ::mlir::TF::BatchToSpaceNDOp tblgen_BatchToSpaceNDOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*crops.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BatchToSpaceNDOp_1 = rewriter.create<::mlir::TF::BatchToSpaceNDOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BatchToSpaceNDOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:99
*/
struct BiasAddV1ToBiasAdd : public ::mlir::RewritePattern {
  BiasAddV1ToBiasAdd(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.BiasAddV1", {"tf.BiasAdd"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BiasAddV1Op>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    arg1 = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::BiasAddOp tblgen_BiasAddOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      if (auto tmpAttr = rewriter.getStringAttr("NHWC")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("data_format"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BiasAddOp_0 = rewriter.create<::mlir::TF::BiasAddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BiasAddOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:110
*/
struct BitcastNested : public ::mlir::RewritePattern {
  BitcastNested(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Bitcast", {"tf.Bitcast"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::BitcastOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::BitcastOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::BitcastOp tblgen_BitcastOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_BitcastOp_0 = rewriter.create<::mlir::TF::BitcastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_BitcastOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:106
*/
struct BitcastSameType : public ::mlir::RewritePattern {
  BitcastSameType(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Bitcast", {}, 1, context) {}
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
    arg = castedOp0.getODSOperands(0);
    if (!((getElementTypeOrSelf((*res.getODSResults(0).begin())) == getElementTypeOrSelf((*arg.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ arg }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:117
*/
struct ConvertToConcatV2 : public ::mlir::RewritePattern {
  ConvertToConcatV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Concat", {"tf.ConcatV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range inputs(op0->getOperands());
    ::mlir::Operation::operand_range axis(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ConcatOp>(op0); (void)castedOp0;
    axis = castedOp0.getODSOperands(0);
    inputs = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConcatV2Op tblgen_ConcatV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      for (auto v: inputs) {
        tblgen_values.push_back(v);
      }
      tblgen_values.push_back((*axis.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConcatV2Op_0 = rewriter.create<::mlir::TF::ConcatV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConcatV2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:125
*/
struct DivWithSqrtDivisor : public ::mlir::RewritePattern {
  DivWithSqrtDivisor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Div", {"tf.Mul", "tf.Rsqrt"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::DivOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::RsqrtOp tblgen_RsqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg1.begin()));
      tblgen_RsqrtOp_0 = rewriter.create<::mlir::TF::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*tblgen_RsqrtOp_0.getODSResults(0).begin()));
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
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:132
*/
struct LogOfSoftmax : public ::mlir::RewritePattern {
  LogOfSoftmax(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Log", {"tf.LogSoftmax"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SoftmaxOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::LogSoftmaxOp tblgen_LogSoftmaxOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      tblgen_LogSoftmaxOp_0 = rewriter.create<::mlir::TF::LogSoftmaxOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LogSoftmaxOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:140
*/
struct LogToLog1p : public ::mlir::RewritePattern {
  LogToLog1p(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Log", {"tf.Log1p"}, 3, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation *tblgen_ops[3];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::AddV2Op>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg = castedOp1.getODSOperands(0);
      {
        auto *op2 = (*castedOp1.getODSOperands(1).begin()).getDefiningOp();
        auto castedOp2 = ::llvm::dyn_cast_or_null<::mlir::TF::ConstOp>(op2); (void)castedOp2;
        if (!castedOp2) return ::mlir::failure();
        {
          auto tblgen_attr = op2->getAttrOfType<::mlir::ElementsAttr>("value");(void)tblgen_attr;
          if (!(tblgen_attr)){
            return rewriter.notifyMatchFailure(op2, [&](::mlir::Diagnostic &diag) {
              diag << "expected op 'tf.Const' to have attribute 'value' of type '::mlir::ElementsAttr'";
            });
          }
          if (!((tblgen_attr == ::mlir::DenseElementsAttr::get(::mlir::RankedTensorType::get({}, rewriter.getF32Type()), ::llvm::makeArrayRef(1.0f)).cast<::mlir::DenseFPElementsAttr>()))){
            return rewriter.notifyMatchFailure(op2, [&](::mlir::Diagnostic &diag) {
              diag << "op 'tf.Const' attribute 'value' failed to satisfy constraint: constant attribute 1.0f";
            });
          }
        }
        tblgen_ops[1] = op2;
      }
      tblgen_ops[2] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::Log1pOp tblgen_Log1pOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      tblgen_Log1pOp_0 = rewriter.create<::mlir::TF::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Log1pOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:150
*/
struct LogicalNotOfEqual : public ::mlir::RewritePattern {
  LogicalNotOfEqual(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.NotEqual"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr shape_error;
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::EqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::BoolAttr>("incompatible_shape_error");(void)tblgen_attr;
        if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
        shape_error = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::NotEqualOp tblgen_NotEqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      if (auto tmpAttr = shape_error) {
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
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:158
*/
struct LogicalNotOfGreater : public ::mlir::RewritePattern {
  LogicalNotOfGreater(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.LessEqual"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::GreaterOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::LessEqualOp tblgen_LessEqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_LessEqualOp_0 = rewriter.create<::mlir::TF::LessEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LessEqualOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:161
*/
struct LogicalNotOfGreaterEqual : public ::mlir::RewritePattern {
  LogicalNotOfGreaterEqual(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.Less"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::GreaterEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::LessOp tblgen_LessOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_LessOp_0 = rewriter.create<::mlir::TF::LessOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LessOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:165
*/
struct LogicalNotOfLess : public ::mlir::RewritePattern {
  LogicalNotOfLess(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.GreaterEqual"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::LessOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::GreaterEqualOp tblgen_GreaterEqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_GreaterEqualOp_0 = rewriter.create<::mlir::TF::GreaterEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_GreaterEqualOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:168
*/
struct LogicalNotOfLessEqual : public ::mlir::RewritePattern {
  LogicalNotOfLessEqual(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.Greater"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::LessEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::GreaterOp tblgen_GreaterOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_GreaterOp_0 = rewriter.create<::mlir::TF::GreaterOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_GreaterOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:154
*/
struct LogicalNotOfNotEqual : public ::mlir::RewritePattern {
  LogicalNotOfNotEqual(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.LogicalNot", {"tf.Equal"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr shape_error;
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::NotEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::BoolAttr>("incompatible_shape_error");(void)tblgen_attr;
        if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
        shape_error = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::EqualOp tblgen_EqualOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      if (auto tmpAttr = shape_error) {
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
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:181
*/
struct MatrixSetDiagToV3 : public ::mlir::RewritePattern {
  MatrixSetDiagToV3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.MatrixSetDiag", {"tf.Const", "tf.MatrixSetDiagV3"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range diag(op0->getOperands());
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MatrixSetDiagOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    diag = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/rewriter.getI32IntegerAttr(0)
      );
    }
    ::mlir::TF::MatrixSetDiagV3Op tblgen_MatrixSetDiagV3Op_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*diag.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      if (auto tmpAttr = rewriter.getStringAttr("RIGHT_LEFT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("align"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MatrixSetDiagV3Op_1 = rewriter.create<::mlir::TF::MatrixSetDiagV3Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MatrixSetDiagV3Op_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:187
*/
struct MatrixSetDiagV2ToV3 : public ::mlir::RewritePattern {
  MatrixSetDiagV2ToV3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.MatrixSetDiagV2", {"tf.MatrixSetDiagV3"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range k(op0->getOperands());
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation::operand_range diag(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::MatrixSetDiagV2Op>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);
    diag = castedOp0.getODSOperands(1);
    k = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::MatrixSetDiagV3Op tblgen_MatrixSetDiagV3Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*diag.begin()));
      tblgen_values.push_back((*k.begin()));
      if (auto tmpAttr = rewriter.getStringAttr("LEFT_LEFT")) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("align"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MatrixSetDiagV3Op_0 = rewriter.create<::mlir::TF::MatrixSetDiagV3Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MatrixSetDiagV3Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:250
*/
struct ReadVariableOfCast : public ::mlir::RewritePattern {
  ReadVariableOfCast(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ReadVariableOp", {"tf.ReadVariableOp"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::TF::CastOp output;
    ::mlir::BoolAttr Truncate;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReadVariableOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::CastOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      output = castedOp1;
      x = castedOp1.getODSOperands(0);
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::BoolAttr>("Truncate");(void)tblgen_attr;
        if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
        if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "op 'tf.Cast' attribute 'Truncate' failed to satisfy constraint: bool attribute";
          });
        }
        Truncate = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }
    if (!((llvm::all_of((*output.getODSResults(0).begin()).getUsers(), [](mlir::OpOperand op) { return llvm::isa<mlir::TF::ReadVariableOp>(op.getOwner()); })))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'output' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ReadVariableOp tblgen_ReadVariableOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ReadVariableOp_0 = rewriter.create<::mlir::TF::ReadVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReadVariableOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:201
*/
struct RealDivWithConstDivisor : public ::mlir::RewritePattern {
  RealDivWithConstDivisor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RealDiv", {"tf.Const", "tf.Mul", "tf.Reciprocal"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::ElementsAttr value;
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RealDivOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::ConstOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::ElementsAttr>("value");(void)tblgen_attr;
        if (!(tblgen_attr)){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "expected op 'tf.Const' to have attribute 'value' of type '::mlir::ElementsAttr'";
          });
        }
        if (!((tblgen_attr.isa<::mlir::DenseFPElementsAttr>() &&tblgen_attr.cast<::mlir::DenseElementsAttr>().getType().getElementType().isF32()))){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "op 'tf.Const' attribute 'value' failed to satisfy constraint: 32-bit float elements attribute";
          });
        }
        value = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/value
      );
    }
    ::mlir::TF::ReciprocalOp tblgen_ReciprocalOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_ReciprocalOp_1 = rewriter.create<::mlir::TF::ReciprocalOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*tblgen_ReciprocalOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:195
*/
struct RealDivWithSqrtDivisor : public ::mlir::RewritePattern {
  RealDivWithSqrtDivisor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.RealDiv", {"tf.Mul", "tf.Rsqrt"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::RealDivOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::RsqrtOp tblgen_RsqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg1.begin()));
      tblgen_RsqrtOp_0 = rewriter.create<::mlir::TF::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*tblgen_RsqrtOp_0.getODSResults(0).begin()));
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
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:209
*/
struct RedundantReshape : public ::mlir::RewritePattern {
  RedundantReshape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Reshape", {"tf.Reshape"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::Operation::operand_range unused(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReshapeOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::ReshapeOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg = castedOp1.getODSOperands(0);
      unused = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }
    shape = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ReshapeOp tblgen_ReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      tblgen_values.push_back((*shape.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ReshapeOp_0 = rewriter.create<::mlir::TF::ReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:212
*/
struct ReshapeToSelfShape : public ::mlir::RewritePattern {
  ReshapeToSelfShape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Reshape", {}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::TF::ReshapeOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range x0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ReshapeOp>(op0); (void)castedOp0;
    op = castedOp0;
    x0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::ShapeOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      x = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }
    if (!(((*x.begin()).getType() == (*op.getODSResults(0).begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'x, op' failed to satisfy constraint: ";
      });
    }
    if (!(*x.begin() == *x0.begin())){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "Operands 'x' and 'x0' must be equal";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:220
*/
struct SquareOfSub : public ::mlir::RewritePattern {
  SquareOfSub(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Square", {"tf.SquaredDifference"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SquareOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SubOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg0 = castedOp1.getODSOperands(0);
      arg1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::SquaredDifferenceOp tblgen_SquaredDifferenceOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SquaredDifferenceOp_0 = rewriter.create<::mlir::TF::SquaredDifferenceOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SquaredDifferenceOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:227
*/
struct SubOfNeg : public ::mlir::RewritePattern {
  SubOfNeg(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Sub", {"tf.AddV2"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::SubOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::NegOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::AddV2Op tblgen_AddV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*arg1.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddV2Op_0 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddV2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:234
*/
struct TruncateDivWithSqrtDivisor : public ::mlir::RewritePattern {
  TruncateDivWithSqrtDivisor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.TruncateDiv", {"tf.Mul", "tf.Rsqrt"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::TruncateDivOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::RsqrtOp tblgen_RsqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg1.begin()));
      tblgen_RsqrtOp_0 = rewriter.create<::mlir::TF::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg0.begin()));
      tblgen_values.push_back((*tblgen_RsqrtOp_0.getODSResults(0).begin()));
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
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:256
*/
struct VariableToVariableV2 : public ::mlir::RewritePattern {
  VariableToVariableV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Variable", {"tf.VariableV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr shard_name;
    Attribute shape;
    ::mlir::StringAttr container;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::VariableOp>(op0); (void)castedOp0;
    {
      auto tblgen_attr = op0->getAttrOfType<Attribute>("shape");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.Variable' to have attribute 'shape' of type 'Attribute'";
        });
      }
      shape = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("container");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.Variable' to have attribute 'container' of type '::mlir::StringAttr'";
        });
      }
      container = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("shared_name");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'tf.Variable' to have attribute 'shared_name' of type '::mlir::StringAttr'";
        });
      }
      shard_name = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::VariableV2Op tblgen_VariableV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = shape) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("shape"), tmpAttr);
      }
      if (auto tmpAttr = container) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("container"), tmpAttr);
      }
      if (auto tmpAttr = shard_name) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("shared_name"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_VariableV2Op_0 = rewriter.create<::mlir::TF::VariableV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_VariableV2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/canonicalize.td:242
*/
struct XdivyWithSqrtDivisor : public ::mlir::RewritePattern {
  XdivyWithSqrtDivisor(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.Xdivy", {"tf.MulNoNan", "tf.Rsqrt"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg1(op0->getOperands());
    ::mlir::Operation::operand_range arg0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::XdivyOp>(op0); (void)castedOp0;
    arg0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::TF::SqrtOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      arg1 = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::RsqrtOp tblgen_RsqrtOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg1.begin()));
      tblgen_RsqrtOp_0 = rewriter.create<::mlir::TF::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulNoNanOp tblgen_MulNoNanOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_RsqrtOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*arg0.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulNoNanOp_1 = rewriter.create<::mlir::TF::MulNoNanOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulNoNanOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<AddToAddV2>(patterns.getContext());
  patterns.add<AddV2OfNegLeft>(patterns.getContext());
  patterns.add<AddV2OfNegRight>(patterns.getContext());
  patterns.add<BatchMatMulToMatMul>(patterns.getContext());
  patterns.add<BatchMatMulToV2>(patterns.getContext());
  patterns.add<BatchMatMulV2ToMatMul>(patterns.getContext());
  patterns.add<BatchToSpaceToBatchToSpaceND>(patterns.getContext());
  patterns.add<BiasAddV1ToBiasAdd>(patterns.getContext());
  patterns.add<BitcastNested>(patterns.getContext());
  patterns.add<BitcastSameType>(patterns.getContext());
  patterns.add<ConvertToConcatV2>(patterns.getContext());
  patterns.add<DivWithSqrtDivisor>(patterns.getContext());
  patterns.add<LogOfSoftmax>(patterns.getContext());
  patterns.add<LogToLog1p>(patterns.getContext());
  patterns.add<LogicalNotOfEqual>(patterns.getContext());
  patterns.add<LogicalNotOfGreater>(patterns.getContext());
  patterns.add<LogicalNotOfGreaterEqual>(patterns.getContext());
  patterns.add<LogicalNotOfLess>(patterns.getContext());
  patterns.add<LogicalNotOfLessEqual>(patterns.getContext());
  patterns.add<LogicalNotOfNotEqual>(patterns.getContext());
  patterns.add<MatrixSetDiagToV3>(patterns.getContext());
  patterns.add<MatrixSetDiagV2ToV3>(patterns.getContext());
  patterns.add<ReadVariableOfCast>(patterns.getContext());
  patterns.add<RealDivWithConstDivisor>(patterns.getContext());
  patterns.add<RealDivWithSqrtDivisor>(patterns.getContext());
  patterns.add<RedundantReshape>(patterns.getContext());
  patterns.add<ReshapeToSelfShape>(patterns.getContext());
  patterns.add<SquareOfSub>(patterns.getContext());
  patterns.add<SubOfNeg>(patterns.getContext());
  patterns.add<TruncateDivWithSqrtDivisor>(patterns.getContext());
  patterns.add<VariableToVariableV2>(patterns.getContext());
  patterns.add<XdivyWithSqrtDivisor>(patterns.getContext());
}
