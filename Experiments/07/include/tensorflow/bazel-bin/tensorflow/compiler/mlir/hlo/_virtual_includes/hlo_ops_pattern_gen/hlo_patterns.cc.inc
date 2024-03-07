/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:24
*/
struct DynamicBroadcastToOwnShape_1 : public ::mlir::RewritePattern {
  DynamicBroadcastToOwnShape_1(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_broadcast_in_dim", {}, 3, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr attr;
    ::mlir::mhlo::DynamicBroadcastInDimOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range x0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[3];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicBroadcastInDimOp>(op0); (void)castedOp0;
    op = castedOp0;
    x0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::shape::ToExtentTensorOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      {
        auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
        auto castedOp2 = ::llvm::dyn_cast_or_null<::mlir::shape::ShapeOfOp>(op2); (void)castedOp2;
        if (!castedOp2) return ::mlir::failure();
        x = castedOp2.getODSOperands(0);
        tblgen_ops[1] = op2;
      }
      tblgen_ops[2] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.dynamic_broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
        });
      }
      attr = tblgen_attr;
    }
    if (!(*x.begin() == *x0.begin())){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "Operands 'x' and 'x0' must be equal";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ x }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:28
*/
struct DynamicBroadcastToOwnShape_2 : public ::mlir::RewritePattern {
  DynamicBroadcastToOwnShape_2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_broadcast_in_dim", {}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr attr;
    ::mlir::mhlo::DynamicBroadcastInDimOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range x0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicBroadcastInDimOp>(op0); (void)castedOp0;
    op = castedOp0;
    x0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::shape::ShapeOfOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      x = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.dynamic_broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
        });
      }
      attr = tblgen_attr;
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
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:31
*/
struct DynamicBroadcastToOwnShape_3 : public ::mlir::RewritePattern {
  DynamicBroadcastToOwnShape_3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_broadcast_in_dim", {"tensor.cast"}, 4, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr attr;
    ::mlir::mhlo::DynamicBroadcastInDimOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range x0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[4];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicBroadcastInDimOp>(op0); (void)castedOp0;
    op = castedOp0;
    x0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::tensor::CastOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      {
        auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
        auto castedOp2 = ::llvm::dyn_cast_or_null<::mlir::shape::ToExtentTensorOp>(op2); (void)castedOp2;
        if (!castedOp2) return ::mlir::failure();
        {
          auto *op3 = (*castedOp2.getODSOperands(0).begin()).getDefiningOp();
          auto castedOp3 = ::llvm::dyn_cast_or_null<::mlir::shape::ShapeOfOp>(op3); (void)castedOp3;
          if (!castedOp3) return ::mlir::failure();
          x = castedOp3.getODSOperands(0);
          tblgen_ops[1] = op3;
        }
        tblgen_ops[2] = op2;
      }
      tblgen_ops[3] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.dynamic_broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
        });
      }
      attr = tblgen_attr;
    }
    if (!(*x.begin() == *x0.begin())){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "Operands 'x' and 'x0' must be equal";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc(), tblgen_ops[3]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::tensor::CastOp tblgen_CastOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CastOp_0 = rewriter.create<::mlir::tensor::CastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CastOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:35
*/
struct DynamicBroadcastToOwnShape_4 : public ::mlir::RewritePattern {
  DynamicBroadcastToOwnShape_4(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.dynamic_broadcast_in_dim", {"tensor.cast"}, 3, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr attr;
    ::mlir::mhlo::DynamicBroadcastInDimOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation::operand_range x0(op0->getOperands());
    ::mlir::Operation *tblgen_ops[3];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicBroadcastInDimOp>(op0); (void)castedOp0;
    op = castedOp0;
    x0 = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::tensor::CastOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      {
        auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
        auto castedOp2 = ::llvm::dyn_cast_or_null<::mlir::shape::ShapeOfOp>(op2); (void)castedOp2;
        if (!castedOp2) return ::mlir::failure();
        x = castedOp2.getODSOperands(0);
        tblgen_ops[1] = op2;
      }
      tblgen_ops[2] = op1;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'mhlo.dynamic_broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
        });
      }
      attr = tblgen_attr;
    }
    if (!(*x.begin() == *x0.begin())){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "Operands 'x' and 'x0' must be equal";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::tensor::CastOp tblgen_CastOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*x.begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CastOp_0 = rewriter.create<::mlir::tensor::CastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CastOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:51
*/
struct IdentityBroadcastInDimReshape : public ::mlir::RewritePattern {
  IdentityBroadcastInDimReshape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.reshape", {}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr dims;
    ::mlir::mhlo::ReshapeOp op;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::ReshapeOp>(op0); (void)castedOp0;
    op = castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::mhlo::BroadcastInDimOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      input = castedOp1.getODSOperands(0);
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_dimensions");(void)tblgen_attr;
        if (!(tblgen_attr)){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "expected op 'mhlo.broadcast_in_dim' to have attribute 'broadcast_dimensions' of type '::mlir::DenseIntElementsAttr'";
          });
        }
        dims = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }
    if (!(((*input.begin()).getType() == (*op.getODSResults(0).begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'input, op' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ input }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:46
*/
struct IdentityBroadcastReshape : public ::mlir::RewritePattern {
  IdentityBroadcastReshape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.reshape", {}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::DenseIntElementsAttr dims;
    ::mlir::mhlo::ReshapeOp op;
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::mhlo::ReshapeOp>(op0); (void)castedOp0;
    op = castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::mhlo::BroadcastOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      input = castedOp1.getODSOperands(0);
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::DenseIntElementsAttr>("broadcast_sizes");(void)tblgen_attr;
        if (!(tblgen_attr)){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "expected op 'mhlo.broadcast' to have attribute 'broadcast_sizes' of type '::mlir::DenseIntElementsAttr'";
          });
        }
        dims = tblgen_attr;
      }
      tblgen_ops[1] = op1;
    }
    if (!(((*input.begin()).getType() == (*op.getODSResults(0).begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'input, op' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ input }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/IR/hlo_patterns.td:41
*/
struct ShapeOfDynamicReshape : public ::mlir::RewritePattern {
  ShapeOfDynamicReshape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("shape.shape_of", {}, 2, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range shape(op0->getOperands());
    ::mlir::shape::ShapeOfOp op;
    ::mlir::Operation::operand_range x(op0->getOperands());
    ::mlir::Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::shape::ShapeOfOp>(op0); (void)castedOp0;
    op = castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = ::llvm::dyn_cast_or_null<::mlir::mhlo::DynamicReshapeOp>(op1); (void)castedOp1;
      if (!castedOp1) return ::mlir::failure();
      x = castedOp1.getODSOperands(0);
      shape = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }
    if (!(((*shape.begin()).getType() == (*op.getODSResults(0).begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'shape, op' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ shape }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<DynamicBroadcastToOwnShape_1>(patterns.getContext());
  patterns.add<DynamicBroadcastToOwnShape_2>(patterns.getContext());
  patterns.add<DynamicBroadcastToOwnShape_3>(patterns.getContext());
  patterns.add<DynamicBroadcastToOwnShape_4>(patterns.getContext());
  patterns.add<IdentityBroadcastInDimReshape>(patterns.getContext());
  patterns.add<IdentityBroadcastReshape>(patterns.getContext());
  patterns.add<ShapeOfDynamicReshape>(patterns.getContext());
}
