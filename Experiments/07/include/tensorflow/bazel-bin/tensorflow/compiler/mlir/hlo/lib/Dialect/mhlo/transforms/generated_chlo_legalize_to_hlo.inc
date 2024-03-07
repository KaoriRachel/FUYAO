/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:33
*/
struct GeneratedConvert0 : public ::mlir::RewritePattern {
  GeneratedConvert0(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.acos", {"mhlo.add", "mhlo.atan2", "mhlo.compare", "mhlo.multiply", "mhlo.select", "mhlo.sqrt", "mhlo.subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AcosOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.acos' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin()));
      tblgen_CompareOp_0 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("NE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*input.begin()));
      tblgen_MulOp_1 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*tblgen_MulOp_1.getODSResults(0).begin()));
      tblgen_SubOp_2 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_2.getODSResults(0).begin()));
      tblgen_SqrtOp_3 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*input.begin()));
      tblgen_AddOp_4 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SqrtOp_3.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_4.getODSResults(0).begin()));
      tblgen_Atan2Op_5 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())));
      tblgen_values.push_back((*tblgen_Atan2Op_5.getODSResults(0).begin()));
      tblgen_MulOp_6 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_6.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, M_PI, (*input.begin())));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_7 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_7.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:67
*/
struct GeneratedConvert1 : public ::mlir::RewritePattern {
  GeneratedConvert1(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.acosh", {"mhlo.add", "mhlo.compare", "mhlo.log", "mhlo.multiply", "mhlo.select", "mhlo.sqrt"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AcoshOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.acosh' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin()));
      tblgen_CompareOp_0 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLikeMaxFiniteValue(rewriter, odsLoc, (*input.begin())));
      tblgen_SqrtOp_1 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_1.getODSResults(0).begin());
      tblgen_CompareOp_2 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("GE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_LogOp_3 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())));
      tblgen_LogOp_4 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_LogOp_3.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_LogOp_4.getODSResults(0).begin()));
      tblgen_AddOp_5 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*input.begin()));
      tblgen_AddOp_6 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin())));
      tblgen_values.push_back((*input.begin()));
      tblgen_AddOp_7 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_8;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_6.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_7.getODSResults(0).begin()));
      tblgen_MulOp_8 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_9;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_8.getODSResults(0).begin()));
      tblgen_SqrtOp_9 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_10;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_SqrtOp_9.getODSResults(0).begin()));
      tblgen_AddOp_10 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_11;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_10.getODSResults(0).begin()));
      tblgen_LogOp_11 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_12;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_2.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_LogOp_11.getODSResults(0).begin());
      tblgen_SelectOp_12 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_13;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_0.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, NAN, (*input.begin())));
      tblgen_values.push_back((*tblgen_SelectOp_12.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_13 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_13.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:113
*/
struct GeneratedConvert2 : public ::mlir::RewritePattern {
  GeneratedConvert2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.asin", {"mhlo.add", "mhlo.atan2", "mhlo.multiply", "mhlo.sqrt", "mhlo.subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AsinOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.asin' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::MulOp tblgen_MulOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*input.begin()));
      tblgen_MulOp_0 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*tblgen_MulOp_0.getODSResults(0).begin()));
      tblgen_SubOp_1 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_1.getODSResults(0).begin()));
      tblgen_SqrtOp_2 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*tblgen_SqrtOp_2.getODSResults(0).begin()));
      tblgen_AddOp_3 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_AddOp_3.getODSResults(0).begin()));
      tblgen_Atan2Op_4 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())));
      tblgen_values.push_back((*tblgen_Atan2Op_4.getODSResults(0).begin()));
      tblgen_MulOp_5 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_5.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:150
*/
struct GeneratedConvert3 : public ::mlir::RewritePattern {
  GeneratedConvert3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.asinh", {"mhlo.abs", "mhlo.add", "mhlo.compare", "mhlo.divide", "mhlo.log", "mhlo.log_plus_one", "mhlo.multiply", "mhlo.select", "mhlo.sign", "mhlo.sqrt"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AsinhOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.asinh' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::SignOp tblgen_SignOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_SignOp_0 = rewriter.create<::mlir::mhlo::SignOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_1 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLikeMaxFiniteValue(rewriter, odsLoc, (*input.begin())));
      tblgen_SqrtOp_2 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_2.getODSResults(0).begin());
      tblgen_CompareOp_3 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("GE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_4 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_4.getODSResults(0).begin()));
      tblgen_LogOp_5 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())));
      tblgen_LogOp_6 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_LogOp_5.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_LogOp_6.getODSResults(0).begin()));
      tblgen_AddOp_7 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_8 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_9;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin()));
      tblgen_CompareOp_9 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("LE"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_10 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_11 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_12;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_12 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_13;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_13 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_14;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_14 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_15;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_13.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AbsOp_14.getODSResults(0).begin()));
      tblgen_MulOp_15 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_16;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_15.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_AddOp_16 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_17;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_16.getODSResults(0).begin()));
      tblgen_SqrtOp_17 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_18;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_values.push_back((*tblgen_SqrtOp_17.getODSResults(0).begin()));
      tblgen_AddOp_18 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::DivOp tblgen_DivOp_19;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_12.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_18.getODSResults(0).begin()));
      tblgen_DivOp_19 = rewriter.create<::mlir::mhlo::DivOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_20;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_11.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_DivOp_19.getODSResults(0).begin()));
      tblgen_MulOp_20 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_21;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_10.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_20.getODSResults(0).begin()));
      tblgen_AddOp_21 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_22;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_21.getODSResults(0).begin()));
      tblgen_Log1pOp_22 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_23;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_23 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_24;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_24 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_25;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_25 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_26;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_24.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AbsOp_25.getODSResults(0).begin()));
      tblgen_MulOp_26 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_27;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_MulOp_26.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_AddOp_27 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_28;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_27.getODSResults(0).begin()));
      tblgen_SqrtOp_28 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_29;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_23.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SqrtOp_28.getODSResults(0).begin()));
      tblgen_AddOp_29 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_30;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_29.getODSResults(0).begin()));
      tblgen_LogOp_30 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_31;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_9.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_Log1pOp_22.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_LogOp_30.getODSResults(0).begin());
      tblgen_SelectOp_31 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_32;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_3.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_SelectOp_31.getODSResults(0).begin());
      tblgen_SelectOp_32 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_33;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SignOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SelectOp_32.getODSResults(0).begin()));
      tblgen_MulOp_33 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_33.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:220
*/
struct GeneratedConvert4 : public ::mlir::RewritePattern {
  GeneratedConvert4(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.atan", {"mhlo.atan2"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AtanOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())));
      tblgen_Atan2Op_0 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Atan2Op_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:229
*/
struct GeneratedConvert5 : public ::mlir::RewritePattern {
  GeneratedConvert5(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.atanh", {"mhlo.abs", "mhlo.compare", "mhlo.log_plus_one", "mhlo.multiply", "mhlo.negate", "mhlo.select", "mhlo.subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::AtanhOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.atanh' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin()));
      tblgen_CompareOp_1 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("GT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_Log1pOp_2 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NegOp_3 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_NegOp_3.getODSResults(0).begin()));
      tblgen_Log1pOp_4 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_Log1pOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_Log1pOp_4.getODSResults(0).begin()));
      tblgen_SubOp_5 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_5.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())));
      tblgen_MulOp_6 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_1.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, NAN, (*input.begin())));
      tblgen_values.push_back((*tblgen_MulOp_6.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_7 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_7.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:251
*/
struct GeneratedConvert6 : public ::mlir::RewritePattern {
  GeneratedConvert6(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.conj", {"mhlo.complex", "mhlo.imag", "mhlo.negate", "mhlo.real"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range v(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::ConjOp>(op0); (void)castedOp0;
    v = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::RealOp tblgen_RealOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*v.begin());
      tblgen_RealOp_0 = rewriter.create<::mlir::mhlo::RealOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::ImagOp tblgen_ImagOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*v.begin());
      tblgen_ImagOp_1 = rewriter.create<::mlir::mhlo::ImagOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ImagOp_1.getODSResults(0).begin()));
      tblgen_NegOp_2 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ComplexOp tblgen_ComplexOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_RealOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_NegOp_2.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ComplexOp_3 = rewriter.create<::mlir::mhlo::ComplexOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ComplexOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:264
*/
struct GeneratedConvert7 : public ::mlir::RewritePattern {
  GeneratedConvert7(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.cosh", {"mhlo.add", "mhlo.exponential", "mhlo.log", "mhlo.negate"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::CoshOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.cosh' failed to satisfy constraint: 'Non-complex element type'";
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
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())));
      tblgen_LogOp_0 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_LogOp_0.getODSResults(0).begin()));
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_1.getODSResults(0).begin()));
      tblgen_ExpOp_2 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NegOp_3 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())));
      tblgen_LogOp_4 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_NegOp_3.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_LogOp_4.getODSResults(0).begin()));
      tblgen_AddOp_5 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_5.getODSResults(0).begin()));
      tblgen_ExpOp_6 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ExpOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ExpOp_6.getODSResults(0).begin()));
      tblgen_AddOp_7 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_7.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:286
*/
struct GeneratedConvert8 : public ::mlir::RewritePattern {
  GeneratedConvert8(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_inf", {"chlo.is_pos_inf", "mhlo.abs"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::IsInfOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.is_inf' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::chlo::IsPosInfOp tblgen_IsPosInfOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_0.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_IsPosInfOp_1 = rewriter.create<::mlir::chlo::IsPosInfOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_IsPosInfOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:293
*/
struct GeneratedConvert9 : public ::mlir::RewritePattern {
  GeneratedConvert9(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_pos_inf", {"mhlo.compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::IsPosInfOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.is_pos_inf' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(chlo::getConstantLikeInfValue(rewriter, odsLoc, (*input.begin()), /*negative=*/false));
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
      tblgen_CompareOp_0 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:303
*/
struct GeneratedConvert10 : public ::mlir::RewritePattern {
  GeneratedConvert10(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_neg_inf", {"mhlo.compare"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::IsNegInfOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.is_neg_inf' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_0;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(chlo::getConstantLikeInfValue(rewriter, odsLoc, (*input.begin()), /*negative=*/true));
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
      tblgen_CompareOp_0 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CompareOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:316
*/
struct GeneratedConvert11 : public ::mlir::RewritePattern {
  GeneratedConvert11(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.sinh", {"mhlo.abs", "mhlo.add", "mhlo.compare", "mhlo.divide", "mhlo.exponential", "mhlo.log", "mhlo.negate", "mhlo.select", "mhlo.subtract"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::SinhOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.sinh' failed to satisfy constraint: 'Non-complex element type'";
      });
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::CompareOp tblgen_CompareOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin()));
      tblgen_CompareOp_1 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        rewriter.getStringAttr("LT"),
        /*compare_type=*/StringAttr()
      );
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_ExpOp_2 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_3;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_NegOp_3 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_4;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_NegOp_3.getODSResults(0).begin()));
      tblgen_ExpOp_4 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_5;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ExpOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ExpOp_4.getODSResults(0).begin()));
      tblgen_SubOp_5 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::DivOp tblgen_DivOp_6;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_5.getODSResults(0).begin()));
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())));
      tblgen_DivOp_6 = rewriter.create<::mlir::mhlo::DivOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_7;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())));
      tblgen_LogOp_7 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_8;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back((*tblgen_LogOp_7.getODSResults(0).begin()));
      tblgen_AddOp_8 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_9;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_8.getODSResults(0).begin()));
      tblgen_ExpOp_9 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_10;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())));
      tblgen_LogOp_10 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_11;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_LogOp_10.getODSResults(0).begin()));
      tblgen_values.push_back((*input.begin()));
      tblgen_SubOp_11 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::ExpOp tblgen_ExpOp_12;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubOp_11.getODSResults(0).begin()));
      tblgen_ExpOp_12 = rewriter.create<::mlir::mhlo::ExpOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubOp tblgen_SubOp_13;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ExpOp_9.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_ExpOp_12.getODSResults(0).begin()));
      tblgen_SubOp_13 = rewriter.create<::mlir::mhlo::SubOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_14;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_1.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_DivOp_6.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubOp_13.getODSResults(0).begin()));
      ::mlir::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_14 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_14.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/hlo/lib/Dialect/mhlo/transforms/chlo_legalize_to_hlo_patterns.td:355
*/
struct GeneratedConvert12 : public ::mlir::RewritePattern {
  GeneratedConvert12(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.tan", {"mhlo.cosine", "mhlo.divide", "mhlo.sine"}, 1, context) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::mlir::Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = ::llvm::dyn_cast_or_null<::mlir::chlo::TanOp>(op0); (void)castedOp0;
    if (!((!(*castedOp0.getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType().isa<ComplexType>()))){
      return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
        diag << "operand 0 of op 'chlo.tan' failed to satisfy constraint: 'Non-complex element type'";
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
    ::mlir::mhlo::CosOp tblgen_CosOp_1;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_CosOp_1 = rewriter.create<::mlir::mhlo::CosOp>(odsLoc, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::DivOp tblgen_DivOp_2;
    {
      ::mlir::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::mlir::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SinOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_CosOp_1.getODSResults(0).begin()));
      tblgen_DivOp_2 = rewriter.create<::mlir::mhlo::DivOp>(odsLoc, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DivOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
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
}
