/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace lmhlo_gpu {
ConvolutionBackendConfig ConvolutionBackendConfig::get(
    ::mlir::IntegerAttr algorithm,
    ::mlir::BoolAttr tensor_ops_enabled,
    ::mlir::ArrayAttr operand_0_layout,
    ::mlir::ArrayAttr operand_1_layout,
    ::mlir::ArrayAttr result_layout,
    ::mlir::MLIRContext* context) {
  ::llvm::SmallVector<::mlir::NamedAttribute, 5> fields;

  assert(algorithm);
  auto algorithm_id = ::mlir::Identifier::get("algorithm", context);
  fields.emplace_back(algorithm_id, algorithm);

  assert(tensor_ops_enabled);
  auto tensor_ops_enabled_id = ::mlir::Identifier::get("tensor_ops_enabled", context);
  fields.emplace_back(tensor_ops_enabled_id, tensor_ops_enabled);

  assert(operand_0_layout);
  auto operand_0_layout_id = ::mlir::Identifier::get("operand_0_layout", context);
  fields.emplace_back(operand_0_layout_id, operand_0_layout);

  assert(operand_1_layout);
  auto operand_1_layout_id = ::mlir::Identifier::get("operand_1_layout", context);
  fields.emplace_back(operand_1_layout_id, operand_1_layout);

  assert(result_layout);
  auto result_layout_id = ::mlir::Identifier::get("result_layout", context);
  fields.emplace_back(result_layout_id, result_layout);

  ::mlir::Attribute dict = ::mlir::DictionaryAttr::get(context, fields);
  return dict.dyn_cast<ConvolutionBackendConfig>();
}

bool ConvolutionBackendConfig::classof(::mlir::Attribute attr) {
  if (!attr)
    return false;
  auto derived = attr.dyn_cast<::mlir::DictionaryAttr>();
  if (!derived)
    return false;
  int num_absent_attrs = 0;

  auto algorithm = derived.get("algorithm");
  if (!algorithm || !(((algorithm.isa<::mlir::IntegerAttr>())) && ((algorithm.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return false;

  auto tensor_ops_enabled = derived.get("tensor_ops_enabled");
  if (!tensor_ops_enabled || !((tensor_ops_enabled.isa<::mlir::BoolAttr>())))
    return false;

  auto operand_0_layout = derived.get("operand_0_layout");
  if (!operand_0_layout || !(((operand_0_layout.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(operand_0_layout.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); }))))
    return false;

  auto operand_1_layout = derived.get("operand_1_layout");
  if (!operand_1_layout || !(((operand_1_layout.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(operand_1_layout.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); }))))
    return false;

  auto result_layout = derived.get("result_layout");
  if (!result_layout || !(((result_layout.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(result_layout.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return ((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))); }))))
    return false;

  return derived.size() + num_absent_attrs == 5;
}

::mlir::IntegerAttr ConvolutionBackendConfig::algorithm() const {
  auto derived = this->cast<::mlir::DictionaryAttr>();
  auto algorithm = derived.get("algorithm");
  assert(algorithm && "attribute not found.");
  assert(algorithm.isa<::mlir::IntegerAttr>() && "incorrect Attribute type found.");
  return algorithm.cast<::mlir::IntegerAttr>();
}

::mlir::BoolAttr ConvolutionBackendConfig::tensor_ops_enabled() const {
  auto derived = this->cast<::mlir::DictionaryAttr>();
  auto tensor_ops_enabled = derived.get("tensor_ops_enabled");
  assert(tensor_ops_enabled && "attribute not found.");
  assert(tensor_ops_enabled.isa<::mlir::BoolAttr>() && "incorrect Attribute type found.");
  return tensor_ops_enabled.cast<::mlir::BoolAttr>();
}

::mlir::ArrayAttr ConvolutionBackendConfig::operand_0_layout() const {
  auto derived = this->cast<::mlir::DictionaryAttr>();
  auto operand_0_layout = derived.get("operand_0_layout");
  assert(operand_0_layout && "attribute not found.");
  assert(operand_0_layout.isa<::mlir::ArrayAttr>() && "incorrect Attribute type found.");
  return operand_0_layout.cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ConvolutionBackendConfig::operand_1_layout() const {
  auto derived = this->cast<::mlir::DictionaryAttr>();
  auto operand_1_layout = derived.get("operand_1_layout");
  assert(operand_1_layout && "attribute not found.");
  assert(operand_1_layout.isa<::mlir::ArrayAttr>() && "incorrect Attribute type found.");
  return operand_1_layout.cast<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr ConvolutionBackendConfig::result_layout() const {
  auto derived = this->cast<::mlir::DictionaryAttr>();
  auto result_layout = derived.get("result_layout");
  assert(result_layout && "attribute not found.");
  assert(result_layout.isa<::mlir::ArrayAttr>() && "incorrect Attribute type found.");
  return result_layout.cast<::mlir::ArrayAttr>();
}
} // namespace lmhlo_gpu
} // namespace mlir
