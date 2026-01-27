#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <jcpp.h>

#undef AASTORE
#undef ABSOLUTE_ITERATOR
#undef ACC_FINAL
#undef ACC_PRIVATE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_SUPER
#undef ACONST_NULL
#undef ADD_ATTRIBUTE
#undef ADD_ATTRIBUTE_SIG
#undef ADD_ITERATOR
#undef ADD_ITERATOR_SIG
#undef ADD_PARAMETER
#undef ADD_PARAMETER_SIG
#undef ADD_READS
#undef ADD_READS_SIG
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef APPLY_TEMPLATES
#undef ARETURN
#undef ATHROW
#undef ATTRIBUTES_SIG
#undef ATTRIBUTE_LIST_FIELD
#undef ATTRIBUTE_LIST_IMPL_CLASS
#undef ATTRIBUTE_LIST_IMPL_SIG
#undef ATTR_SET_SIG
#undef BASIS_LIBRARY_CLASS
#undef BOOLEAN_CLASS
#undef BOOLEAN_VALUE
#undef BOOLEAN_VALUE_SIG
#undef CACHED_NODE_LIST_ITERATOR_CLASS
#undef CHARACTERS
#undef CHARACTERSW
#undef CHARACTERSW_SIG
#undef CHARACTERS_SIG
#undef CLASS_CLASS
#undef CLASS_SIG
#undef CLEAR_ATTRIBUTES
#undef CLEAR_ATTRIBUTES_SIG
#undef COLLATOR_CLASS
#undef COLLATOR_SIG
#undef COMPILER_PACKAGE
#undef CURRENT_NODE_LIST_FILTER
#undef CURRENT_NODE_LIST_FILTER_SIG
#undef CURRENT_NODE_LIST_ITERATOR
#undef CURRENT_NODE_LIST_ITERATOR_SIG
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DCMPG
#undef DCONST_0
#undef DEFAULT_NODE_COUNTER
#undef DEFAULT_NODE_COUNTER_SIG
#undef DOCUMENT_PNAME
#undef DOM_ADAPTER_CLASS
#undef DOM_ADAPTER_SIG
#undef DOM_FIELD
#undef DOM_IMPL
#undef DOM_IMPL_CLASS
#undef DOM_IMPL_SIG
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DOM_PNAME
#undef DOUBLE_CLASS
#undef DOUBLE_SIG
#undef DOUBLE_VALUE
#undef DOUBLE_VALUE_SIG
#undef DUP
#undef DUP2
#undef DUP_FILTERED_ITERATOR
#undef DUP_X1
#undef DUP_X2
#undef EMPTYATTR_FIELD
#undef EMPTYSTRING
#undef ERROR
#undef F2D
#undef FALLBACK_CLASS
#undef FATAL
#undef FILTER_INTERFACE
#undef FILTER_INTERFACE_SIG
#undef FILTER_ITERATOR
#undef FILTER_STEP_ITERATOR
#undef FORMAT_SYMBOLS_FIELD
#undef FOR_NAME
#undef FOR_NAME_SIG
#undef GET_ATTRIBUTE_VALUE
#undef GET_ATTRIBUTE_VALUE_SIG
#undef GET_CHILDREN
#undef GET_CHILDREN_SIG
#undef GET_ELEMENT_VALUE
#undef GET_ELEMENT_VALUE_SIG
#undef GET_ITERATOR_SIG
#undef GET_MODULE
#undef GET_MODULE_SIG
#undef GET_NODE_NAME
#undef GET_NODE_NAME_SIG
#undef GET_NODE_TYPE
#undef GET_NODE_TYPE_SIG
#undef GET_NODE_VALUE
#undef GET_NODE_VALUE_ITERATOR
#undef GET_NODE_VALUE_ITERATOR_SIG
#undef GET_NODE_VALUE_SIG
#undef GET_PARAMETER
#undef GET_PARAMETER_SIG
#undef GET_PARENT
#undef GET_PARENT_SIG
#undef GET_TYPED_CHILDREN
#undef GET_TYPED_CHILDREN_SIG
#undef GET_UNPARSED_ENTITY_URI
#undef GET_UNPARSED_ENTITY_URI_SIG
#undef HASIDCALL_INDEX
#undef HASIDCALL_INDEX_SIG
#undef HAS_ATTRIBUTE
#undef HAS_ATTRIBUTE_SIG
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IASTORE
#undef ICONST_0
#undef ICONST_1
#undef ILOAD_1
#undef ILOAD_2
#undef INTEGER_CLASS
#undef INTEGER_SIG
#undef INTERNAL
#undef INT_VALUE
#undef INT_VALUE_SIG
#undef INVOKE_METHOD
#undef IRETURN
#undef ITERATOR_FIELD_SIG
#undef ITERATOR_PNAME
#undef IXOR
#undef KEY_INDEX_CLASS
#undef KEY_INDEX_ITERATOR_SIG
#undef KEY_INDEX_SIG
#undef L2D
#undef L2I
#undef LAST_INDEX
#undef LOAD_DOCUMENT_CLASS
#undef LOCALE_CLASS
#undef LOCALE_SIG
#undef MAKE_NODE
#undef MAKE_NODE_LIST
#undef MAKE_NODE_LIST_SIG
#undef MAKE_NODE_LIST_SIG2
#undef MAKE_NODE_SIG
#undef MAKE_NODE_SIG2
#undef MATCHING_ITERATOR
#undef MATH_CLASS
#undef MODULE_CLASS
#undef MODULE_SIG
#undef MULTI_DOM_CLASS
#undef MULTI_DOM_SIG
#undef NAMESPACE_FEATURE
#undef NAMESPACE_INDEX
#undef NAMESPACE_INDEX_SIG
#undef NAMES_INDEX
#undef NAMES_INDEX_SIG
#undef NEXT
#undef NEXTID
#undef NEXT_SIG
#undef NODE
#undef NODE_COUNTER
#undef NODE_COUNTER_SIG
#undef NODE_FIELD
#undef NODE_FIELD_SIG
#undef NODE_ITERATOR
#undef NODE_ITERATOR_BASE
#undef NODE_ITERATOR_SIG
#undef NODE_PNAME
#undef NODE_SIG
#undef NODE_SORT_FACTORY
#undef NODE_SORT_FACTORY_SIG
#undef NODE_SORT_RECORD
#undef NODE_SORT_RECORD_SIG
#undef NOP
#undef NTH_ITERATOR_CLASS
#undef OBJECT_CLASS
#undef OBJECT_SIG
#undef ORDER_ITERATOR
#undef ORDER_ITERATOR_SIG
#undef OUTPUT_BASE
#undef OUTPUT_HANDLER
#undef OUTPUT_HANDLER_SIG
#undef PKGS_USED_BY_TRANSLET_CLASSES
#undef POP
#undef POP2
#undef POP_PARAM_FRAME
#undef POP_PARAM_FRAME_SIG
#undef POSITION_INDEX
#undef PUSH_PARAM_FRAME
#undef PUSH_PARAM_FRAME_SIG
#undef REDIRECT_URI
#undef RESET
#undef RESET_SIG
#undef RETURN
#undef RTF_INITIAL_SIZE
#undef RUNTIME_NODE_CLASS
#undef RUNTIME_PACKAGE
#undef SAX_IMPL
#undef SAX_IMPL_CLASS
#undef SAX_IMPL_SIG
#undef SET_START_NODE
#undef SET_START_NODE_SIG
#undef SINGLETON_ITERATOR
#undef SORT_ITERATOR
#undef SORT_ITERATOR_SIG
#undef STATIC_CHAR_DATA_FIELD
#undef STATIC_CHAR_DATA_FIELD_SIG
#undef STATIC_NAMESPACE_ARRAY_FIELD
#undef STATIC_NAMES_ARRAY_FIELD
#undef STATIC_TYPES_ARRAY_FIELD
#undef STATIC_URIS_ARRAY_FIELD
#undef STEP_ITERATOR_CLASS
#undef STREAM_XML_OUTPUT
#undef STRING
#undef STRING_BUFFER_CLASS
#undef STRING_BUFFER_SIG
#undef STRING_CLASS
#undef STRING_SIG
#undef STRING_TO_INT
#undef STRING_TO_INT_SIG
#undef STRING_TO_REAL
#undef STRING_TO_REAL_SIG
#undef STRING_VALUE_HANDLER
#undef STRING_VALUE_HANDLER_SIG
#undef STRING_WRITER
#undef STRIP_SPACE
#undef STRIP_SPACE_INTF
#undef STRIP_SPACE_PARAMS
#undef STRIP_SPACE_SIG
#undef SWAP
#undef TRANSLET_CLASS
#undef TRANSLET_FIELD
#undef TRANSLET_FIELD_SIG
#undef TRANSLET_INTF
#undef TRANSLET_INTF_SIG
#undef TRANSLET_OUTPUT_BASE
#undef TRANSLET_OUTPUT_INTERFACE
#undef TRANSLET_OUTPUT_PNAME
#undef TRANSLET_OUTPUT_SIG
#undef TRANSLET_PNAME
#undef TRANSLET_SIG
#undef TRANSLET_URI
#undef TRANSLET_VERSION_INDEX
#undef TRANSLET_VERSION_INDEX_SIG
#undef TYPES_INDEX
#undef TYPES_INDEX_SIG
#undef UNION_ITERATOR_CLASS
#undef UNION_ITERATOR_SIG
#undef UNSUPPORTED
#undef URIS_INDEX
#undef URIS_INDEX_SIG
#undef WARNING
#undef WRITER_SIG
#undef XHTML_URI
#undef XMLNS_PREFIX
#undef XMLNS_STRING
#undef XMLNS_URI
#undef XSLT_PACKAGE
#undef XSLT_URI

using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $ConversionInstruction = ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Constants_FieldInfo_[] = {
	{"ACONST_NULL", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ACONST_NULL)},
	{"ATHROW", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATHROW)},
	{"DCMPG", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DCMPG)},
	{"DCONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DCONST_0)},
	{"ICONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ICONST_0)},
	{"ICONST_1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ICONST_1)},
	{"NOP", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NOP)},
	{"DUP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DUP)},
	{"DUP2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DUP2)},
	{"DUP_X1", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DUP_X1)},
	{"DUP_X2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DUP_X2)},
	{"POP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, POP)},
	{"POP2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, POP2)},
	{"SWAP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SWAP)},
	{"ALOAD_0", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALOAD_0)},
	{"ALOAD_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALOAD_1)},
	{"ALOAD_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALOAD_2)},
	{"ILOAD_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ILOAD_1)},
	{"ILOAD_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ILOAD_2)},
	{"DADD", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DADD)},
	{"IXOR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IXOR)},
	{"AASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, AASTORE)},
	{"IASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IASTORE)},
	{"D2F", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, D2F)},
	{"D2I", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, D2I)},
	{"D2L", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, D2L)},
	{"F2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, F2D)},
	{"I2B", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2B)},
	{"I2C", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2C)},
	{"I2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2D)},
	{"I2F", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2F)},
	{"I2L", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2L)},
	{"I2S", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, I2S)},
	{"L2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, L2D)},
	{"L2I", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, L2I)},
	{"ARETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ARETURN)},
	{"IRETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IRETURN)},
	{"RETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RETURN)},
	{"INTERNAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, INTERNAL)},
	{"UNSUPPORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, UNSUPPORTED)},
	{"FATAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, FATAL)},
	{"ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ERROR)},
	{"WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, WARNING)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, EMPTYSTRING)},
	{"NAMESPACE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_FEATURE)},
	{"TRANSLET_INTF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_INTF)},
	{"TRANSLET_INTF_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_INTF_SIG)},
	{"ATTRIBUTES_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTES_SIG)},
	{"NODE_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_ITERATOR_SIG)},
	{"DOM_INTF_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_INTF_SIG)},
	{"DOM_IMPL_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_IMPL_CLASS)},
	{"SAX_IMPL_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SAX_IMPL_CLASS)},
	{"DOM_IMPL_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_IMPL_SIG)},
	{"SAX_IMPL_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SAX_IMPL_SIG)},
	{"DOM_ADAPTER_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ADAPTER_CLASS)},
	{"DOM_ADAPTER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ADAPTER_SIG)},
	{"MULTI_DOM_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MULTI_DOM_CLASS)},
	{"MULTI_DOM_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MULTI_DOM_SIG)},
	{"STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING)},
	{"ACC_PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_PUBLIC)},
	{"ACC_SUPER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_SUPER)},
	{"ACC_FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_FINAL)},
	{"ACC_PRIVATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_PRIVATE)},
	{"ACC_PROTECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_PROTECTED)},
	{"ACC_STATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ACC_STATIC)},
	{"MODULE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MODULE_SIG)},
	{"CLASS_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CLASS_SIG)},
	{"STRING_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_SIG)},
	{"STRING_BUFFER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_BUFFER_SIG)},
	{"OBJECT_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, OBJECT_SIG)},
	{"DOUBLE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOUBLE_SIG)},
	{"INTEGER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INTEGER_SIG)},
	{"COLLATOR_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, COLLATOR_CLASS)},
	{"COLLATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, COLLATOR_SIG)},
	{"NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE)},
	{"NODE_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_ITERATOR)},
	{"NODE_ITERATOR_BASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_ITERATOR_BASE)},
	{"SORT_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SORT_ITERATOR)},
	{"SORT_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SORT_ITERATOR_SIG)},
	{"NODE_SORT_RECORD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_SORT_RECORD)},
	{"NODE_SORT_FACTORY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_SORT_FACTORY)},
	{"NODE_SORT_RECORD_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_SORT_RECORD_SIG)},
	{"NODE_SORT_FACTORY_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_SORT_FACTORY_SIG)},
	{"LOCALE_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOCALE_CLASS)},
	{"LOCALE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOCALE_SIG)},
	{"STRING_VALUE_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_VALUE_HANDLER)},
	{"STRING_VALUE_HANDLER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_VALUE_HANDLER_SIG)},
	{"OUTPUT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, OUTPUT_HANDLER)},
	{"OUTPUT_HANDLER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, OUTPUT_HANDLER_SIG)},
	{"FILTER_INTERFACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FILTER_INTERFACE)},
	{"FILTER_INTERFACE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FILTER_INTERFACE_SIG)},
	{"UNION_ITERATOR_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, UNION_ITERATOR_CLASS)},
	{"STEP_ITERATOR_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STEP_ITERATOR_CLASS)},
	{"CACHED_NODE_LIST_ITERATOR_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CACHED_NODE_LIST_ITERATOR_CLASS)},
	{"NTH_ITERATOR_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NTH_ITERATOR_CLASS)},
	{"ABSOLUTE_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ABSOLUTE_ITERATOR)},
	{"DUP_FILTERED_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DUP_FILTERED_ITERATOR)},
	{"CURRENT_NODE_LIST_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CURRENT_NODE_LIST_ITERATOR)},
	{"CURRENT_NODE_LIST_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CURRENT_NODE_LIST_FILTER)},
	{"CURRENT_NODE_LIST_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CURRENT_NODE_LIST_ITERATOR_SIG)},
	{"CURRENT_NODE_LIST_FILTER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CURRENT_NODE_LIST_FILTER_SIG)},
	{"FILTER_STEP_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FILTER_STEP_ITERATOR)},
	{"FILTER_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FILTER_ITERATOR)},
	{"SINGLETON_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SINGLETON_ITERATOR)},
	{"MATCHING_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MATCHING_ITERATOR)},
	{"NODE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_SIG)},
	{"GET_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_PARENT)},
	{"GET_PARENT_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_PARENT_SIG)},
	{"NEXT_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NEXT_SIG)},
	{"NEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NEXT)},
	{"NEXTID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NEXTID)},
	{"MAKE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE)},
	{"MAKE_NODE_LIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE_LIST)},
	{"GET_UNPARSED_ENTITY_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_UNPARSED_ENTITY_URI)},
	{"STRING_TO_REAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_TO_REAL)},
	{"STRING_TO_REAL_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_TO_REAL_SIG)},
	{"STRING_TO_INT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_TO_INT)},
	{"STRING_TO_INT_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_TO_INT_SIG)},
	{"XSLT_PACKAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XSLT_PACKAGE)},
	{"COMPILER_PACKAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, COMPILER_PACKAGE)},
	{"RUNTIME_PACKAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RUNTIME_PACKAGE)},
	{"TRANSLET_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_CLASS)},
	{"TRANSLET_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_SIG)},
	{"UNION_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, UNION_ITERATOR_SIG)},
	{"TRANSLET_OUTPUT_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_OUTPUT_SIG)},
	{"MAKE_NODE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE_SIG)},
	{"MAKE_NODE_SIG2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE_SIG2)},
	{"MAKE_NODE_LIST_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE_LIST_SIG)},
	{"MAKE_NODE_LIST_SIG2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MAKE_NODE_LIST_SIG2)},
	{"STREAM_XML_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STREAM_XML_OUTPUT)},
	{"OUTPUT_BASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, OUTPUT_BASE)},
	{"LOAD_DOCUMENT_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOAD_DOCUMENT_CLASS)},
	{"KEY_INDEX_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, KEY_INDEX_CLASS)},
	{"KEY_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, KEY_INDEX_SIG)},
	{"KEY_INDEX_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, KEY_INDEX_ITERATOR_SIG)},
	{"DOM_INTF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_INTF)},
	{"DOM_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_IMPL)},
	{"SAX_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SAX_IMPL)},
	{"CLASS_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CLASS_CLASS)},
	{"MODULE_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MODULE_CLASS)},
	{"STRING_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_CLASS)},
	{"OBJECT_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, OBJECT_CLASS)},
	{"BOOLEAN_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BOOLEAN_CLASS)},
	{"STRING_BUFFER_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_BUFFER_CLASS)},
	{"STRING_WRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_WRITER)},
	{"WRITER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, WRITER_SIG)},
	{"TRANSLET_OUTPUT_BASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_OUTPUT_BASE)},
	{"TRANSLET_OUTPUT_INTERFACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_OUTPUT_INTERFACE)},
	{"BASIS_LIBRARY_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BASIS_LIBRARY_CLASS)},
	{"ATTRIBUTE_LIST_IMPL_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTE_LIST_IMPL_CLASS)},
	{"DOUBLE_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOUBLE_CLASS)},
	{"INTEGER_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INTEGER_CLASS)},
	{"RUNTIME_NODE_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RUNTIME_NODE_CLASS)},
	{"MATH_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MATH_CLASS)},
	{"BOOLEAN_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BOOLEAN_VALUE)},
	{"BOOLEAN_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BOOLEAN_VALUE_SIG)},
	{"INT_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INT_VALUE)},
	{"INT_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INT_VALUE_SIG)},
	{"DOUBLE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOUBLE_VALUE)},
	{"DOUBLE_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOUBLE_VALUE_SIG)},
	{"DOM_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_PNAME)},
	{"NODE_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_PNAME)},
	{"TRANSLET_OUTPUT_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_OUTPUT_PNAME)},
	{"ITERATOR_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ITERATOR_PNAME)},
	{"DOCUMENT_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOCUMENT_PNAME)},
	{"TRANSLET_PNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_PNAME)},
	{"INVOKE_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INVOKE_METHOD)},
	{"GET_NODE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_NAME)},
	{"CHARACTERSW", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHARACTERSW)},
	{"GET_CHILDREN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_CHILDREN)},
	{"GET_TYPED_CHILDREN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_TYPED_CHILDREN)},
	{"CHARACTERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHARACTERS)},
	{"APPLY_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, APPLY_TEMPLATES)},
	{"GET_NODE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_TYPE)},
	{"GET_NODE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_VALUE)},
	{"GET_ELEMENT_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_ELEMENT_VALUE)},
	{"GET_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_ATTRIBUTE_VALUE)},
	{"HAS_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, HAS_ATTRIBUTE)},
	{"ADD_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_ITERATOR)},
	{"SET_START_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SET_START_NODE)},
	{"RESET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RESET)},
	{"GET_MODULE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_MODULE)},
	{"FOR_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FOR_NAME)},
	{"ADD_READS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_READS)},
	{"GET_MODULE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_MODULE_SIG)},
	{"FOR_NAME_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FOR_NAME_SIG)},
	{"ADD_READS_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_READS_SIG)},
	{"ATTR_SET_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTR_SET_SIG)},
	{"GET_NODE_NAME_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_NAME_SIG)},
	{"CHARACTERSW_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHARACTERSW_SIG)},
	{"CHARACTERS_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHARACTERS_SIG)},
	{"GET_CHILDREN_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_CHILDREN_SIG)},
	{"GET_TYPED_CHILDREN_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_TYPED_CHILDREN_SIG)},
	{"GET_NODE_TYPE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_TYPE_SIG)},
	{"GET_NODE_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_VALUE_SIG)},
	{"GET_ELEMENT_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_ELEMENT_VALUE_SIG)},
	{"GET_ATTRIBUTE_VALUE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_ATTRIBUTE_VALUE_SIG)},
	{"HAS_ATTRIBUTE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, HAS_ATTRIBUTE_SIG)},
	{"GET_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_ITERATOR_SIG)},
	{"NAMES_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMES_INDEX)},
	{"NAMES_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMES_INDEX_SIG)},
	{"URIS_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, URIS_INDEX)},
	{"URIS_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, URIS_INDEX_SIG)},
	{"TYPES_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TYPES_INDEX)},
	{"TYPES_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TYPES_INDEX_SIG)},
	{"NAMESPACE_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_INDEX)},
	{"NAMESPACE_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_INDEX_SIG)},
	{"HASIDCALL_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, HASIDCALL_INDEX)},
	{"HASIDCALL_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, HASIDCALL_INDEX_SIG)},
	{"TRANSLET_VERSION_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_VERSION_INDEX)},
	{"TRANSLET_VERSION_INDEX_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_VERSION_INDEX_SIG)},
	{"DOM_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_FIELD)},
	{"STATIC_NAMES_ARRAY_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_NAMES_ARRAY_FIELD)},
	{"STATIC_URIS_ARRAY_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_URIS_ARRAY_FIELD)},
	{"STATIC_TYPES_ARRAY_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_TYPES_ARRAY_FIELD)},
	{"STATIC_NAMESPACE_ARRAY_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_NAMESPACE_ARRAY_FIELD)},
	{"STATIC_CHAR_DATA_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_CHAR_DATA_FIELD)},
	{"STATIC_CHAR_DATA_FIELD_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STATIC_CHAR_DATA_FIELD_SIG)},
	{"FORMAT_SYMBOLS_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FORMAT_SYMBOLS_FIELD)},
	{"ITERATOR_FIELD_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ITERATOR_FIELD_SIG)},
	{"NODE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_FIELD)},
	{"NODE_FIELD_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_FIELD_SIG)},
	{"EMPTYATTR_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, EMPTYATTR_FIELD)},
	{"ATTRIBUTE_LIST_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTE_LIST_FIELD)},
	{"CLEAR_ATTRIBUTES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CLEAR_ATTRIBUTES)},
	{"ADD_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_ATTRIBUTE)},
	{"ATTRIBUTE_LIST_IMPL_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTE_LIST_IMPL_SIG)},
	{"CLEAR_ATTRIBUTES_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CLEAR_ATTRIBUTES_SIG)},
	{"ADD_ATTRIBUTE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_ATTRIBUTE_SIG)},
	{"ADD_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_ITERATOR_SIG)},
	{"ORDER_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ORDER_ITERATOR)},
	{"ORDER_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ORDER_ITERATOR_SIG)},
	{"SET_START_NODE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SET_START_NODE_SIG)},
	{"NODE_COUNTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_COUNTER)},
	{"NODE_COUNTER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NODE_COUNTER_SIG)},
	{"DEFAULT_NODE_COUNTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DEFAULT_NODE_COUNTER)},
	{"DEFAULT_NODE_COUNTER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DEFAULT_NODE_COUNTER_SIG)},
	{"TRANSLET_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_FIELD)},
	{"TRANSLET_FIELD_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_FIELD_SIG)},
	{"RESET_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RESET_SIG)},
	{"GET_PARAMETER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_PARAMETER)},
	{"ADD_PARAMETER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_PARAMETER)},
	{"PUSH_PARAM_FRAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, PUSH_PARAM_FRAME)},
	{"PUSH_PARAM_FRAME_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, PUSH_PARAM_FRAME_SIG)},
	{"POP_PARAM_FRAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, POP_PARAM_FRAME)},
	{"POP_PARAM_FRAME_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, POP_PARAM_FRAME_SIG)},
	{"GET_PARAMETER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_PARAMETER_SIG)},
	{"ADD_PARAMETER_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_PARAMETER_SIG)},
	{"STRIP_SPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRIP_SPACE)},
	{"STRIP_SPACE_INTF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRIP_SPACE_INTF)},
	{"STRIP_SPACE_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRIP_SPACE_SIG)},
	{"STRIP_SPACE_PARAMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRIP_SPACE_PARAMS)},
	{"GET_NODE_VALUE_ITERATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_VALUE_ITERATOR)},
	{"GET_NODE_VALUE_ITERATOR_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_NODE_VALUE_ITERATOR_SIG)},
	{"GET_UNPARSED_ENTITY_URI_SIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GET_UNPARSED_ENTITY_URI_SIG)},
	{"POSITION_INDEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, POSITION_INDEX)},
	{"LAST_INDEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, LAST_INDEX)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_PREFIX)},
	{"XMLNS_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_STRING)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_URI)},
	{"XSLT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XSLT_URI)},
	{"XHTML_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XHTML_URI)},
	{"TRANSLET_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TRANSLET_URI)},
	{"REDIRECT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, REDIRECT_URI)},
	{"FALLBACK_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FALLBACK_CLASS)},
	{"RTF_INITIAL_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, RTF_INITIAL_SIZE)},
	{"PKGS_USED_BY_TRANSLET_CLASSES", "[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, PKGS_USED_BY_TRANSLET_CLASSES)},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants",
	nullptr,
	nullptr,
	_Constants_FieldInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

$Instruction* Constants::ACONST_NULL = nullptr;
$Instruction* Constants::ATHROW = nullptr;
$Instruction* Constants::DCMPG = nullptr;
$Instruction* Constants::DCONST_0 = nullptr;
$Instruction* Constants::ICONST_0 = nullptr;
$Instruction* Constants::ICONST_1 = nullptr;
$Instruction* Constants::NOP = nullptr;
$StackInstruction* Constants::DUP = nullptr;
$StackInstruction* Constants::DUP2 = nullptr;
$StackInstruction* Constants::DUP_X1 = nullptr;
$StackInstruction* Constants::DUP_X2 = nullptr;
$StackInstruction* Constants::POP = nullptr;
$StackInstruction* Constants::POP2 = nullptr;
$StackInstruction* Constants::SWAP = nullptr;
$LocalVariableInstruction* Constants::ALOAD_0 = nullptr;
$LocalVariableInstruction* Constants::ALOAD_1 = nullptr;
$LocalVariableInstruction* Constants::ALOAD_2 = nullptr;
$LocalVariableInstruction* Constants::ILOAD_1 = nullptr;
$LocalVariableInstruction* Constants::ILOAD_2 = nullptr;
$ArithmeticInstruction* Constants::DADD = nullptr;
$ArithmeticInstruction* Constants::IXOR = nullptr;
$ArrayInstruction* Constants::AASTORE = nullptr;
$ArrayInstruction* Constants::IASTORE = nullptr;
$ConversionInstruction* Constants::D2F = nullptr;
$ConversionInstruction* Constants::D2I = nullptr;
$ConversionInstruction* Constants::D2L = nullptr;
$ConversionInstruction* Constants::F2D = nullptr;
$ConversionInstruction* Constants::I2B = nullptr;
$ConversionInstruction* Constants::I2C = nullptr;
$ConversionInstruction* Constants::I2D = nullptr;
$ConversionInstruction* Constants::I2F = nullptr;
$ConversionInstruction* Constants::I2L = nullptr;
$ConversionInstruction* Constants::I2S = nullptr;
$ConversionInstruction* Constants::L2D = nullptr;
$ConversionInstruction* Constants::L2I = nullptr;
$ReturnInstruction* Constants::ARETURN = nullptr;
$ReturnInstruction* Constants::IRETURN = nullptr;
$ReturnInstruction* Constants::RETURN = nullptr;
$String* Constants::EMPTYSTRING = nullptr;
$String* Constants::NAMESPACE_FEATURE = nullptr;
$String* Constants::TRANSLET_INTF = nullptr;
$String* Constants::TRANSLET_INTF_SIG = nullptr;
$String* Constants::ATTRIBUTES_SIG = nullptr;
$String* Constants::NODE_ITERATOR_SIG = nullptr;
$String* Constants::DOM_INTF_SIG = nullptr;
$String* Constants::DOM_IMPL_CLASS = nullptr;
$String* Constants::SAX_IMPL_CLASS = nullptr;
$String* Constants::DOM_IMPL_SIG = nullptr;
$String* Constants::SAX_IMPL_SIG = nullptr;
$String* Constants::DOM_ADAPTER_CLASS = nullptr;
$String* Constants::DOM_ADAPTER_SIG = nullptr;
$String* Constants::MULTI_DOM_CLASS = nullptr;
$String* Constants::MULTI_DOM_SIG = nullptr;
$String* Constants::STRING = nullptr;
$String* Constants::MODULE_SIG = nullptr;
$String* Constants::CLASS_SIG = nullptr;
$String* Constants::STRING_SIG = nullptr;
$String* Constants::STRING_BUFFER_SIG = nullptr;
$String* Constants::OBJECT_SIG = nullptr;
$String* Constants::DOUBLE_SIG = nullptr;
$String* Constants::INTEGER_SIG = nullptr;
$String* Constants::COLLATOR_CLASS = nullptr;
$String* Constants::COLLATOR_SIG = nullptr;
$String* Constants::NODE = nullptr;
$String* Constants::NODE_ITERATOR = nullptr;
$String* Constants::NODE_ITERATOR_BASE = nullptr;
$String* Constants::SORT_ITERATOR = nullptr;
$String* Constants::SORT_ITERATOR_SIG = nullptr;
$String* Constants::NODE_SORT_RECORD = nullptr;
$String* Constants::NODE_SORT_FACTORY = nullptr;
$String* Constants::NODE_SORT_RECORD_SIG = nullptr;
$String* Constants::NODE_SORT_FACTORY_SIG = nullptr;
$String* Constants::LOCALE_CLASS = nullptr;
$String* Constants::LOCALE_SIG = nullptr;
$String* Constants::STRING_VALUE_HANDLER = nullptr;
$String* Constants::STRING_VALUE_HANDLER_SIG = nullptr;
$String* Constants::OUTPUT_HANDLER = nullptr;
$String* Constants::OUTPUT_HANDLER_SIG = nullptr;
$String* Constants::FILTER_INTERFACE = nullptr;
$String* Constants::FILTER_INTERFACE_SIG = nullptr;
$String* Constants::UNION_ITERATOR_CLASS = nullptr;
$String* Constants::STEP_ITERATOR_CLASS = nullptr;
$String* Constants::CACHED_NODE_LIST_ITERATOR_CLASS = nullptr;
$String* Constants::NTH_ITERATOR_CLASS = nullptr;
$String* Constants::ABSOLUTE_ITERATOR = nullptr;
$String* Constants::DUP_FILTERED_ITERATOR = nullptr;
$String* Constants::CURRENT_NODE_LIST_ITERATOR = nullptr;
$String* Constants::CURRENT_NODE_LIST_FILTER = nullptr;
$String* Constants::CURRENT_NODE_LIST_ITERATOR_SIG = nullptr;
$String* Constants::CURRENT_NODE_LIST_FILTER_SIG = nullptr;
$String* Constants::FILTER_STEP_ITERATOR = nullptr;
$String* Constants::FILTER_ITERATOR = nullptr;
$String* Constants::SINGLETON_ITERATOR = nullptr;
$String* Constants::MATCHING_ITERATOR = nullptr;
$String* Constants::NODE_SIG = nullptr;
$String* Constants::GET_PARENT = nullptr;
$String* Constants::GET_PARENT_SIG = nullptr;
$String* Constants::NEXT_SIG = nullptr;
$String* Constants::NEXT = nullptr;
$String* Constants::NEXTID = nullptr;
$String* Constants::MAKE_NODE = nullptr;
$String* Constants::MAKE_NODE_LIST = nullptr;
$String* Constants::GET_UNPARSED_ENTITY_URI = nullptr;
$String* Constants::STRING_TO_REAL = nullptr;
$String* Constants::STRING_TO_REAL_SIG = nullptr;
$String* Constants::STRING_TO_INT = nullptr;
$String* Constants::STRING_TO_INT_SIG = nullptr;
$String* Constants::XSLT_PACKAGE = nullptr;
$String* Constants::COMPILER_PACKAGE = nullptr;
$String* Constants::RUNTIME_PACKAGE = nullptr;
$String* Constants::TRANSLET_CLASS = nullptr;
$String* Constants::TRANSLET_SIG = nullptr;
$String* Constants::UNION_ITERATOR_SIG = nullptr;
$String* Constants::TRANSLET_OUTPUT_SIG = nullptr;
$String* Constants::MAKE_NODE_SIG = nullptr;
$String* Constants::MAKE_NODE_SIG2 = nullptr;
$String* Constants::MAKE_NODE_LIST_SIG = nullptr;
$String* Constants::MAKE_NODE_LIST_SIG2 = nullptr;
$String* Constants::STREAM_XML_OUTPUT = nullptr;
$String* Constants::OUTPUT_BASE = nullptr;
$String* Constants::LOAD_DOCUMENT_CLASS = nullptr;
$String* Constants::KEY_INDEX_CLASS = nullptr;
$String* Constants::KEY_INDEX_SIG = nullptr;
$String* Constants::KEY_INDEX_ITERATOR_SIG = nullptr;
$String* Constants::DOM_INTF = nullptr;
$String* Constants::DOM_IMPL = nullptr;
$String* Constants::SAX_IMPL = nullptr;
$String* Constants::CLASS_CLASS = nullptr;
$String* Constants::MODULE_CLASS = nullptr;
$String* Constants::STRING_CLASS = nullptr;
$String* Constants::OBJECT_CLASS = nullptr;
$String* Constants::BOOLEAN_CLASS = nullptr;
$String* Constants::STRING_BUFFER_CLASS = nullptr;
$String* Constants::STRING_WRITER = nullptr;
$String* Constants::WRITER_SIG = nullptr;
$String* Constants::TRANSLET_OUTPUT_BASE = nullptr;
$String* Constants::TRANSLET_OUTPUT_INTERFACE = nullptr;
$String* Constants::BASIS_LIBRARY_CLASS = nullptr;
$String* Constants::ATTRIBUTE_LIST_IMPL_CLASS = nullptr;
$String* Constants::DOUBLE_CLASS = nullptr;
$String* Constants::INTEGER_CLASS = nullptr;
$String* Constants::RUNTIME_NODE_CLASS = nullptr;
$String* Constants::MATH_CLASS = nullptr;
$String* Constants::BOOLEAN_VALUE = nullptr;
$String* Constants::BOOLEAN_VALUE_SIG = nullptr;
$String* Constants::INT_VALUE = nullptr;
$String* Constants::INT_VALUE_SIG = nullptr;
$String* Constants::DOUBLE_VALUE = nullptr;
$String* Constants::DOUBLE_VALUE_SIG = nullptr;
$String* Constants::DOM_PNAME = nullptr;
$String* Constants::NODE_PNAME = nullptr;
$String* Constants::TRANSLET_OUTPUT_PNAME = nullptr;
$String* Constants::ITERATOR_PNAME = nullptr;
$String* Constants::DOCUMENT_PNAME = nullptr;
$String* Constants::TRANSLET_PNAME = nullptr;
$String* Constants::INVOKE_METHOD = nullptr;
$String* Constants::GET_NODE_NAME = nullptr;
$String* Constants::CHARACTERSW = nullptr;
$String* Constants::GET_CHILDREN = nullptr;
$String* Constants::GET_TYPED_CHILDREN = nullptr;
$String* Constants::CHARACTERS = nullptr;
$String* Constants::APPLY_TEMPLATES = nullptr;
$String* Constants::GET_NODE_TYPE = nullptr;
$String* Constants::GET_NODE_VALUE = nullptr;
$String* Constants::GET_ELEMENT_VALUE = nullptr;
$String* Constants::GET_ATTRIBUTE_VALUE = nullptr;
$String* Constants::HAS_ATTRIBUTE = nullptr;
$String* Constants::ADD_ITERATOR = nullptr;
$String* Constants::SET_START_NODE = nullptr;
$String* Constants::RESET = nullptr;
$String* Constants::GET_MODULE = nullptr;
$String* Constants::FOR_NAME = nullptr;
$String* Constants::ADD_READS = nullptr;
$String* Constants::GET_MODULE_SIG = nullptr;
$String* Constants::FOR_NAME_SIG = nullptr;
$String* Constants::ADD_READS_SIG = nullptr;
$String* Constants::ATTR_SET_SIG = nullptr;
$String* Constants::GET_NODE_NAME_SIG = nullptr;
$String* Constants::CHARACTERSW_SIG = nullptr;
$String* Constants::CHARACTERS_SIG = nullptr;
$String* Constants::GET_CHILDREN_SIG = nullptr;
$String* Constants::GET_TYPED_CHILDREN_SIG = nullptr;
$String* Constants::GET_NODE_TYPE_SIG = nullptr;
$String* Constants::GET_NODE_VALUE_SIG = nullptr;
$String* Constants::GET_ELEMENT_VALUE_SIG = nullptr;
$String* Constants::GET_ATTRIBUTE_VALUE_SIG = nullptr;
$String* Constants::HAS_ATTRIBUTE_SIG = nullptr;
$String* Constants::GET_ITERATOR_SIG = nullptr;
$String* Constants::NAMES_INDEX = nullptr;
$String* Constants::NAMES_INDEX_SIG = nullptr;
$String* Constants::URIS_INDEX = nullptr;
$String* Constants::URIS_INDEX_SIG = nullptr;
$String* Constants::TYPES_INDEX = nullptr;
$String* Constants::TYPES_INDEX_SIG = nullptr;
$String* Constants::NAMESPACE_INDEX = nullptr;
$String* Constants::NAMESPACE_INDEX_SIG = nullptr;
$String* Constants::HASIDCALL_INDEX = nullptr;
$String* Constants::HASIDCALL_INDEX_SIG = nullptr;
$String* Constants::TRANSLET_VERSION_INDEX = nullptr;
$String* Constants::TRANSLET_VERSION_INDEX_SIG = nullptr;
$String* Constants::DOM_FIELD = nullptr;
$String* Constants::STATIC_NAMES_ARRAY_FIELD = nullptr;
$String* Constants::STATIC_URIS_ARRAY_FIELD = nullptr;
$String* Constants::STATIC_TYPES_ARRAY_FIELD = nullptr;
$String* Constants::STATIC_NAMESPACE_ARRAY_FIELD = nullptr;
$String* Constants::STATIC_CHAR_DATA_FIELD = nullptr;
$String* Constants::STATIC_CHAR_DATA_FIELD_SIG = nullptr;
$String* Constants::FORMAT_SYMBOLS_FIELD = nullptr;
$String* Constants::ITERATOR_FIELD_SIG = nullptr;
$String* Constants::NODE_FIELD = nullptr;
$String* Constants::NODE_FIELD_SIG = nullptr;
$String* Constants::EMPTYATTR_FIELD = nullptr;
$String* Constants::ATTRIBUTE_LIST_FIELD = nullptr;
$String* Constants::CLEAR_ATTRIBUTES = nullptr;
$String* Constants::ADD_ATTRIBUTE = nullptr;
$String* Constants::ATTRIBUTE_LIST_IMPL_SIG = nullptr;
$String* Constants::CLEAR_ATTRIBUTES_SIG = nullptr;
$String* Constants::ADD_ATTRIBUTE_SIG = nullptr;
$String* Constants::ADD_ITERATOR_SIG = nullptr;
$String* Constants::ORDER_ITERATOR = nullptr;
$String* Constants::ORDER_ITERATOR_SIG = nullptr;
$String* Constants::SET_START_NODE_SIG = nullptr;
$String* Constants::NODE_COUNTER = nullptr;
$String* Constants::NODE_COUNTER_SIG = nullptr;
$String* Constants::DEFAULT_NODE_COUNTER = nullptr;
$String* Constants::DEFAULT_NODE_COUNTER_SIG = nullptr;
$String* Constants::TRANSLET_FIELD = nullptr;
$String* Constants::TRANSLET_FIELD_SIG = nullptr;
$String* Constants::RESET_SIG = nullptr;
$String* Constants::GET_PARAMETER = nullptr;
$String* Constants::ADD_PARAMETER = nullptr;
$String* Constants::PUSH_PARAM_FRAME = nullptr;
$String* Constants::PUSH_PARAM_FRAME_SIG = nullptr;
$String* Constants::POP_PARAM_FRAME = nullptr;
$String* Constants::POP_PARAM_FRAME_SIG = nullptr;
$String* Constants::GET_PARAMETER_SIG = nullptr;
$String* Constants::ADD_PARAMETER_SIG = nullptr;
$String* Constants::STRIP_SPACE = nullptr;
$String* Constants::STRIP_SPACE_INTF = nullptr;
$String* Constants::STRIP_SPACE_SIG = nullptr;
$String* Constants::STRIP_SPACE_PARAMS = nullptr;
$String* Constants::GET_NODE_VALUE_ITERATOR = nullptr;
$String* Constants::GET_NODE_VALUE_ITERATOR_SIG = nullptr;
$String* Constants::GET_UNPARSED_ENTITY_URI_SIG = nullptr;
$String* Constants::XMLNS_PREFIX = nullptr;
$String* Constants::XMLNS_STRING = nullptr;
$String* Constants::XMLNS_URI = nullptr;
$String* Constants::XSLT_URI = nullptr;
$String* Constants::XHTML_URI = nullptr;
$String* Constants::TRANSLET_URI = nullptr;
$String* Constants::REDIRECT_URI = nullptr;
$String* Constants::FALLBACK_CLASS = nullptr;
$StringArray* Constants::PKGS_USED_BY_TRANSLET_CLASSES = nullptr;

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::EMPTYSTRING, ""_s);
	$assignStatic(Constants::NAMESPACE_FEATURE, "http://xml.org/sax/features/namespaces"_s);
	$assignStatic(Constants::TRANSLET_INTF, "com.sun.org.apache.xalan.internal.xsltc.Translet"_s);
	$assignStatic(Constants::TRANSLET_INTF_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/Translet;"_s);
	$assignStatic(Constants::ATTRIBUTES_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/Attributes;"_s);
	$assignStatic(Constants::NODE_ITERATOR_SIG, "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;"_s);
	$assignStatic(Constants::DOM_INTF_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;"_s);
	$assignStatic(Constants::DOM_IMPL_CLASS, "com/sun/org/apache/xalan/internal/xsltc/DOM"_s);
	$assignStatic(Constants::SAX_IMPL_CLASS, "com/sun/org/apache/xalan/internal/xsltc/DOM/SAXImpl"_s);
	$assignStatic(Constants::DOM_IMPL_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;"_s);
	$assignStatic(Constants::SAX_IMPL_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;"_s);
	$assignStatic(Constants::DOM_ADAPTER_CLASS, "com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter"_s);
	$assignStatic(Constants::DOM_ADAPTER_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;"_s);
	$assignStatic(Constants::MULTI_DOM_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM"_s);
	$assignStatic(Constants::MULTI_DOM_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM;"_s);
	$assignStatic(Constants::STRING, "java.lang.String"_s);
	$assignStatic(Constants::MODULE_SIG, "Ljava/lang/Module;"_s);
	$assignStatic(Constants::CLASS_SIG, "Ljava/lang/Class;"_s);
	$assignStatic(Constants::STRING_SIG, "Ljava/lang/String;"_s);
	$assignStatic(Constants::STRING_BUFFER_SIG, "Ljava/lang/StringBuffer;"_s);
	$assignStatic(Constants::OBJECT_SIG, "Ljava/lang/Object;"_s);
	$assignStatic(Constants::DOUBLE_SIG, "Ljava/lang/Double;"_s);
	$assignStatic(Constants::INTEGER_SIG, "Ljava/lang/Integer;"_s);
	$assignStatic(Constants::COLLATOR_CLASS, "java/text/Collator"_s);
	$assignStatic(Constants::COLLATOR_SIG, "Ljava/text/Collator;"_s);
	$assignStatic(Constants::NODE, "int"_s);
	$assignStatic(Constants::NODE_ITERATOR, "com.sun.org.apache.xml.internal.dtm.DTMAxisIterator"_s);
	$assignStatic(Constants::NODE_ITERATOR_BASE, "com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase"_s);
	$assignStatic(Constants::SORT_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.SortingIterator"_s);
	$assignStatic(Constants::SORT_ITERATOR_SIG, "Lcom.sun.org.apache.xalan.internal.xsltc.dom.SortingIterator;"_s);
	$assignStatic(Constants::NODE_SORT_RECORD, "com.sun.org.apache.xalan.internal.xsltc.dom.NodeSortRecord"_s);
	$assignStatic(Constants::NODE_SORT_FACTORY, "com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory"_s);
	$assignStatic(Constants::NODE_SORT_RECORD_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;"_s);
	$assignStatic(Constants::NODE_SORT_FACTORY_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory;"_s);
	$assignStatic(Constants::LOCALE_CLASS, "java.util.Locale"_s);
	$assignStatic(Constants::LOCALE_SIG, "Ljava/util/Locale;"_s);
	$assignStatic(Constants::STRING_VALUE_HANDLER, "com.sun.org.apache.xalan.internal.xsltc.runtime.StringValueHandler"_s);
	$assignStatic(Constants::STRING_VALUE_HANDLER_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/StringValueHandler;"_s);
	$assignStatic(Constants::OUTPUT_HANDLER, "com/sun/org/apache/xml/internal/serializer/SerializationHandler"_s);
	$assignStatic(Constants::OUTPUT_HANDLER_SIG, "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;"_s);
	$assignStatic(Constants::FILTER_INTERFACE, "com.sun.org.apache.xalan.internal.xsltc.dom.Filter"_s);
	$assignStatic(Constants::FILTER_INTERFACE_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/Filter;"_s);
	$assignStatic(Constants::UNION_ITERATOR_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.UnionIterator"_s);
	$assignStatic(Constants::STEP_ITERATOR_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.StepIterator"_s);
	$assignStatic(Constants::CACHED_NODE_LIST_ITERATOR_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.CachedNodeListIterator"_s);
	$assignStatic(Constants::NTH_ITERATOR_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.NthIterator"_s);
	$assignStatic(Constants::ABSOLUTE_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.AbsoluteIterator"_s);
	$assignStatic(Constants::DUP_FILTERED_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.DupFilterIterator"_s);
	$assignStatic(Constants::CURRENT_NODE_LIST_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListIterator"_s);
	$assignStatic(Constants::CURRENT_NODE_LIST_FILTER, "com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListFilter"_s);
	$assignStatic(Constants::CURRENT_NODE_LIST_ITERATOR_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListIterator;"_s);
	$assignStatic(Constants::CURRENT_NODE_LIST_FILTER_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter;"_s);
	$assignStatic(Constants::FILTER_STEP_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.FilteredStepIterator"_s);
	$assignStatic(Constants::FILTER_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.FilterIterator"_s);
	$assignStatic(Constants::SINGLETON_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.SingletonIterator"_s);
	$assignStatic(Constants::MATCHING_ITERATOR, "com.sun.org.apache.xalan.internal.xsltc.dom.MatchingIterator"_s);
	$assignStatic(Constants::NODE_SIG, "I"_s);
	$assignStatic(Constants::GET_PARENT, "getParent"_s);
	$assignStatic(Constants::GET_PARENT_SIG, $str({"("_s, Constants::NODE_SIG, ")"_s, Constants::NODE_SIG}));
	$assignStatic(Constants::NEXT_SIG, $str({"()"_s, Constants::NODE_SIG}));
	$assignStatic(Constants::NEXT, "next"_s);
	$assignStatic(Constants::NEXTID, "nextNodeID"_s);
	$assignStatic(Constants::MAKE_NODE, "makeNode"_s);
	$assignStatic(Constants::MAKE_NODE_LIST, "makeNodeList"_s);
	$assignStatic(Constants::GET_UNPARSED_ENTITY_URI, "getUnparsedEntityURI"_s);
	$assignStatic(Constants::STRING_TO_REAL, "stringToReal"_s);
	$assignStatic(Constants::STRING_TO_REAL_SIG, $str({"("_s, Constants::STRING_SIG, ")D"_s}));
	$assignStatic(Constants::STRING_TO_INT, "stringToInt"_s);
	$assignStatic(Constants::STRING_TO_INT_SIG, $str({"("_s, Constants::STRING_SIG, ")I"_s}));
	$assignStatic(Constants::XSLT_PACKAGE, "com.sun.org.apache.xalan.internal.xsltc"_s);
	$assignStatic(Constants::COMPILER_PACKAGE, $str({Constants::XSLT_PACKAGE, ".compiler"_s}));
	$assignStatic(Constants::RUNTIME_PACKAGE, $str({Constants::XSLT_PACKAGE, ".runtime"_s}));
	$assignStatic(Constants::TRANSLET_CLASS, $str({Constants::RUNTIME_PACKAGE, ".AbstractTranslet"_s}));
	$assignStatic(Constants::TRANSLET_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;"_s);
	$assignStatic(Constants::UNION_ITERATOR_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator;"_s);
	$assignStatic(Constants::TRANSLET_OUTPUT_SIG, "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;"_s);
	$assignStatic(Constants::MAKE_NODE_SIG, "(I)Lorg/w3c/dom/Node;"_s);
	$assignStatic(Constants::MAKE_NODE_SIG2, $str({"("_s, Constants::NODE_ITERATOR_SIG, ")Lorg/w3c/dom/Node;"_s}));
	$assignStatic(Constants::MAKE_NODE_LIST_SIG, "(I)Lorg/w3c/dom/NodeList;"_s);
	$assignStatic(Constants::MAKE_NODE_LIST_SIG2, $str({"("_s, Constants::NODE_ITERATOR_SIG, ")Lorg/w3c/dom/NodeList;"_s}));
	$assignStatic(Constants::STREAM_XML_OUTPUT, "com.sun.org.apache.xml.internal.serializer.ToXMLStream"_s);
	$assignStatic(Constants::OUTPUT_BASE, "com.sun.org.apache.xml.internal.serializer.SerializerBase"_s);
	$assignStatic(Constants::LOAD_DOCUMENT_CLASS, "com.sun.org.apache.xalan.internal.xsltc.dom.LoadDocument"_s);
	$assignStatic(Constants::KEY_INDEX_CLASS, "com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex"_s);
	$assignStatic(Constants::KEY_INDEX_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex;"_s);
	$assignStatic(Constants::KEY_INDEX_ITERATOR_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator;"_s);
	$assignStatic(Constants::DOM_INTF, "com.sun.org.apache.xalan.internal.xsltc.DOM"_s);
	$assignStatic(Constants::DOM_IMPL, "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"_s);
	$assignStatic(Constants::SAX_IMPL, "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"_s);
	$assignStatic(Constants::CLASS_CLASS, "java.lang.Class"_s);
	$assignStatic(Constants::MODULE_CLASS, "java.lang.Module"_s);
	$assignStatic(Constants::STRING_CLASS, "java.lang.String"_s);
	$assignStatic(Constants::OBJECT_CLASS, "java.lang.Object"_s);
	$assignStatic(Constants::BOOLEAN_CLASS, "java.lang.Boolean"_s);
	$assignStatic(Constants::STRING_BUFFER_CLASS, "java.lang.StringBuffer"_s);
	$assignStatic(Constants::STRING_WRITER, "java.io.StringWriter"_s);
	$assignStatic(Constants::WRITER_SIG, "Ljava/io/Writer;"_s);
	$assignStatic(Constants::TRANSLET_OUTPUT_BASE, "com.sun.org.apache.xalan.internal.xsltc.TransletOutputBase"_s);
	$assignStatic(Constants::TRANSLET_OUTPUT_INTERFACE, "com.sun.org.apache.xml.internal.serializer.SerializationHandler"_s);
	$assignStatic(Constants::BASIS_LIBRARY_CLASS, "com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"_s);
	$assignStatic(Constants::ATTRIBUTE_LIST_IMPL_CLASS, "com.sun.org.apache.xalan.internal.xsltc.runtime.AttributeListImpl"_s);
	$assignStatic(Constants::DOUBLE_CLASS, "java.lang.Double"_s);
	$assignStatic(Constants::INTEGER_CLASS, "java.lang.Integer"_s);
	$assignStatic(Constants::RUNTIME_NODE_CLASS, "com.sun.org.apache.xalan.internal.xsltc.runtime.Node"_s);
	$assignStatic(Constants::MATH_CLASS, "java.lang.Math"_s);
	$assignStatic(Constants::BOOLEAN_VALUE, "booleanValue"_s);
	$assignStatic(Constants::BOOLEAN_VALUE_SIG, "()Z"_s);
	$assignStatic(Constants::INT_VALUE, "intValue"_s);
	$assignStatic(Constants::INT_VALUE_SIG, "()I"_s);
	$assignStatic(Constants::DOUBLE_VALUE, "doubleValue"_s);
	$assignStatic(Constants::DOUBLE_VALUE_SIG, "()D"_s);
	$assignStatic(Constants::DOM_PNAME, "dom"_s);
	$assignStatic(Constants::NODE_PNAME, "node"_s);
	$assignStatic(Constants::TRANSLET_OUTPUT_PNAME, "handler"_s);
	$assignStatic(Constants::ITERATOR_PNAME, "iterator"_s);
	$assignStatic(Constants::DOCUMENT_PNAME, "document"_s);
	$assignStatic(Constants::TRANSLET_PNAME, "translet"_s);
	$assignStatic(Constants::INVOKE_METHOD, "invokeMethod"_s);
	$assignStatic(Constants::GET_NODE_NAME, "getNodeNameX"_s);
	$assignStatic(Constants::CHARACTERSW, "characters"_s);
	$assignStatic(Constants::GET_CHILDREN, "getChildren"_s);
	$assignStatic(Constants::GET_TYPED_CHILDREN, "getTypedChildren"_s);
	$assignStatic(Constants::CHARACTERS, "characters"_s);
	$assignStatic(Constants::APPLY_TEMPLATES, "applyTemplates"_s);
	$assignStatic(Constants::GET_NODE_TYPE, "getNodeType"_s);
	$assignStatic(Constants::GET_NODE_VALUE, "getStringValueX"_s);
	$assignStatic(Constants::GET_ELEMENT_VALUE, "getElementValue"_s);
	$assignStatic(Constants::GET_ATTRIBUTE_VALUE, "getAttributeValue"_s);
	$assignStatic(Constants::HAS_ATTRIBUTE, "hasAttribute"_s);
	$assignStatic(Constants::ADD_ITERATOR, "addIterator"_s);
	$assignStatic(Constants::SET_START_NODE, "setStartNode"_s);
	$assignStatic(Constants::RESET, "reset"_s);
	$assignStatic(Constants::GET_MODULE, "getModule"_s);
	$assignStatic(Constants::FOR_NAME, "forName"_s);
	$assignStatic(Constants::ADD_READS, "addReads"_s);
	$assignStatic(Constants::GET_MODULE_SIG, $str({"()"_s, Constants::MODULE_SIG}));
	$assignStatic(Constants::FOR_NAME_SIG, $str({"("_s, Constants::STRING_SIG, ")"_s, Constants::CLASS_SIG}));
	$assignStatic(Constants::ADD_READS_SIG, $str({"("_s, Constants::MODULE_SIG, ")"_s, Constants::MODULE_SIG}));
	$assignStatic(Constants::ATTR_SET_SIG, $str({"("_s, Constants::DOM_INTF_SIG, Constants::NODE_ITERATOR_SIG, Constants::TRANSLET_OUTPUT_SIG, "I)V"_s}));
	$assignStatic(Constants::GET_NODE_NAME_SIG, $str({"("_s, Constants::NODE_SIG, ")"_s, Constants::STRING_SIG}));
	$assignStatic(Constants::CHARACTERSW_SIG, $str({"("_s, Constants::STRING_SIG, Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	$assignStatic(Constants::CHARACTERS_SIG, $str({"("_s, Constants::NODE_SIG, Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	$assignStatic(Constants::GET_CHILDREN_SIG, $str({"("_s, Constants::NODE_SIG, ")"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::GET_TYPED_CHILDREN_SIG, $str({"(I)"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::GET_NODE_TYPE_SIG, "()S"_s);
	$assignStatic(Constants::GET_NODE_VALUE_SIG, $str({"(I)"_s, Constants::STRING_SIG}));
	$assignStatic(Constants::GET_ELEMENT_VALUE_SIG, $str({"(I)"_s, Constants::STRING_SIG}));
	$assignStatic(Constants::GET_ATTRIBUTE_VALUE_SIG, $str({"(II)"_s, Constants::STRING_SIG}));
	$assignStatic(Constants::HAS_ATTRIBUTE_SIG, "(II)Z"_s);
	$assignStatic(Constants::GET_ITERATOR_SIG, $str({"()"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::NAMES_INDEX, "namesArray"_s);
	$assignStatic(Constants::NAMES_INDEX_SIG, $str({"["_s, Constants::STRING_SIG}));
	$assignStatic(Constants::URIS_INDEX, "urisArray"_s);
	$assignStatic(Constants::URIS_INDEX_SIG, $str({"["_s, Constants::STRING_SIG}));
	$assignStatic(Constants::TYPES_INDEX, "typesArray"_s);
	$assignStatic(Constants::TYPES_INDEX_SIG, "[I"_s);
	$assignStatic(Constants::NAMESPACE_INDEX, "namespaceArray"_s);
	$assignStatic(Constants::NAMESPACE_INDEX_SIG, $str({"["_s, Constants::STRING_SIG}));
	$assignStatic(Constants::HASIDCALL_INDEX, "_hasIdCall"_s);
	$assignStatic(Constants::HASIDCALL_INDEX_SIG, "Z"_s);
	$assignStatic(Constants::TRANSLET_VERSION_INDEX, "transletVersion"_s);
	$assignStatic(Constants::TRANSLET_VERSION_INDEX_SIG, "I"_s);
	$assignStatic(Constants::DOM_FIELD, "_dom"_s);
	$assignStatic(Constants::STATIC_NAMES_ARRAY_FIELD, "_sNamesArray"_s);
	$assignStatic(Constants::STATIC_URIS_ARRAY_FIELD, "_sUrisArray"_s);
	$assignStatic(Constants::STATIC_TYPES_ARRAY_FIELD, "_sTypesArray"_s);
	$assignStatic(Constants::STATIC_NAMESPACE_ARRAY_FIELD, "_sNamespaceArray"_s);
	$assignStatic(Constants::STATIC_CHAR_DATA_FIELD, "_scharData"_s);
	$assignStatic(Constants::STATIC_CHAR_DATA_FIELD_SIG, "[C"_s);
	$assignStatic(Constants::FORMAT_SYMBOLS_FIELD, "format_symbols"_s);
	$assignStatic(Constants::ITERATOR_FIELD_SIG, Constants::NODE_ITERATOR_SIG);
	$assignStatic(Constants::NODE_FIELD, "node"_s);
	$assignStatic(Constants::NODE_FIELD_SIG, "I"_s);
	$assignStatic(Constants::EMPTYATTR_FIELD, "EmptyAttributes"_s);
	$assignStatic(Constants::ATTRIBUTE_LIST_FIELD, "attributeList"_s);
	$assignStatic(Constants::CLEAR_ATTRIBUTES, "clear"_s);
	$assignStatic(Constants::ADD_ATTRIBUTE, "addAttribute"_s);
	$assignStatic(Constants::ATTRIBUTE_LIST_IMPL_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AttributeListImpl;"_s);
	$assignStatic(Constants::CLEAR_ATTRIBUTES_SIG, $str({"()"_s, Constants::ATTRIBUTE_LIST_IMPL_SIG}));
	$assignStatic(Constants::ADD_ATTRIBUTE_SIG, $str({"("_s, Constants::STRING_SIG, Constants::STRING_SIG, ")"_s, Constants::ATTRIBUTE_LIST_IMPL_SIG}));
	$assignStatic(Constants::ADD_ITERATOR_SIG, $str({"("_s, Constants::NODE_ITERATOR_SIG, ")"_s, Constants::UNION_ITERATOR_SIG}));
	$assignStatic(Constants::ORDER_ITERATOR, "orderNodes"_s);
	$assignStatic(Constants::ORDER_ITERATOR_SIG, $str({"("_s, Constants::NODE_ITERATOR_SIG, "I)"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::SET_START_NODE_SIG, $str({"("_s, Constants::NODE_SIG, ")"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::NODE_COUNTER, "com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter"_s);
	$assignStatic(Constants::NODE_COUNTER_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;"_s);
	$assignStatic(Constants::DEFAULT_NODE_COUNTER, "com.sun.org.apache.xalan.internal.xsltc.dom.DefaultNodeCounter"_s);
	$assignStatic(Constants::DEFAULT_NODE_COUNTER_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/dom/DefaultNodeCounter;"_s);
	$assignStatic(Constants::TRANSLET_FIELD, "translet"_s);
	$assignStatic(Constants::TRANSLET_FIELD_SIG, Constants::TRANSLET_SIG);
	$assignStatic(Constants::RESET_SIG, $str({"()"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::GET_PARAMETER, "getParameter"_s);
	$assignStatic(Constants::ADD_PARAMETER, "addParameter"_s);
	$assignStatic(Constants::PUSH_PARAM_FRAME, "pushParamFrame"_s);
	$assignStatic(Constants::PUSH_PARAM_FRAME_SIG, "()V"_s);
	$assignStatic(Constants::POP_PARAM_FRAME, "popParamFrame"_s);
	$assignStatic(Constants::POP_PARAM_FRAME_SIG, "()V"_s);
	$assignStatic(Constants::GET_PARAMETER_SIG, $str({"("_s, Constants::STRING_SIG, ")"_s, Constants::OBJECT_SIG}));
	$assignStatic(Constants::ADD_PARAMETER_SIG, $str({"("_s, Constants::STRING_SIG, Constants::OBJECT_SIG, "Z)"_s, Constants::OBJECT_SIG}));
	$assignStatic(Constants::STRIP_SPACE, "stripSpace"_s);
	$assignStatic(Constants::STRIP_SPACE_INTF, "com/sun/org/apache/xalan/internal/xsltc/StripFilter"_s);
	$assignStatic(Constants::STRIP_SPACE_SIG, "Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;"_s);
	$assignStatic(Constants::STRIP_SPACE_PARAMS, "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;II)Z"_s);
	$assignStatic(Constants::GET_NODE_VALUE_ITERATOR, "getNodeValueIterator"_s);
	$assignStatic(Constants::GET_NODE_VALUE_ITERATOR_SIG, $str({"("_s, Constants::NODE_ITERATOR_SIG, "I"_s, Constants::STRING_SIG, "Z)"_s, Constants::NODE_ITERATOR_SIG}));
	$assignStatic(Constants::GET_UNPARSED_ENTITY_URI_SIG, $str({"("_s, Constants::STRING_SIG, ")"_s, Constants::STRING_SIG}));
	$assignStatic(Constants::XMLNS_PREFIX, "xmlns"_s);
	$assignStatic(Constants::XMLNS_STRING, "xmlns:"_s);
	$assignStatic(Constants::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(Constants::XSLT_URI, "http://www.w3.org/1999/XSL/Transform"_s);
	$assignStatic(Constants::XHTML_URI, "http://www.w3.org/1999/xhtml"_s);
	$assignStatic(Constants::TRANSLET_URI, "http://xml.apache.org/xalan/xsltc"_s);
	$assignStatic(Constants::REDIRECT_URI, "http://xml.apache.org/xalan/redirect"_s);
	$assignStatic(Constants::FALLBACK_CLASS, "com.sun.org.apache.xalan.internal.xsltc.compiler.Fallback"_s);
	$init($InstructionConst);
	$assignStatic(Constants::ACONST_NULL, $InstructionConst::ACONST_NULL);
	$assignStatic(Constants::ATHROW, $InstructionConst::ATHROW);
	$assignStatic(Constants::DCMPG, $InstructionConst::DCMPG);
	$assignStatic(Constants::DCONST_0, $InstructionConst::DCONST_0);
	$assignStatic(Constants::ICONST_0, $InstructionConst::ICONST_0);
	$assignStatic(Constants::ICONST_1, $InstructionConst::ICONST_1);
	$assignStatic(Constants::NOP, $InstructionConst::NOP);
	$assignStatic(Constants::DUP, $InstructionConst::DUP);
	$assignStatic(Constants::DUP2, $InstructionConst::DUP2);
	$assignStatic(Constants::DUP_X1, $InstructionConst::DUP_X1);
	$assignStatic(Constants::DUP_X2, $InstructionConst::DUP_X2);
	$assignStatic(Constants::POP, $InstructionConst::POP);
	$assignStatic(Constants::POP2, $InstructionConst::POP2);
	$assignStatic(Constants::SWAP, $InstructionConst::SWAP);
	$assignStatic(Constants::ALOAD_0, $InstructionConst::ALOAD_0);
	$assignStatic(Constants::ALOAD_1, $InstructionConst::ALOAD_1);
	$assignStatic(Constants::ALOAD_2, $InstructionConst::ALOAD_2);
	$assignStatic(Constants::ILOAD_1, $InstructionConst::ILOAD_1);
	$assignStatic(Constants::ILOAD_2, $InstructionConst::ILOAD_2);
	$assignStatic(Constants::DADD, $InstructionConst::DADD);
	$assignStatic(Constants::IXOR, $InstructionConst::IXOR);
	$assignStatic(Constants::AASTORE, $InstructionConst::AASTORE);
	$assignStatic(Constants::IASTORE, $InstructionConst::IASTORE);
	$assignStatic(Constants::D2F, $InstructionConst::D2F);
	$assignStatic(Constants::D2I, $InstructionConst::D2I);
	$assignStatic(Constants::D2L, $InstructionConst::D2L);
	$assignStatic(Constants::F2D, $InstructionConst::F2D);
	$assignStatic(Constants::I2B, $InstructionConst::I2B);
	$assignStatic(Constants::I2C, $InstructionConst::I2C);
	$assignStatic(Constants::I2D, $InstructionConst::I2D);
	$assignStatic(Constants::I2F, $InstructionConst::I2F);
	$assignStatic(Constants::I2L, $InstructionConst::I2L);
	$assignStatic(Constants::I2S, $InstructionConst::I2S);
	$assignStatic(Constants::L2D, $InstructionConst::L2D);
	$assignStatic(Constants::L2I, $InstructionConst::L2I);
	$assignStatic(Constants::ARETURN, $InstructionConst::ARETURN);
	$assignStatic(Constants::IRETURN, $InstructionConst::IRETURN);
	$assignStatic(Constants::RETURN, $InstructionConst::RETURN);
	$assignStatic(Constants::PKGS_USED_BY_TRANSLET_CLASSES, $new($StringArray, {
		"com.sun.org.apache.xalan.internal.lib"_s,
		"com.sun.org.apache.xalan.internal.xsltc"_s,
		"com.sun.org.apache.xalan.internal.xsltc.runtime"_s,
		"com.sun.org.apache.xalan.internal.xsltc.dom"_s,
		"com.sun.org.apache.xml.internal.serializer"_s,
		"com.sun.org.apache.xml.internal.dtm"_s,
		"com.sun.org.apache.xml.internal.dtm.ref"_s
	}));
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com