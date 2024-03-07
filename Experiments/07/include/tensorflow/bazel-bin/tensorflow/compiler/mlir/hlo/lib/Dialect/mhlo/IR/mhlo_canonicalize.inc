/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/mhlo_canonicalize.td:39
*/
struct RemoveRedundantDynamicBroadcast : public ::mlir::RewritePattern {
  RemoveRedundantDynamicBroadcast(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_broadcast_in_dim", {"mhlo.dynamic_reshape"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range operand(op0->getOperands());
    ::mlir::DenseIntElementsAttr dims;
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::Operation::operand_range shape0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicBroadcastInDimOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicReshapeOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      operand = castedOp1.getODSOperands(0);
      shape0 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }
    shape = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.dynamic_broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
        });
      }
      if (!((hlo::IsSequenceStartingWith0(tblgen_attr)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'mhlo.dynamic_broadcast_in_dim' attribute 'broadcast_dimensions' failed to satisfy constraint: ";
        });
      }
      dims = tblgen_attr;
    }
    if (!(*shape.begin() == *shape0.begin())){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "Operands 'shape' and 'shape0' must be equal";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DynamicReshapeOp tblgen_DynamicReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*operand.begin()));
      tblgen_values.push_back((*shape.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DynamicReshapeOp_0 = rewriter.create<::mlir::mhlo::DynamicReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DynamicReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/mhlo_canonicalize.td:33
*/
struct RemoveRedundantDynamicReshape : public ::mlir::RewritePattern {
  RemoveRedundantDynamicReshape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_reshape", {"mhlo.dynamic_reshape"}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range shape2(op0->getOperands());
    ::mlir::Operation::operand_range operand(op0->getOperands());
    ::mlir::Operation::operand_range shape1(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicReshapeOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicReshapeOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      operand = castedOp1.getODSOperands(0);
      shape1 = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }
    shape2 = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DynamicReshapeOp tblgen_DynamicReshapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*operand.begin()));
      tblgen_values.push_back((*shape2.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DynamicReshapeOp_0 = rewriter.create<::mlir::mhlo::DynamicReshapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DynamicReshapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/mhlo_canonicalize.td:27
*/
struct UnaryEinsumToEinsum : public ::mlir::RewritePattern {
  UnaryEinsumToEinsum(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.unary_einsum", {"mhlo.constant", "mhlo.einsum"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::StringAttr equation;
    ::mlir::Operation::operand_range operand(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::UnaryEinsumOp>(op0); (void)castedOp0;
    operand = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::StringAttr>("einsum_config");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.unary_einsum' to have attribute 'einsum_config' of type '::mlir::StringAttr'";
        });
      }
      equation = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::mhlo::ConstOp>(odsLoc,
        /*value=*/hlo::GetScalarOfType(getElementTypeOrSelf((*operand.begin())),1)
      );
    }
    ::mlir::mhlo::EinsumOp tblgen_EinsumOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*operand.begin()));
      if (auto tmpAttr = rewriter.getStringAttr("," + equation.getValue().str())) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("einsum_config"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_EinsumOp_1 = rewriter.create<::mlir::mhlo::EinsumOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_EinsumOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<RemoveRedundantDynamicBroadcast>(patterns.getContext());
  patterns.add<RemoveRedundantDynamicReshape>(patterns.getContext());
  patterns.add<UnaryEinsumToEinsum>(patterns.getContext());
}
