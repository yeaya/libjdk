#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsolutePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ApplyTemplates.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CallTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Choose.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/If.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Number.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Otherwise.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ValueOf.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/When.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ADAPTIVE_RTF
#undef ALOAD_0
#undef DOM_ADAPTER_CLASS
#undef DOM_ADAPTER_SIG
#undef DOM_CLASS
#undef DOM_IMPL_CLASS
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef EMPTYSTRING
#undef ERROR
#undef INT
#undef MIN_VALUE
#undef MULTI_DOM_CLASS
#undef NAMESPACE_INDEX
#undef NAMESPACE_INDEX_SIG
#undef NAMES_INDEX
#undef NAMES_INDEX_SIG
#undef POP
#undef RTF_INITIAL_SIZE
#undef SIMPLE_RTF
#undef STRING
#undef STRING_SIG
#undef SWAP
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_SIG
#undef TREE_RTF
#undef TYPES_INDEX
#undef TYPES_INDEX_SIG
#undef URIS_INDEX
#undef URIS_INDEX_SIG
#undef WARNING

using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DUP_X1 = ::com::sun::org::apache::bcel::internal::generic::DUP_X1;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $AbsolutePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AbsolutePathPattern;
using $ApplyTemplates = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ApplyTemplates;
using $CallTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CallTemplate;
using $Choose = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Choose;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $If = ::com::sun::org::apache::xalan::internal::xsltc::compiler::If;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $Number = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Number;
using $Otherwise = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Otherwise;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $ValueOf = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ValueOf;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $When = ::com::sun::org::apache::xalan::internal::xsltc::compiler::When;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Attributes = ::org::xml::sax::Attributes;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0 : public $Predicate {
	$class(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(SyntaxTreeNode* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* item) override {
		 return $nc(inst$)->lambda$isSimpleRTF$0($cast(SyntaxTreeNode, item));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0>());
	}
	SyntaxTreeNode* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, inst$)},
	{}
};
$MethodInfo SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, init$, void, SyntaxTreeNode*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, test, bool, Object$*)},
	{}
};
$ClassInfo SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::load$($String* name, bool initialize) {
	$loadClass(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::class$ = nullptr;

$FieldInfo _SyntaxTreeNode_FieldInfo_[] = {
	{"_parser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PRIVATE, $field(SyntaxTreeNode, _parser)},
	{"_parent", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PROTECTED, $field(SyntaxTreeNode, _parent)},
	{"_stylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(SyntaxTreeNode, _stylesheet)},
	{"_template", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PRIVATE, $field(SyntaxTreeNode, _template)},
	{"_contents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PRIVATE | $FINAL, $field(SyntaxTreeNode, _contents)},
	{"_qname", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PROTECTED, $field(SyntaxTreeNode, _qname)},
	{"_line", "I", nullptr, $PRIVATE, $field(SyntaxTreeNode, _line)},
	{"_attributes", "Lorg/xml/sax/helpers/AttributesImpl;", nullptr, $PROTECTED, $field(SyntaxTreeNode, _attributes)},
	{"_prefixMapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SyntaxTreeNode, _prefixMapping)},
	{"Dummy", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SyntaxTreeNode, Dummy)},
	{"IndentIncrement", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SyntaxTreeNode, IndentIncrement)},
	{"_spaces", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SyntaxTreeNode, _spaces)},
	{}
};

$MethodInfo _SyntaxTreeNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SyntaxTreeNode, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SyntaxTreeNode, init$, void, int32_t)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SyntaxTreeNode, init$, void, $String*, $String*, $String*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, addAttribute, void, $String*, $String*)},
	{"addElement", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, addElement, void, SyntaxTreeNode*)},
	{"addPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, addPrefixMapping, void, $String*, $String*)},
	{"compileResultTree", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, compileResultTree, void, $ClassGenerator*, $MethodGenerator*)},
	{"contextDependent", "()Z", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, contextDependent, bool)},
	{"dependentContents", "()Z", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, dependentContents, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(SyntaxTreeNode, display, void, int32_t)},
	{"displayContents", "(I)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, displayContents, void, int32_t)},
	{"elementAt", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, elementAt, SyntaxTreeNode*, int32_t)},
	{"elementCount", "()I", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, elementCount, int32_t)},
	{"elements", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PROTECTED | $FINAL, $method(SyntaxTreeNode, elements, $Iterator*)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getAttribute, $String*, $String*)},
	{"getAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getAttribute, $String*, $String*, $String*)},
	{"getAttributes", "()Lorg/xml/sax/Attributes;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getAttributes, $Attributes*)},
	{"getContents", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PROTECTED | $FINAL, $method(SyntaxTreeNode, getContents, $List*)},
	{"getImportPrecedence", "()I", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getImportPrecedence, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $FINAL, $method(SyntaxTreeNode, getLineNumber, int32_t)},
	{"getParent", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, getParent, SyntaxTreeNode*)},
	{"getParser", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PUBLIC | $FINAL, $method(SyntaxTreeNode, getParser, $Parser*)},
	{"getPrefixMapping", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED, $virtualMethod(SyntaxTreeNode, getPrefixMapping, $Map*)},
	{"getQName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getQName, $QName*)},
	{"getStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $virtualMethod(SyntaxTreeNode, getStylesheet, $Stylesheet*)},
	{"getSymbolTable", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, getSymbolTable, $SymbolTable*)},
	{"getTemplate", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, getTemplate, $Template*)},
	{"getXSLTC", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, getXSLTC, $XSLTC*)},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, hasAttribute, bool, $String*)},
	{"hasContents", "()Z", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, hasContents, bool)},
	{"indent", "(I)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, indent, void, int32_t)},
	{"isAdaptiveRTF", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Z", nullptr, $PRIVATE, $method(SyntaxTreeNode, isAdaptiveRTF, bool, SyntaxTreeNode*)},
	{"isDummy", "()Z", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, isDummy, bool)},
	{"isSimpleRTF", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Z", nullptr, $PRIVATE, $method(SyntaxTreeNode, isSimpleRTF, bool, SyntaxTreeNode*)},
	{"isTextElement", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Z)Z", nullptr, $PRIVATE, $method(SyntaxTreeNode, isTextElement, bool, SyntaxTreeNode*, bool)},
	{"lambda$isSimpleRTF$0", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(SyntaxTreeNode, lambda$isSimpleRTF$0, bool, SyntaxTreeNode*)},
	{"lastChild", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, lastChild, SyntaxTreeNode*)},
	{"lookupNamespace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, lookupNamespace, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, lookupPrefix, $String*, $String*)},
	{"notTypeOf", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC, $virtualMethod(SyntaxTreeNode, notTypeOf, bool, $Class*)},
	{"parseChildren", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, parseChildren, void, $Parser*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(SyntaxTreeNode, parseContents, void, $Parser*)},
	{"removeElement", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, removeElement, void, SyntaxTreeNode*)},
	{"reportError", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, reportError, void, SyntaxTreeNode*, $Parser*, $String*, $String*)},
	{"reportWarning", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, reportWarning, void, SyntaxTreeNode*, $Parser*, $String*, $String*)},
	{"setAttributes", "(Lorg/xml/sax/helpers/AttributesImpl;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, setAttributes, void, $AttributesImpl*)},
	{"setFirstElement", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, setFirstElement, void, SyntaxTreeNode*)},
	{"setLineNumber", "(I)V", nullptr, $PROTECTED | $FINAL, $method(SyntaxTreeNode, setLineNumber, void, int32_t)},
	{"setParent", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, setParent, void, SyntaxTreeNode*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, setParser, void, $Parser*)},
	{"setPrefixMapping", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PROTECTED, $virtualMethod(SyntaxTreeNode, setPrefixMapping, void, $Map*)},
	{"setQName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, setQName, void, $QName*)},
	{"setQName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, setQName, void, $String*, $String*, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyntaxTreeNode, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, translateContents, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyntaxTreeNode, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"typeCheckContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, typeCheckContents, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"updateScope", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PROTECTED, $virtualMethod(SyntaxTreeNode, updateScope, $QName*, $Parser*, SyntaxTreeNode*)},
	{}
};

$ClassInfo _SyntaxTreeNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants",
	_SyntaxTreeNode_FieldInfo_,
	_SyntaxTreeNode_MethodInfo_
};

$Object* allocate$SyntaxTreeNode($Class* clazz) {
	return $of($alloc(SyntaxTreeNode));
}

SyntaxTreeNode* SyntaxTreeNode::Dummy = nullptr;
$chars* SyntaxTreeNode::_spaces = nullptr;

void SyntaxTreeNode::init$() {
	$set(this, _contents, $new($ArrayList, 2));
	$set(this, _attributes, nullptr);
	$set(this, _prefixMapping, nullptr);
	this->_line = 0;
	$set(this, _qname, nullptr);
}

void SyntaxTreeNode::init$(int32_t line) {
	$set(this, _contents, $new($ArrayList, 2));
	$set(this, _attributes, nullptr);
	$set(this, _prefixMapping, nullptr);
	this->_line = line;
	$set(this, _qname, nullptr);
}

void SyntaxTreeNode::init$($String* uri, $String* prefix, $String* local) {
	$set(this, _contents, $new($ArrayList, 2));
	$set(this, _attributes, nullptr);
	$set(this, _prefixMapping, nullptr);
	this->_line = 0;
	setQName(uri, prefix, local);
}

void SyntaxTreeNode::setLineNumber(int32_t line) {
	this->_line = line;
}

int32_t SyntaxTreeNode::getLineNumber() {
	if (this->_line > 0) {
		return this->_line;
	}
	$var(SyntaxTreeNode, parent, getParent());
	return (parent != nullptr) ? $nc(parent)->getLineNumber() : 0;
}

void SyntaxTreeNode::setQName($QName* qname) {
	$set(this, _qname, qname);
}

void SyntaxTreeNode::setQName($String* uri, $String* prefix, $String* localname) {
	$set(this, _qname, $new($QName, uri, prefix, localname));
}

$QName* SyntaxTreeNode::getQName() {
	return (this->_qname);
}

void SyntaxTreeNode::setAttributes($AttributesImpl* attributes) {
	$set(this, _attributes, attributes);
}

$String* SyntaxTreeNode::getAttribute($String* qname) {
	if (this->_attributes == nullptr) {
		$init($Constants);
		return $Constants::EMPTYSTRING;
	}
	$var($String, value, $nc(this->_attributes)->getValue(qname));
	$init($Constants);
	return (value == nullptr || $nc(value)->equals($Constants::EMPTYSTRING)) ? $Constants::EMPTYSTRING : value;
}

$String* SyntaxTreeNode::getAttribute($String* prefix, $String* localName) {
	$useLocalCurrentObjectStackCache();
	return getAttribute($$str({prefix, $$str(u':'), localName}));
}

bool SyntaxTreeNode::hasAttribute($String* qname) {
	return (this->_attributes != nullptr && $nc(this->_attributes)->getValue(qname) != nullptr);
}

void SyntaxTreeNode::addAttribute($String* qname, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(this->_attributes)->getIndex(qname);
	if (index != -1) {
		$nc(this->_attributes)->setAttribute(index, ""_s, $($Util::getLocalName(qname)), qname, "CDATA"_s, value);
	} else {
		$nc(this->_attributes)->addAttribute(""_s, $($Util::getLocalName(qname)), qname, "CDATA"_s, value);
	}
}

$Attributes* SyntaxTreeNode::getAttributes() {
	return (this->_attributes);
}

void SyntaxTreeNode::setPrefixMapping($Map* mapping) {
	$set(this, _prefixMapping, mapping);
}

$Map* SyntaxTreeNode::getPrefixMapping() {
	return this->_prefixMapping;
}

void SyntaxTreeNode::addPrefixMapping($String* prefix, $String* uri) {
	if (this->_prefixMapping == nullptr) {
		$set(this, _prefixMapping, $new($HashMap));
	}
	$nc(this->_prefixMapping)->put(prefix, uri);
}

$String* SyntaxTreeNode::lookupNamespace($String* prefix) {
	$var($String, uri, nullptr);
	if (this->_prefixMapping != nullptr) {
		$assign(uri, $cast($String, $nc(this->_prefixMapping)->get(prefix)));
	}
	if ((uri == nullptr) && (this->_parent != nullptr)) {
		$assign(uri, $nc(this->_parent)->lookupNamespace(prefix));
		$init($Constants);
		if ((prefix == $Constants::EMPTYSTRING) && (uri == nullptr)) {
			$assign(uri, $Constants::EMPTYSTRING);
		}
	}
	return (uri);
}

$String* SyntaxTreeNode::lookupPrefix($String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	if ((this->_prefixMapping != nullptr) && ($nc(this->_prefixMapping)->containsValue(uri))) {
		{
			$var($Iterator, i$, $nc($($nc(this->_prefixMapping)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$assign(prefix, $cast($String, $nc(entry)->getKey()));
					$var($String, mapsTo, $cast($String, entry->getValue()));
					if ($nc(mapsTo)->equals(uri)) {
						return (prefix);
					}
				}
			}
		}
	} else if (this->_parent != nullptr) {
		$assign(prefix, $nc(this->_parent)->lookupPrefix(uri));
		$init($Constants);
		if ((uri == $Constants::EMPTYSTRING) && (prefix == nullptr)) {
			$assign(prefix, $Constants::EMPTYSTRING);
		}
	}
	return (prefix);
}

void SyntaxTreeNode::setParser($Parser* parser) {
	$set(this, _parser, parser);
}

$Parser* SyntaxTreeNode::getParser() {
	return this->_parser;
}

void SyntaxTreeNode::setParent(SyntaxTreeNode* parent) {
	if (this->_parent == nullptr) {
		$set(this, _parent, parent);
	}
}

SyntaxTreeNode* SyntaxTreeNode::getParent() {
	return this->_parent;
}

bool SyntaxTreeNode::isDummy() {
	return this == SyntaxTreeNode::Dummy;
}

int32_t SyntaxTreeNode::getImportPrecedence() {
	$var($Stylesheet, stylesheet, getStylesheet());
	if (stylesheet == nullptr) {
		return $Integer::MIN_VALUE;
	}
	return $nc(stylesheet)->getImportPrecedence();
}

$Stylesheet* SyntaxTreeNode::getStylesheet() {
	if (this->_stylesheet == nullptr) {
		$var(SyntaxTreeNode, parent, this);
		while (parent != nullptr) {
			if ($instanceOf($Stylesheet, parent)) {
				return ($cast($Stylesheet, parent));
			}
			$assign(parent, parent->getParent());
		}
		$set(this, _stylesheet, $cast($Stylesheet, parent));
	}
	return (this->_stylesheet);
}

$Template* SyntaxTreeNode::getTemplate() {
	if (this->_template == nullptr) {
		$var(SyntaxTreeNode, parent, this);
		while ((parent != nullptr) && (!($instanceOf($Template, parent)))) {
			$assign(parent, parent->getParent());
		}
		$set(this, _template, $cast($Template, parent));
	}
	return (this->_template);
}

$XSLTC* SyntaxTreeNode::getXSLTC() {
	return $nc(this->_parser)->getXSLTC();
}

$SymbolTable* SyntaxTreeNode::getSymbolTable() {
	return (this->_parser == nullptr) ? ($SymbolTable*)nullptr : $nc(this->_parser)->getSymbolTable();
}

void SyntaxTreeNode::parseContents($Parser* parser) {
	parseChildren(parser);
}

void SyntaxTreeNode::parseChildren($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($List, locals, nullptr);
	{
		$var($Iterator, i$, $nc(this->_contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, child, $cast(SyntaxTreeNode, i$->next()));
			{
				$nc($($nc(parser)->getSymbolTable()))->setCurrentNode(child);
				$nc(child)->parseContents(parser);
				$var($QName, varOrParamName, updateScope(parser, child));
				if (varOrParamName != nullptr) {
					if (locals == nullptr) {
						$assign(locals, $new($ArrayList, 2));
					}
					$nc(locals)->add(varOrParamName);
				}
			}
		}
	}
	$nc($($nc(parser)->getSymbolTable()))->setCurrentNode(this);
	if (locals != nullptr) {
		{
			$var($Iterator, i$, locals->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($QName, varOrParamName, $cast($QName, i$->next()));
				{
					parser->removeVariable(varOrParamName);
				}
			}
		}
	}
}

$QName* SyntaxTreeNode::updateScope($Parser* parser, SyntaxTreeNode* node) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Variable, node)) {
		$var($Variable, var, $cast($Variable, node));
		$nc(parser)->addVariable(var);
		return $nc(var)->getName();
	} else if ($instanceOf($Param, node)) {
		$var($Param, param, $cast($Param, node));
		$nc(parser)->addParameter(param);
		return $nc(param)->getName();
	} else {
		return nullptr;
	}
}

$Type* SyntaxTreeNode::typeCheckContents($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->_contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
			{
				$nc(item)->typeCheck(stable);
			}
		}
	}
	$init($Type);
	return $Type::Void;
}

void SyntaxTreeNode::translateContents($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t n = elementCount();
	{
		$var($Iterator, i$, $nc(this->_contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
			{
				$nc(methodGen)->markChunkStart();
				$nc(item)->translate(classGen, methodGen);
				methodGen->markChunkEnd();
			}
		}
	}
	for (int32_t i = 0; i < n; ++i) {
		if ($instanceOf($VariableBase, $($nc(this->_contents)->get(i)))) {
			$var($VariableBase, var, $cast($VariableBase, $nc(this->_contents)->get(i)));
			$nc(var)->unmapRegister(classGen, methodGen);
		}
	}
}

bool SyntaxTreeNode::notTypeOf($Class* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->_contents)->size() > 0) {
		{
			$var($Iterator, i$, $nc(this->_contents)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
				{
					if (!$nc($of(item))->getClass()->isAssignableFrom(type)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool SyntaxTreeNode::isSimpleRTF(SyntaxTreeNode* node) {
	$useLocalCurrentObjectStackCache();
	$var($List, contents, $nc(node)->getContents());
	if (!$nc($($nc(contents)->stream()))->noneMatch(static_cast<$Predicate*>($$new(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0, this)))) {
		return false;
	}
	return true;
}

bool SyntaxTreeNode::isAdaptiveRTF(SyntaxTreeNode* node) {
	$useLocalCurrentObjectStackCache();
	$var($List, contents, $nc(node)->getContents());
	{
		$var($Iterator, i$, $nc(contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
			{
				if (!isTextElement(item, true)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool SyntaxTreeNode::isTextElement(SyntaxTreeNode* node, bool doExtendedCheck) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ValueOf, node) || $instanceOf($Number, node) || $instanceOf($Text, node)) {
		return true;
	} else if ($instanceOf($If, node)) {
		return doExtendedCheck ? isAdaptiveRTF(node) : isSimpleRTF(node);
	} else if ($instanceOf($Choose, node)) {
		$var($List, contents, $nc(node)->getContents());
		{
			$var($Iterator, i$, $nc(contents)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
				{
					bool var$0 = $instanceOf($Text, item);
					if (!var$0) {
						bool var$1 = ($instanceOf($When, item) || $instanceOf($Otherwise, item));
						if (var$1) {
							bool var$2 = (doExtendedCheck && isAdaptiveRTF(item));
							var$1 = (var$2 || (!doExtendedCheck && isSimpleRTF(item)));
						}
						var$0 = (var$1);
					}
					if (var$0) {
						continue;
					} else {
						return false;
					}
				}
			}
		}
		return true;
	} else if (doExtendedCheck && ($instanceOf($CallTemplate, node) || $instanceOf($ApplyTemplates, node))) {
		return true;
	} else {
		return false;
	}
}

void SyntaxTreeNode::compileResultTree($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($Stylesheet, stylesheet, classGen->getStylesheet());
	bool isSimple = isSimpleRTF(this);
	bool isAdaptive = false;
	if (!isSimple) {
		isAdaptive = isAdaptiveRTF(this);
	}
	int32_t rtfType = isSimple ? $DOM::SIMPLE_RTF : (isAdaptive ? $DOM::ADAPTIVE_RTF : $DOM::TREE_RTF);
	$nc(il)->append($(methodGen->loadHandler()));
	$var($String, DOM_CLASS, classGen->getDOMClass());
	il->append($(methodGen->loadDOM()));
	$init($Constants);
	int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getResultTreeFrag"_s, $$str({"(IIZ)"_s, $Constants::DOM_INTF_SIG}));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::RTF_INITIAL_SIZE)));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, rtfType)));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $nc(stylesheet)->callsNodeset())));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 4)));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	index = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getOutputDomBuilder"_s, $$str({"()"_s, $Constants::TRANSLET_OUTPUT_SIG}));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(methodGen->storeHandler()));
	il->append($(methodGen->startDocument()));
	translateContents(classGen, methodGen);
	il->append($(methodGen->loadHandler()));
	il->append($(methodGen->endDocument()));
	bool var$0 = $nc(stylesheet)->callsNodeset();
	if (var$0 && !$nc(DOM_CLASS)->equals($Constants::DOM_IMPL_CLASS)) {
		index = cpg->addMethodref($Constants::DOM_ADAPTER_CLASS, "<init>"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "[I["_s, $Constants::STRING_SIG, ")V"_s}));
		il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::DOM_ADAPTER_CLASS))));
		il->append(static_cast<$Instruction*>($$new($DUP_X1)));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		if (!stylesheet->callsNodeset()) {
			il->append(static_cast<$Instruction*>($$new($ICONST, 0)));
			il->append(static_cast<$Instruction*>($$new($ANEWARRAY, cpg->addClass($Constants::STRING))));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append(static_cast<$Instruction*>($$new($ICONST, 0)));
			$init($BasicType);
			il->append(static_cast<$Instruction*>($$new($NEWARRAY, $BasicType::INT)));
			il->append(static_cast<$Instruction*>($Constants::SWAP));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, index)));
		} else {
			il->append(static_cast<$Instruction*>($Constants::ALOAD_0));
			il->append(static_cast<$Instruction*>($$new($GETFIELD, cpg->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMES_INDEX, $Constants::NAMES_INDEX_SIG))));
			il->append(static_cast<$Instruction*>($Constants::ALOAD_0));
			il->append(static_cast<$Instruction*>($$new($GETFIELD, cpg->addFieldref($Constants::TRANSLET_CLASS, $Constants::URIS_INDEX, $Constants::URIS_INDEX_SIG))));
			il->append(static_cast<$Instruction*>($Constants::ALOAD_0));
			il->append(static_cast<$Instruction*>($$new($GETFIELD, cpg->addFieldref($Constants::TRANSLET_CLASS, $Constants::TYPES_INDEX, $Constants::TYPES_INDEX_SIG))));
			il->append(static_cast<$Instruction*>($Constants::ALOAD_0));
			il->append(static_cast<$Instruction*>($$new($GETFIELD, cpg->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMESPACE_INDEX, $Constants::NAMESPACE_INDEX_SIG))));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, index)));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			il->append($(methodGen->loadDOM()));
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, cpg->addClass($(classGen->getDOMClass())))));
			il->append(static_cast<$Instruction*>($Constants::SWAP));
			index = cpg->addMethodref($Constants::MULTI_DOM_CLASS, "addDOMAdapter"_s, $$str({"("_s, $Constants::DOM_ADAPTER_SIG, ")I"_s}));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
			il->append(static_cast<$Instruction*>($Constants::POP));
		}
	}
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append($(methodGen->storeHandler()));
}

bool SyntaxTreeNode::contextDependent() {
	return true;
}

bool SyntaxTreeNode::dependentContents() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->_contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
			{
				if ($nc(item)->contextDependent()) {
					return true;
				}
			}
		}
	}
	return false;
}

void SyntaxTreeNode::addElement(SyntaxTreeNode* element) {
	$nc(this->_contents)->add(element);
	$nc(element)->setParent(this);
}

void SyntaxTreeNode::setFirstElement(SyntaxTreeNode* element) {
	$nc(this->_contents)->add(0, element);
	$nc(element)->setParent(this);
}

void SyntaxTreeNode::removeElement(SyntaxTreeNode* element) {
	$nc(this->_contents)->remove($of(element));
	$nc(element)->setParent(nullptr);
}

$List* SyntaxTreeNode::getContents() {
	return this->_contents;
}

bool SyntaxTreeNode::hasContents() {
	return elementCount() > 0;
}

int32_t SyntaxTreeNode::elementCount() {
	return $nc(this->_contents)->size();
}

$Iterator* SyntaxTreeNode::elements() {
	return $nc(this->_contents)->iterator();
}

SyntaxTreeNode* SyntaxTreeNode::elementAt(int32_t pos) {
	return $cast(SyntaxTreeNode, $nc(this->_contents)->get(pos));
}

SyntaxTreeNode* SyntaxTreeNode::lastChild() {
	if ($nc(this->_contents)->isEmpty()) {
		return nullptr;
	}
	return $cast(SyntaxTreeNode, $nc(this->_contents)->get($nc(this->_contents)->size() - 1));
}

void SyntaxTreeNode::display(int32_t indent) {
	displayContents(indent);
}

void SyntaxTreeNode::displayContents(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->_contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(SyntaxTreeNode, item, $cast(SyntaxTreeNode, i$->next()));
			{
				$nc(item)->display(indent);
			}
		}
	}
}

void SyntaxTreeNode::indent(int32_t indent) {
	$nc($System::out)->print($$new($String, SyntaxTreeNode::_spaces, 0, indent));
}

void SyntaxTreeNode::reportError(SyntaxTreeNode* element, $Parser* parser, $String* errorCode, $String* message) {
	$var($ErrorMsg, error, $new($ErrorMsg, errorCode, $of(message), element));
	$nc(parser)->reportError($Constants::ERROR, error);
}

void SyntaxTreeNode::reportWarning(SyntaxTreeNode* element, $Parser* parser, $String* errorCode, $String* message) {
	$var($ErrorMsg, error, $new($ErrorMsg, errorCode, $of(message), element));
	$nc(parser)->reportError($Constants::WARNING, error);
}

bool SyntaxTreeNode::lambda$isSimpleRTF$0(SyntaxTreeNode* item) {
	return (!isTextElement(item, false));
}

void clinit$SyntaxTreeNode($Class* class$) {
	$assignStatic(SyntaxTreeNode::Dummy, $new($AbsolutePathPattern, nullptr));
	$assignStatic(SyntaxTreeNode::_spaces, "                                                       "_s->toCharArray());
}

SyntaxTreeNode::SyntaxTreeNode() {
}

$Class* SyntaxTreeNode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::classInfo$.name)) {
			return SyntaxTreeNode$$Lambda$lambda$isSimpleRTF$0::load$(name, initialize);
		}
	}
	$loadClass(SyntaxTreeNode, name, initialize, &_SyntaxTreeNode_ClassInfo_, clinit$SyntaxTreeNode, allocate$SyntaxTreeNode);
	return class$;
}

$Class* SyntaxTreeNode::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com