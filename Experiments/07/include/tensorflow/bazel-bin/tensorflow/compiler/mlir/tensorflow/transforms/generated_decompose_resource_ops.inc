/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:42
*/
struct DecomposeAssignAddVariableOp : public ::mlir::RewritePattern {
  DecomposeAssignAddVariableOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AssignAddVariableOp", {"tf.AddV2", "tf.AssignVariableOp"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range value(op0->getOperands());
    ::mlir::TF::AssignAddVariableOp src_op;
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AssignAddVariableOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    resource = castedOp0.getODSOperands(0);
    value = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::AddV2Op tblgen_AddV2Op_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*resource.begin()), (*value.begin()).getType().cast<TensorType>().getElementType()),  (*resource.begin()));
      ::mlir::Value tblgen_value_1 = (*value.begin());
      tblgen_AddV2Op_0 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*resource.begin()));
      tblgen_values.push_back((*tblgen_AddV2Op_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:54
*/
struct DecomposeAssignSubVariableOp : public ::mlir::RewritePattern {
  DecomposeAssignSubVariableOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.AssignSubVariableOp", {"tf.AssignVariableOp", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range value(op0->getOperands());
    ::mlir::TF::AssignSubVariableOp src_op;
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::AssignSubVariableOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    resource = castedOp0.getODSOperands(0);
    value = castedOp0.getODSOperands(1);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*resource.begin()), (*value.begin()).getType().cast<TensorType>().getElementType()),  (*resource.begin()));
      ::mlir::Value tblgen_value_1 = (*value.begin());
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*resource.begin()));
      tblgen_values.push_back((*tblgen_SubOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:209
*/
struct DecomposeResourceApplyAdagrad : public ::mlir::RewritePattern {
  DecomposeResourceApplyAdagrad(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyAdagrad", {"tf.Const", "tf.ResourceApplyAdagradV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::BoolAttr use_locking;
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::BoolAttr update_slots;
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyAdagradOp>(op0); (void)castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    grad = castedOp0.getODSOperands(3);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      use_locking = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("update_slots");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      update_slots = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp zero_epsilon;
    {
      zero_epsilon = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),0)
      );
    }
    ::mlir::TF::ResourceApplyAdagradV2Op tblgen_ResourceApplyAdagradV2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*lr.begin()));
      tblgen_values.push_back((*zero_epsilon.getODSResults(0).begin()));
      tblgen_values.push_back((*grad.begin()));
      if (auto tmpAttr = use_locking) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("use_locking"), tmpAttr);
      }
      if (auto tmpAttr = update_slots) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("update_slots"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_ResourceApplyAdagradV2Op_0 = rewriter.create<::mlir::TF::ResourceApplyAdagradV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:185
*/
struct DecomposeResourceApplyAdagradV2 : public ::mlir::RewritePattern {
  DecomposeResourceApplyAdagradV2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyAdagradV2", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Div", "tf.Mul", "tf.Sqrt"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr update_slots;
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyAdagradV2Op src_op;
    ::mlir::Operation::operand_range epsilon(op0->getOperands());
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyAdagradV2Op>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    epsilon = castedOp0.getODSOperands(3);
    grad = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdagradV2' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("update_slots");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      if (!((tblgen_attr == rewriter.getBoolAttr(true)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdagradV2' attribute 'update_slots' failed to satisfy constraint: constant attribute true";
        });
      }
      update_slots = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op new_accum;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_0.getODSResults(0).begin());
      new_accum = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*new_accum.getODSResults(0).begin()));
      tblgen_SqrtOp_2 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*epsilon.begin());
      tblgen_AddV2Op_3 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddV2Op_3.getODSResults(0).begin());
      tblgen_DivOp_4 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_DivOp_4.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_5 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*new_accum.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_6 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:274
*/
struct DecomposeResourceApplyAdamNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyAdamNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyAdam", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Const", "tf.Div", "tf.Mul", "tf.Sqrt", "tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range epsilon(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range beta2(op0->getOperands());
    ::mlir::Operation::operand_range beta1(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyAdamOp src_op;
    ::mlir::Operation::operand_range m_resource(op0->getOperands());
    ::mlir::Operation::operand_range v_resource(op0->getOperands());
    ::mlir::Operation::operand_range beta1_power(op0->getOperands());
    ::mlir::Operation::operand_range beta2_power(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyAdamOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    m_resource = castedOp0.getODSOperands(1);
    v_resource = castedOp0.getODSOperands(2);
    beta1_power = castedOp0.getODSOperands(3);
    beta2_power = castedOp0.getODSOperands(4);
    lr = castedOp0.getODSOperands(5);
    beta1 = castedOp0.getODSOperands(6);
    beta2 = castedOp0.getODSOperands(7);
    epsilon = castedOp0.getODSOperands(8);
    grad = castedOp0.getODSOperands(9);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdam' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(true)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdam' attribute 'use_nesterov' failed to satisfy constraint: constant attribute true";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),1)
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta2_power.begin());
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_0.getODSResults(0).begin()));
      tblgen_SqrtOp_1 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp tblgen_SubOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1_power.begin());
      tblgen_SubOp_2 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubOp_2.getODSResults(0).begin());
      tblgen_DivOp_3 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp alpha;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_DivOp_3.getODSResults(0).begin());
      alpha = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*beta1.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*m_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*m_resource.begin()));
      tblgen_MulOp_4 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1.begin());
      tblgen_SubOp_5 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_6 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op new_m;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_4.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_6.getODSResults(0).begin());
      new_m = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*beta2.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*v_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*v_resource.begin()));
      tblgen_MulOp_7 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta2.begin());
      tblgen_SubOp_8 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_9;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*grad.begin()));
      tblgen_SquareOp_9 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SquareOp_9.getODSResults(0).begin());
      tblgen_MulOp_10 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op new_v;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_10.getODSResults(0).begin());
      new_v = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*new_m.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1.begin());
      tblgen_MulOp_11 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_12;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1.begin());
      tblgen_SubOp_12 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_13;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_12.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_13 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_14;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_11.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_13.getODSResults(0).begin());
      tblgen_AddV2Op_14 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_15;
    {
      ::mlir::Value tblgen_value_0 = (*alpha.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddV2Op_14.getODSResults(0).begin());
      tblgen_MulOp_15 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_16;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*new_v.getODSResults(0).begin()));
      tblgen_SqrtOp_16 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_17;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_16.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*epsilon.begin());
      tblgen_AddV2Op_17 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_18;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_15.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddV2Op_17.getODSResults(0).begin());
      tblgen_DivOp_18 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_19;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_DivOp_18.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_19 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_20;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*m_resource.begin()));
      tblgen_values.push_back((*new_m.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_20 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_21;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*v_resource.begin()));
      tblgen_values.push_back((*new_v.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_21 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:228
*/
struct DecomposeResourceApplyAdamNonNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyAdamNonNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyAdam", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Const", "tf.Div", "tf.Mul", "tf.Sqrt", "tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range epsilon(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range beta2(op0->getOperands());
    ::mlir::Operation::operand_range beta1(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyAdamOp src_op;
    ::mlir::Operation::operand_range m_resource(op0->getOperands());
    ::mlir::Operation::operand_range v_resource(op0->getOperands());
    ::mlir::Operation::operand_range beta1_power(op0->getOperands());
    ::mlir::Operation::operand_range beta2_power(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyAdamOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    m_resource = castedOp0.getODSOperands(1);
    v_resource = castedOp0.getODSOperands(2);
    beta1_power = castedOp0.getODSOperands(3);
    beta2_power = castedOp0.getODSOperands(4);
    lr = castedOp0.getODSOperands(5);
    beta1 = castedOp0.getODSOperands(6);
    beta2 = castedOp0.getODSOperands(7);
    epsilon = castedOp0.getODSOperands(8);
    grad = castedOp0.getODSOperands(9);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdam' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(false)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyAdam' attribute 'use_nesterov' failed to satisfy constraint: constant attribute false";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),1)
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta2_power.begin());
      tblgen_SubOp_0 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_0.getODSResults(0).begin()));
      tblgen_SqrtOp_1 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp tblgen_SubOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1_power.begin());
      tblgen_SubOp_2 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubOp_2.getODSResults(0).begin());
      tblgen_DivOp_3 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp alpha;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_DivOp_3.getODSResults(0).begin());
      alpha = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*beta1.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*m_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*m_resource.begin()));
      tblgen_MulOp_4 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta1.begin());
      tblgen_SubOp_5 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_6 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op new_m;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_4.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_6.getODSResults(0).begin());
      new_m = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*beta2.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*v_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*v_resource.begin()));
      tblgen_MulOp_7 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*beta2.begin());
      tblgen_SubOp_8 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_9;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*grad.begin()));
      tblgen_SquareOp_9 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SquareOp_9.getODSResults(0).begin());
      tblgen_MulOp_10 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op new_v;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_10.getODSResults(0).begin());
      new_v = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*alpha.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*new_m.getODSResults(0).begin());
      tblgen_MulOp_11 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_12;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*new_v.getODSResults(0).begin()));
      tblgen_SqrtOp_12 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_13;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_12.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*epsilon.begin());
      tblgen_AddV2Op_13 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp tblgen_DivOp_14;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_11.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddV2Op_13.getODSResults(0).begin());
      tblgen_DivOp_14 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_15;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_DivOp_14.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_15 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_16;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*m_resource.begin()));
      tblgen_values.push_back((*new_m.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_16 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_17;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*v_resource.begin()));
      tblgen_values.push_back((*new_v.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_17 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:356
*/
struct DecomposeResourceApplyCenteredRMSProp : public ::mlir::RewritePattern {
  DecomposeResourceApplyCenteredRMSProp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyCenteredRMSProp", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Const", "tf.Div", "tf.Mul", "tf.Sqrt", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range epsilon(op0->getOperands());
    ::mlir::BoolAttr use_locking;
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyCenteredRMSPropOp src_op;
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::Operation::operand_range mg_resource(op0->getOperands());
    ::mlir::Operation::operand_range mom_resource(op0->getOperands());
    ::mlir::Operation::operand_range rho(op0->getOperands());
    ::mlir::Operation::operand_range ms_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyCenteredRMSPropOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    mg_resource = castedOp0.getODSOperands(1);
    ms_resource = castedOp0.getODSOperands(2);
    mom_resource = castedOp0.getODSOperands(3);
    lr = castedOp0.getODSOperands(4);
    rho = castedOp0.getODSOperands(5);
    momentum = castedOp0.getODSOperands(6);
    epsilon = castedOp0.getODSOperands(7);
    grad = castedOp0.getODSOperands(8);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      use_locking = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),1)
      );
    }
    rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*ms_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*ms_resource.begin()));
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_SubOp_1 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubOp_1.getODSResults(0).begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_3;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*ms_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*ms_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_MulOp_3 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op ms_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_3.getODSResults(0).begin());
      ms_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*ms_resource.begin());
      ::mlir::Value tblgen_value_1 = (*ms_new.getODSResults(0).begin());
      tblgen_AssignVariableOp_4 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc,
        /*resource=*/tblgen_value_0,
        /*value=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_SubOp_5 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubOp_5.getODSResults(0).begin());
      tblgen_MulOp_6 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_7;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*mg_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*mg_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_MulOp_7 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op mg_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_6.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_7.getODSResults(0).begin());
      mg_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*mg_resource.begin());
      ::mlir::Value tblgen_value_1 = (*mg_new.getODSResults(0).begin());
      tblgen_AssignVariableOp_8 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc,
        /*resource=*/tblgen_value_0,
        /*value=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*momentum.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*mom_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*mom_resource.begin()));
      tblgen_MulOp_9 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_10 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*mg_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*mg_new.getODSResults(0).begin());
      tblgen_MulOp_11 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_12;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_11.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*epsilon.begin());
      tblgen_AddV2Op_12 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_13;
    {
      ::mlir::Value tblgen_value_0 = (*ms_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddV2Op_12.getODSResults(0).begin());
      tblgen_SubOp_13 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_14;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_13.getODSResults(0).begin()));
      tblgen_SqrtOp_14 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::DivOp tblgen_DivOp_15;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_10.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_14.getODSResults(0).begin());
      tblgen_DivOp_15 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op mom_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_9.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_DivOp_15.getODSResults(0).begin());
      mom_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_16;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*mom_resource.begin()));
      tblgen_values.push_back((*mom_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_16 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_17;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*mom_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_17 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:68
*/
struct DecomposeResourceApplyGradientDescentOp : public ::mlir::RewritePattern {
  DecomposeResourceApplyGradientDescentOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyGradientDescent", {"tf.AssignVariableOp", "tf.Mul", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range delta(op0->getOperands());
    ::mlir::Operation::operand_range alpha(op0->getOperands());
    ::mlir::TF::ResourceApplyGradientDescentOp src_op;
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyGradientDescentOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    resource = castedOp0.getODSOperands(0);
    alpha = castedOp0.getODSOperands(1);
    delta = castedOp0.getODSOperands(2);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyGradientDescent' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*alpha.begin());
      ::mlir::Value tblgen_value_1 = (*delta.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_1;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*resource.begin()), (*alpha.begin()).getType().cast<TensorType>().getElementType()),  (*resource.begin()));
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_0.getODSResults(0).begin());
      tblgen_SubOp_1 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*resource.begin()));
      tblgen_values.push_back((*tblgen_SubOp_1.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_2 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:156
*/
struct DecomposeResourceApplyKerasMomentumOpNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyKerasMomentumOpNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyKerasMomentum", {"tf.AssignAddVariableOp", "tf.AssignVariableOp", "tf.Mul", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyKerasMomentumOp src_op;
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyKerasMomentumOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    grad = castedOp0.getODSOperands(3);
    momentum = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyKerasMomentum' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(true)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyKerasMomentum' attribute 'use_nesterov' failed to satisfy constraint: constant attribute true";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*momentum.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp grad_lr;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*lr.begin());
      grad_lr = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp accum_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad_lr.getODSResults(0).begin());
      accum_new = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*accum_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*momentum.begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad_lr.getODSResults(0).begin());
      tblgen_SubOp_3 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignAddVariableOp tblgen_AssignAddVariableOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_SubOp_3.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignAddVariableOp_4 = rewriter.create<::mlir::TF::AssignAddVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:134
*/
struct DecomposeResourceApplyKerasMomentumOpNonNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyKerasMomentumOpNonNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyKerasMomentum", {"tf.AssignAddVariableOp", "tf.AssignVariableOp", "tf.Mul", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyKerasMomentumOp src_op;
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyKerasMomentumOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    grad = castedOp0.getODSOperands(3);
    momentum = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyKerasMomentum' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(false)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyKerasMomentum' attribute 'use_nesterov' failed to satisfy constraint: constant attribute false";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*momentum.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*lr.begin());
      tblgen_MulOp_1 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp accum_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_1.getODSResults(0).begin());
      accum_new = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_2 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignAddVariableOp tblgen_AssignAddVariableOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignAddVariableOp_3 = rewriter.create<::mlir::TF::AssignAddVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:106
*/
struct DecomposeResourceApplyMomentumOpNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyMomentumOpNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyMomentum", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Mul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyMomentumOp src_op;
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyMomentumOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    grad = castedOp0.getODSOperands(3);
    momentum = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyMomentum' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(true)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyMomentum' attribute 'use_nesterov' failed to satisfy constraint: constant attribute true";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*momentum.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op accum_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      accum_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*lr.begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*momentum.begin());
      ::mlir::Value tblgen_value_1 = (*lr.begin());
      tblgen_MulOp_3 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*accum_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_3.getODSResults(0).begin());
      tblgen_MulOp_4 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_5;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_4.getODSResults(0).begin());
      tblgen_AddV2Op_5 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_AddV2Op_5.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_6 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:84
*/
struct DecomposeResourceApplyMomentumOpNonNesterov : public ::mlir::RewritePattern {
  DecomposeResourceApplyMomentumOpNonNesterov(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyMomentum", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Mul"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyMomentumOp src_op;
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::BoolAttr use_nesterov;
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyMomentumOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    grad = castedOp0.getODSOperands(3);
    momentum = castedOp0.getODSOperands(4);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr.isa<::mlir::BoolAttr>()))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyMomentum' attribute 'use_locking' failed to satisfy constraint: bool attribute";
        });
      }
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_nesterov");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      if (!((tblgen_attr == rewriter.getBoolAttr(false)))){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "op 'tf.ResourceApplyMomentum' attribute 'use_nesterov' failed to satisfy constraint: constant attribute false";
        });
      }
      use_nesterov = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*momentum.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op accum_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      accum_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*accum_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*lr.begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*tblgen_MulOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_3 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:455
*/
struct DecomposeResourceApplyProximalAdagrad : public ::mlir::RewritePattern {
  DecomposeResourceApplyProximalAdagrad(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyProximalAdagrad", {"tf.Abs", "tf.Add", "tf.AddV2", "tf.AssignVariableOp", "tf.Const", "tf.Div", "tf.Greater", "tf.Maximum", "tf.Mul", "tf.Rsqrt", "tf.SelectV2", "tf.Sign", "tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::TF::ResourceApplyProximalAdagradOp src_op;
    ::mlir::BoolAttr use_locking;
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::Operation::operand_range l1(op0->getOperands());
    ::mlir::Operation::operand_range accum_resource(op0->getOperands());
    ::mlir::Operation::operand_range l2(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyProximalAdagradOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    accum_resource = castedOp0.getODSOperands(1);
    lr = castedOp0.getODSOperands(2);
    l1 = castedOp0.getODSOperands(3);
    l2 = castedOp0.getODSOperands(4);
    grad = castedOp0.getODSOperands(5);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      use_locking = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),1)
      );
    }
    ::mlir::TF::ConstOp zero;
    {
      zero = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),0)
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*grad.begin()));
      tblgen_SquareOp_0 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AddV2Op accum_new;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*accum_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*accum_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*tblgen_SquareOp_0.getODSResults(0).begin());
      accum_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::RsqrtOp tblgen_RsqrtOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      tblgen_RsqrtOp_1 = rewriter.create<::mlir::TF::RsqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp adagrad_lr;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_RsqrtOp_1.getODSResults(0).begin());
      adagrad_lr = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*grad.begin());
      ::mlir::Value tblgen_value_1 = (*adagrad_lr.getODSResults(0).begin());
      tblgen_MulOp_2 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp prox_var;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*var_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*var_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_2.getODSResults(0).begin());
      prox_var = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SignOp tblgen_SignOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*prox_var.getODSResults(0).begin()));
      tblgen_SignOp_3 = rewriter.create<::mlir::TF::SignOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AbsOp tblgen_AbsOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*prox_var.getODSResults(0).begin()));
      tblgen_AbsOp_4 = rewriter.create<::mlir::TF::AbsOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::MulOp tblgen_MulOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*adagrad_lr.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*l1.begin());
      tblgen_MulOp_5 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SubOp tblgen_SubOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_4.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_5.getODSResults(0).begin());
      tblgen_SubOp_6 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MaximumOp tblgen_MaximumOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubOp_6.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_MaximumOp_7 = rewriter.create<::mlir::TF::MaximumOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp l1_gt_zero;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SignOp_3.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MaximumOp_7.getODSResults(0).begin());
      l1_gt_zero = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::GreaterOp tblgen_GreaterOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*l1.begin());
      ::mlir::Value tblgen_value_1 = (*zero.getODSResults(0).begin());
      tblgen_GreaterOp_8 = rewriter.create<::mlir::TF::GreaterOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SelectV2Op var_numerator;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_GreaterOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*l1_gt_zero.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*prox_var.getODSResults(0).begin());
      var_numerator = rewriter.create<::mlir::TF::SelectV2Op>(odsLoc,
        /*condition=*/tblgen_value_0,
        /*t=*/tblgen_value_1,
        /*e=*/tblgen_value_2
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*adagrad_lr.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*l2.begin());
      tblgen_MulOp_9 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddOp tblgen_AddOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_9.getODSResults(0).begin());
      tblgen_AddOp_10 = rewriter.create<::mlir::TF::AddOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::DivOp var_new;
    {
      ::mlir::Value tblgen_value_0 = (*var_numerator.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_10.getODSResults(0).begin());
      var_new = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_11;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*var_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_11 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_12;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*accum_resource.begin()));
      tblgen_values.push_back((*accum_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_12 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:418
*/
struct DecomposeResourceApplyRMSProp : public ::mlir::RewritePattern {
  DecomposeResourceApplyRMSProp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceApplyRMSProp", {"tf.AddV2", "tf.AssignSubVariableOp", "tf.AssignVariableOp", "tf.Const", "tf.Div", "tf.Mul", "tf.Sqrt", "tf.Square", "tf.Sub"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range grad(op0->getOperands());
    ::mlir::Operation::operand_range epsilon(op0->getOperands());
    ::mlir::Operation::operand_range momentum(op0->getOperands());
    ::mlir::BoolAttr use_locking;
    ::mlir::Operation::operand_range var_resource(op0->getOperands());
    ::mlir::TF::ResourceApplyRMSPropOp src_op;
    ::mlir::Operation::operand_range rho(op0->getOperands());
    ::mlir::Operation::operand_range ms_resource(op0->getOperands());
    ::mlir::Operation::operand_range mom_resource(op0->getOperands());
    ::mlir::Operation::operand_range lr(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceApplyRMSPropOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    var_resource = castedOp0.getODSOperands(0);
    ms_resource = castedOp0.getODSOperands(1);
    mom_resource = castedOp0.getODSOperands(2);
    lr = castedOp0.getODSOperands(3);
    rho = castedOp0.getODSOperands(4);
    momentum = castedOp0.getODSOperands(5);
    epsilon = castedOp0.getODSOperands(6);
    grad = castedOp0.getODSOperands(7);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("use_locking");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(false);
      use_locking = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::ConstOp one;
    {
      one = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/GetScalarOfType(getElementTypeOrSelf((*grad.begin())),1)
      );
    }
    rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*ms_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*ms_resource.begin()));
    ::mlir::TF::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*ms_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*ms_resource.begin()));
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SquareOp tblgen_SquareOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*grad.begin()));
      tblgen_SquareOp_1 = rewriter.create<::mlir::TF::SquareOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::SubOp tblgen_SubOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*one.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*rho.begin());
      tblgen_SubOp_2 = rewriter.create<::mlir::TF::SubOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SquareOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubOp_2.getODSResults(0).begin());
      tblgen_MulOp_3 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op ms_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_3.getODSResults(0).begin());
      ms_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*ms_resource.begin());
      ::mlir::Value tblgen_value_1 = (*ms_new.getODSResults(0).begin());
      tblgen_AssignVariableOp_4 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc,
        /*resource=*/tblgen_value_0,
        /*value=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*momentum.begin());
      ::mlir::Value tblgen_value_1 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*mom_resource.begin()), (*grad.begin()).getType().cast<TensorType>().getElementType()),  (*mom_resource.begin()));
      tblgen_MulOp_5 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::MulOp tblgen_MulOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*lr.begin());
      ::mlir::Value tblgen_value_1 = (*grad.begin());
      tblgen_MulOp_6 = rewriter.create<::mlir::TF::MulOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op tblgen_AddV2Op_7;
    {
      ::mlir::Value tblgen_value_0 = (*ms_new.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*epsilon.begin());
      tblgen_AddV2Op_7 = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::SqrtOp tblgen_SqrtOp_8;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddV2Op_7.getODSResults(0).begin()));
      tblgen_SqrtOp_8 = rewriter.create<::mlir::TF::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::DivOp tblgen_DivOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_6.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_8.getODSResults(0).begin());
      tblgen_DivOp_9 = rewriter.create<::mlir::TF::DivOp>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AddV2Op mom_new;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_DivOp_9.getODSResults(0).begin());
      mom_new = rewriter.create<::mlir::TF::AddV2Op>(odsLoc,
        /*x=*/tblgen_value_0,
        /*y=*/tblgen_value_1
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_10;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*mom_resource.begin()));
      tblgen_values.push_back((*mom_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_10 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::TF::AssignSubVariableOp tblgen_AssignSubVariableOp_11;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*var_resource.begin()));
      tblgen_values.push_back((*mom_new.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignSubVariableOp_11 = rewriter.create<::mlir::TF::AssignSubVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:319
*/
struct DecomposeResourceGather : public ::mlir::RewritePattern {
  DecomposeResourceGather(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceGather", {"tf.Const", "tf.GatherV2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::BoolAttr validate_indices;
    ::mlir::IntegerAttr batch_dims;
    ::mlir::Operation::operand_range indices(op0->getOperands());
    ::mlir::TF::ResourceGatherOp old_result;
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceGatherOp>(op0); (void)castedOp0;
    old_result = castedOp0;
    resource = castedOp0.getODSOperands(0);
    indices = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("batch_dims");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getIntegerAttr(rewriter.getIntegerType(64), 0);
      batch_dims = tblgen_attr;
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("validate_indices");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = rewriter.getBoolAttr(true);
      validate_indices = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ConstOp tblgen_ConstOp_0;
    {
      tblgen_ConstOp_0 = rewriter.create<::mlir::TF::ConstOp>(odsLoc,
        /*value=*/batch_dims
      );
    }
    ::mlir::TF::GatherV2Op tblgen_GatherV2Op_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(rewriter.create<TF::ReadVariableOp>(  (*old_result.getODSResults(0).begin()).getLoc(),  GetResourceSubtypeOrDefault(    (*resource.begin()), (*old_result.getODSResults(0).begin()).getType().cast<TensorType>().getElementType()),  (*resource.begin())));
      tblgen_values.push_back((*indices.begin()));
      tblgen_values.push_back((*tblgen_ConstOp_0.getODSResults(0).begin()));
      if (auto tmpAttr = batch_dims) {
        tblgen_attrs.emplace_back(rewriter.getIdentifier("batch_dims"), tmpAttr);
      }
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_GatherV2Op_1 = rewriter.create<::mlir::TF::GatherV2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_GatherV2Op_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:332
*/
struct DecomposeResourceScatterUpdate : public ::mlir::RewritePattern {
  DecomposeResourceScatterUpdate(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.ResourceScatterUpdate", {"tf.AssignVariableOp", "tf.TensorScatterUpdate"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range updates(op0->getOperands());
    ::mlir::Operation::operand_range indices(op0->getOperands());
    ::mlir::TF::ResourceScatterUpdateOp src_op;
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::ResourceScatterUpdateOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    resource = castedOp0.getODSOperands(0);
    indices = castedOp0.getODSOperands(1);
    if (!(!((((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().hasRank())) && (((*castedOp0.getODSOperands(2).begin()).getType().cast<::mlir::ShapedType>().getRank()
                             == 0))))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 2 of op 'tf.ResourceScatterUpdate' failed to satisfy constraint: 'Non scalar type'";
      });
    }
    updates = castedOp0.getODSOperands(2);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::mlir::TF::TensorScatterUpdateOp tblgen_TensorScatterUpdateOp_0;
    {
      ::mlir::Value tblgen_value_0 = rewriter.create<TF::ReadVariableOp>(  src_op.getLoc(),  GetResourceSubtypeOrDefault(    (*resource.begin()), (*updates.begin()).getType().cast<TensorType>().getElementType()),  (*resource.begin()));
      ::mlir::Value tblgen_value_1 = (*indices.begin());
      ::mlir::Value tblgen_value_2 = (*updates.begin());
      tblgen_TensorScatterUpdateOp_0 = rewriter.create<::mlir::TF::TensorScatterUpdateOp>(odsLoc,
        /*tensor=*/tblgen_value_0,
        /*indices=*/tblgen_value_1,
        /*updates=*/tblgen_value_2
      );
    }
    ::mlir::TF::AssignVariableOp tblgen_AssignVariableOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*resource.begin()));
      tblgen_values.push_back((*tblgen_TensorScatterUpdateOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_AssignVariableOp_1 = rewriter.create<::mlir::TF::AssignVariableOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/tensorflow/transforms/decompose_resource_ops.td:345
*/
struct DecomposeVariableShape : public ::mlir::RewritePattern {
  DecomposeVariableShape(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tf.VariableShape", {"tf.Shape"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range resource(op0->getOperands());
    ::mlir::TF::VariableShapeOp src_op;
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::TF::VariableShapeOp>(op0); (void)castedOp0;
    src_op = castedOp0;
    resource = castedOp0.getODSOperands(0);
    if (!((HasResourceSubtype((*resource.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'resource' failed to satisfy constraint: ";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::TF::ShapeOp tblgen_ShapeOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(rewriter.create<TF::ReadVariableOp>((*src_op.getODSResults(0).begin()).getLoc(), GetResourceSubtype((*resource.begin())), (*resource.begin())));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ShapeOp_0 = rewriter.create<::mlir::TF::ShapeOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ShapeOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<DecomposeAssignAddVariableOp>(patterns.getContext());
  patterns.add<DecomposeAssignSubVariableOp>(patterns.getContext());
  patterns.add<DecomposeResourceApplyAdagrad>(patterns.getContext());
  patterns.add<DecomposeResourceApplyAdagradV2>(patterns.getContext());
  patterns.add<DecomposeResourceApplyAdamNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyAdamNonNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyCenteredRMSProp>(patterns.getContext());
  patterns.add<DecomposeResourceApplyGradientDescentOp>(patterns.getContext());
  patterns.add<DecomposeResourceApplyKerasMomentumOpNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyKerasMomentumOpNonNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyMomentumOpNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyMomentumOpNonNesterov>(patterns.getContext());
  patterns.add<DecomposeResourceApplyProximalAdagrad>(patterns.getContext());
  patterns.add<DecomposeResourceApplyRMSProp>(patterns.getContext());
  patterns.add<DecomposeResourceGather>(patterns.getContext());
  patterns.add<DecomposeResourceScatterUpdate>(patterns.getContext());
  patterns.add<DecomposeVariableShape>(patterns.getContext());
}
