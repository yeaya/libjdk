#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>

#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Include.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Key.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Mode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NamespaceAlias.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Output.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef AASTORE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_SUPER
#undef ATTRIBUTE_NODE
#undef BASIS_LIBRARY_CLASS
#undef CIRCULAR_VARIABLE_ERR
#undef CURRENT_TRANSLET_VERSION
#undef DOCUMENT_PNAME
#undef DOM_ADAPTER_SIG
#undef DOM_FIELD
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef ERROR
#undef FALSE
#undef HASIDCALL_INDEX
#undef HASIDCALL_INDEX_SIG
#undef HTML_OUTPUT
#undef IASTORE
#undef INT
#undef ITERATOR_PNAME
#undef MULTIPLE_STYLESHEET_ERR
#undef MULTI_DOM_CLASS
#undef NAMESPACE_INDEX
#undef NAMESPACE_INDEX_SIG
#undef NAMESPACE_NODE
#undef NAMES_INDEX
#undef NAMES_INDEX_SIG
#undef NODE_ITERATOR_SIG
#undef OUTPUT_HANDLER_SIG
#undef RETURN
#undef STATIC_CHAR_DATA_FIELD
#undef STATIC_CHAR_DATA_FIELD_SIG
#undef STATIC_NAMESPACE_ARRAY_FIELD
#undef STATIC_NAMES_ARRAY_FIELD
#undef STATIC_TYPES_ARRAY_FIELD
#undef STATIC_URIS_ARRAY_FIELD
#undef STRING
#undef STRING_SIG
#undef STRIP_SPACE
#undef STRIP_SPACE_PARAMS
#undef TEXT_OUTPUT
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_PNAME
#undef TRANSLET_OUTPUT_SIG
#undef TRANSLET_VERSION_INDEX
#undef TRANSLET_VERSION_INDEX_SIG
#undef TRUE
#undef TYPES_INDEX
#undef TYPES_INDEX_SIG
#undef UNKNOWN_OUTPUT
#undef URIS_INDEX
#undef URIS_INDEX_SIG
#undef VOID
#undef XHTML_URI
#undef XML_OUTPUT
#undef XSLT_URI

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldGen = ::com::sun::org::apache::bcel::internal::generic::FieldGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GETSTATIC = ::com::sun::org::apache::bcel::internal::generic::GETSTATIC;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $PUTSTATIC = ::com::sun::org::apache::bcel::internal::generic::PUTSTATIC;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TargetLostException = ::com::sun::org::apache::bcel::internal::generic::TargetLostException;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $InstructionFinder = ::com::sun::org::apache::bcel::internal::util::InstructionFinder;
using $AttributeSet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $DecimalFormatting = ::com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting;
using $Include = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Include;
using $Key = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Key;
using $Mode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode;
using $NamespaceAlias = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NamespaceAlias;
using $Output = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Output;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SourceLoader = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $Whitespace = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class Stylesheet$$Lambda$lambda$processModes$0 : public $Consumer {
	$class(Stylesheet$$Lambda$lambda$processModes$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Stylesheet* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* mode) override {
		$nc(inst$)->lambda$processModes$0($cast($Mode, mode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stylesheet$$Lambda$lambda$processModes$0>());
	}
	Stylesheet* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stylesheet$$Lambda$lambda$processModes$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stylesheet$$Lambda$lambda$processModes$0, inst$)},
	{}
};
$MethodInfo Stylesheet$$Lambda$lambda$processModes$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(Stylesheet$$Lambda$lambda$processModes$0, init$, void, Stylesheet*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet$$Lambda$lambda$processModes$0, accept, void, Object$*)},
	{}
};
$ClassInfo Stylesheet$$Lambda$lambda$processModes$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Stylesheet$$Lambda$lambda$processModes$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Stylesheet$$Lambda$lambda$processModes$0::load$($String* name, bool initialize) {
	$loadClass(Stylesheet$$Lambda$lambda$processModes$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stylesheet$$Lambda$lambda$processModes$0::class$ = nullptr;

class Stylesheet$$Lambda$lambda$compileModes$1$1 : public $Consumer {
	$class(Stylesheet$$Lambda$lambda$compileModes$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ClassGenerator* classGen) {
		$set(this, classGen, classGen);
	}
	virtual void accept(Object$* mode) override {
		Stylesheet::lambda$compileModes$1(classGen, $cast($Mode, mode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stylesheet$$Lambda$lambda$compileModes$1$1>());
	}
	$ClassGenerator* classGen = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stylesheet$$Lambda$lambda$compileModes$1$1::fieldInfos[2] = {
	{"classGen", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;", nullptr, $PUBLIC, $field(Stylesheet$$Lambda$lambda$compileModes$1$1, classGen)},
	{}
};
$MethodInfo Stylesheet$$Lambda$lambda$compileModes$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PUBLIC, $method(Stylesheet$$Lambda$lambda$compileModes$1$1, init$, void, $ClassGenerator*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet$$Lambda$lambda$compileModes$1$1, accept, void, Object$*)},
	{}
};
$ClassInfo Stylesheet$$Lambda$lambda$compileModes$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Stylesheet$$Lambda$lambda$compileModes$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Stylesheet$$Lambda$lambda$compileModes$1$1::load$($String* name, bool initialize) {
	$loadClass(Stylesheet$$Lambda$lambda$compileModes$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stylesheet$$Lambda$lambda$compileModes$1$1::class$ = nullptr;

$FieldInfo _Stylesheet_FieldInfo_[] = {
	{"_version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Stylesheet, _version)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Stylesheet, _name)},
	{"_systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Stylesheet, _systemId)},
	{"_parentStylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(Stylesheet, _parentStylesheet)},
	{"_globals", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;>;", $PRIVATE, $field(Stylesheet, _globals)},
	{"_hasLocalParams", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(Stylesheet, _hasLocalParams)},
	{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Stylesheet, _className)},
	{"_templates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PRIVATE | $FINAL, $field(Stylesheet, _templates)},
	{"_allValidTemplates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PRIVATE, $field(Stylesheet, _allValidTemplates)},
	{"_nextModeSerial", "I", nullptr, $PRIVATE, $field(Stylesheet, _nextModeSerial)},
	{"_modes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;>;", $PRIVATE | $FINAL, $field(Stylesheet, _modes)},
	{"_defaultMode", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;", nullptr, $PRIVATE, $field(Stylesheet, _defaultMode)},
	{"_extensions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Stylesheet, _extensions)},
	{"_importedFrom", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $field(Stylesheet, _importedFrom)},
	{"_includedFrom", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $field(Stylesheet, _includedFrom)},
	{"_includedStylesheets", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;>;", $PRIVATE, $field(Stylesheet, _includedStylesheets)},
	{"_importPrecedence", "I", nullptr, $PRIVATE, $field(Stylesheet, _importPrecedence)},
	{"_minimumDescendantPrecedence", "I", nullptr, $PRIVATE, $field(Stylesheet, _minimumDescendantPrecedence)},
	{"_keys", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;>;", $PRIVATE, $field(Stylesheet, _keys)},
	{"_loader", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader;", nullptr, $PRIVATE, $field(Stylesheet, _loader)},
	{"_numberFormattingUsed", "Z", nullptr, $PRIVATE, $field(Stylesheet, _numberFormattingUsed)},
	{"_simplified", "Z", nullptr, $PRIVATE, $field(Stylesheet, _simplified)},
	{"_multiDocument", "Z", nullptr, $PRIVATE, $field(Stylesheet, _multiDocument)},
	{"_callsNodeset", "Z", nullptr, $PRIVATE, $field(Stylesheet, _callsNodeset)},
	{"_hasIdCall", "Z", nullptr, $PRIVATE, $field(Stylesheet, _hasIdCall)},
	{"_templateInlining", "Z", nullptr, $PRIVATE, $field(Stylesheet, _templateInlining)},
	{"_lastOutputElement", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;", nullptr, $PRIVATE, $field(Stylesheet, _lastOutputElement)},
	{"_outputProperties", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(Stylesheet, _outputProperties)},
	{"_outputMethod", "I", nullptr, $PRIVATE, $field(Stylesheet, _outputMethod)},
	{"UNKNOWN_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Stylesheet, UNKNOWN_OUTPUT)},
	{"XML_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Stylesheet, XML_OUTPUT)},
	{"HTML_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Stylesheet, HTML_OUTPUT)},
	{"TEXT_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Stylesheet, TEXT_OUTPUT)},
	{}
};

$MethodInfo _Stylesheet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Stylesheet, init$, void)},
	{"addDOMField", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Stylesheet, addDOMField, void, $ClassGenerator*)},
	{"addIncludedStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(Stylesheet, addIncludedStylesheet, void, Stylesheet*)},
	{"addParam", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;)I", nullptr, $PUBLIC, $method(Stylesheet, addParam, int32_t, $Param*)},
	{"addPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(Stylesheet, addPrefixMapping, void, $String*, $String*)},
	{"addStaticField", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Stylesheet, addStaticField, void, $ClassGenerator*, $String*, $String*)},
	{"addTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)V", nullptr, $PROTECTED, $method(Stylesheet, addTemplate, void, $Template*)},
	{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;)I", nullptr, $PUBLIC, $method(Stylesheet, addVariable, int32_t, $Variable*)},
	{"callsNodeset", "()Z", nullptr, $PUBLIC, $method(Stylesheet, callsNodeset, bool)},
	{"checkForLoop", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(Stylesheet, checkForLoop, bool, $String*)},
	{"checkOutputMethod", "()V", nullptr, $PRIVATE, $method(Stylesheet, checkOutputMethod, void)},
	{"compileBuildKeys", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Stylesheet, compileBuildKeys, $String*, $ClassGenerator*)},
	{"compileConstructor", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;)V", nullptr, $PRIVATE, $method(Stylesheet, compileConstructor, void, $ClassGenerator*, $Output*)},
	{"compileModes", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Stylesheet, compileModes, void, $ClassGenerator*)},
	{"compileStaticInitializer", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Stylesheet, compileStaticInitializer, void, $ClassGenerator*)},
	{"compileTopLevel", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Stylesheet, compileTopLevel, $String*, $ClassGenerator*)},
	{"compileTransform", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Stylesheet, compileTransform, void, $ClassGenerator*)},
	{"declareExtensionPrefixes", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $method(Stylesheet, declareExtensionPrefixes, void, $Parser*)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet, display, void, int32_t)},
	{"extensionURI", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)V", nullptr, $PRIVATE, $method(Stylesheet, extensionURI, void, $String*, $SymbolTable*)},
	{"getAllValidTemplates", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PUBLIC, $method(Stylesheet, getAllValidTemplates, $List*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Stylesheet, getClassName, $String*)},
	{"getImportPrecedence", "()I", nullptr, $PUBLIC, $virtualMethod(Stylesheet, getImportPrecedence, int32_t)},
	{"getLastOutputElement", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;", nullptr, $PUBLIC, $method(Stylesheet, getLastOutputElement, $Output*)},
	{"getMinimumDescendantPrecedence", "()I", nullptr, $PUBLIC, $method(Stylesheet, getMinimumDescendantPrecedence, int32_t)},
	{"getMode", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;", nullptr, $PUBLIC, $method(Stylesheet, getMode, $Mode*, $QName*)},
	{"getNamespace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(Stylesheet, getNamespace, $String*, $String*)},
	{"getOutputMethod", "()I", nullptr, $PUBLIC, $method(Stylesheet, getOutputMethod, int32_t)},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC, $method(Stylesheet, getOutputProperties, $Properties*)},
	{"getParentStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(Stylesheet, getParentStylesheet, Stylesheet*)},
	{"getSourceLoader", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader;", nullptr, $PUBLIC, $method(Stylesheet, getSourceLoader, $SourceLoader*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Stylesheet, getSystemId, $String*)},
	{"getTemplateInlining", "()Z", nullptr, $PUBLIC, $method(Stylesheet, getTemplateInlining, bool)},
	{"getTemplates", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PUBLIC, $method(Stylesheet, getTemplates, $List*)},
	{"hasGlobals", "()Z", nullptr, $PUBLIC, $method(Stylesheet, hasGlobals, bool)},
	{"hasLocalParams", "()Z", nullptr, $PUBLIC, $method(Stylesheet, hasLocalParams, bool)},
	{"isExtension", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(Stylesheet, isExtension, bool, $String*)},
	{"isMultiDocument", "()Z", nullptr, $PUBLIC, $method(Stylesheet, isMultiDocument, bool)},
	{"isSimplified", "()Z", nullptr, $PUBLIC, $method(Stylesheet, isSimplified, bool)},
	{"lambda$compileModes$1", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stylesheet, lambda$compileModes$1, void, $ClassGenerator*, $Mode*)},
	{"lambda$processModes$0", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Stylesheet, lambda$processModes$0, void, $Mode*)},
	{"makeStylesheetName", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $method(Stylesheet, makeStylesheetName, $QName*, $String*)},
	{"numberFormattingUsed", "()V", nullptr, $PUBLIC, $method(Stylesheet, numberFormattingUsed, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet, parseContents, void, $Parser*)},
	{"parseOwnChildren", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC | $FINAL, $method(Stylesheet, parseOwnChildren, void, $Parser*)},
	{"peepHoleOptimization", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(Stylesheet, peepHoleOptimization, void, $MethodGenerator*)},
	{"processModes", "()V", nullptr, $PUBLIC, $method(Stylesheet, processModes, void)},
	{"resolveDependencies", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PRIVATE, $method(Stylesheet, resolveDependencies, $List*, $List*)},
	{"setCallsNodeset", "(Z)V", nullptr, $PUBLIC, $method(Stylesheet, setCallsNodeset, void, bool)},
	{"setHasIdCall", "(Z)V", nullptr, $PUBLIC, $method(Stylesheet, setHasIdCall, void, bool)},
	{"setImportPrecedence", "(I)V", nullptr, $PUBLIC, $method(Stylesheet, setImportPrecedence, void, int32_t)},
	{"setImportingStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(Stylesheet, setImportingStylesheet, void, Stylesheet*)},
	{"setIncludingStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(Stylesheet, setIncludingStylesheet, void, Stylesheet*)},
	{"setMultiDocument", "(Z)V", nullptr, $PUBLIC, $method(Stylesheet, setMultiDocument, void, bool)},
	{"setOutputProperties", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(Stylesheet, setOutputProperties, void, $Properties*)},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Stylesheet, setOutputProperty, void, $String*, $String*)},
	{"setParentStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(Stylesheet, setParentStylesheet, void, Stylesheet*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet, setParser, void, $Parser*)},
	{"setSimplified", "()V", nullptr, $PUBLIC, $method(Stylesheet, setSimplified, void)},
	{"setSourceLoader", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader;)V", nullptr, $PUBLIC, $method(Stylesheet, setSourceLoader, void, $SourceLoader*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Stylesheet, setSystemId, void, $String*)},
	{"setTemplateInlining", "(Z)V", nullptr, $PUBLIC, $method(Stylesheet, setTemplateInlining, void, bool)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Stylesheet, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translate", "()V", nullptr, $PUBLIC, $method(Stylesheet, translate, void)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Stylesheet, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Stylesheet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Stylesheet",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode",
	nullptr,
	_Stylesheet_FieldInfo_,
	_Stylesheet_MethodInfo_
};

$Object* allocate$Stylesheet($Class* clazz) {
	return $of($alloc(Stylesheet));
}

void Stylesheet::init$() {
	$SyntaxTreeNode::init$();
	$set(this, _globals, $new($ArrayList));
	$set(this, _hasLocalParams, nullptr);
	$set(this, _templates, $new($ArrayList));
	$set(this, _allValidTemplates, nullptr);
	this->_nextModeSerial = 1;
	$set(this, _modes, $new($HashMap));
	$set(this, _extensions, $new($HashMap));
	$set(this, _importedFrom, nullptr);
	$set(this, _includedFrom, nullptr);
	$set(this, _includedStylesheets, nullptr);
	this->_importPrecedence = 1;
	this->_minimumDescendantPrecedence = -1;
	$set(this, _keys, $new($HashMap));
	$set(this, _loader, nullptr);
	this->_numberFormattingUsed = false;
	this->_simplified = false;
	this->_multiDocument = false;
	this->_callsNodeset = false;
	this->_hasIdCall = false;
	this->_templateInlining = false;
	$set(this, _lastOutputElement, nullptr);
	$set(this, _outputProperties, nullptr);
	this->_outputMethod = Stylesheet::UNKNOWN_OUTPUT;
}

int32_t Stylesheet::getOutputMethod() {
	return this->_outputMethod;
}

void Stylesheet::checkOutputMethod() {
	if (this->_lastOutputElement != nullptr) {
		$var($String, method, $nc(this->_lastOutputElement)->getOutputMethod());
		if (method != nullptr) {
			if (method->equals("xml"_s)) {
				this->_outputMethod = Stylesheet::XML_OUTPUT;
			} else if (method->equals("html"_s)) {
				this->_outputMethod = Stylesheet::HTML_OUTPUT;
			} else if (method->equals("text"_s)) {
				this->_outputMethod = Stylesheet::TEXT_OUTPUT;
			}
		}
	}
}

bool Stylesheet::getTemplateInlining() {
	return this->_templateInlining;
}

void Stylesheet::setTemplateInlining(bool flag) {
	this->_templateInlining = flag;
}

bool Stylesheet::isSimplified() {
	return (this->_simplified);
}

void Stylesheet::setSimplified() {
	this->_simplified = true;
}

void Stylesheet::setHasIdCall(bool flag) {
	this->_hasIdCall = flag;
}

void Stylesheet::setOutputProperty($String* key, $String* value) {
	if (this->_outputProperties == nullptr) {
		$set(this, _outputProperties, $new($Properties));
	}
	$nc(this->_outputProperties)->setProperty(key, value);
}

void Stylesheet::setOutputProperties($Properties* props) {
	$set(this, _outputProperties, props);
}

$Properties* Stylesheet::getOutputProperties() {
	return this->_outputProperties;
}

$Output* Stylesheet::getLastOutputElement() {
	return this->_lastOutputElement;
}

void Stylesheet::setMultiDocument(bool flag) {
	this->_multiDocument = flag;
}

bool Stylesheet::isMultiDocument() {
	return this->_multiDocument;
}

void Stylesheet::setCallsNodeset(bool flag) {
	if (flag) {
		setMultiDocument(flag);
	}
	this->_callsNodeset = flag;
}

bool Stylesheet::callsNodeset() {
	return this->_callsNodeset;
}

void Stylesheet::numberFormattingUsed() {
	this->_numberFormattingUsed = true;
	$var(Stylesheet, parent, getParentStylesheet());
	if (nullptr != parent) {
		parent->numberFormattingUsed();
	}
}

void Stylesheet::setImportPrecedence(int32_t precedence) {
	$useLocalCurrentObjectStackCache();
	this->_importPrecedence = precedence;
	$var($Iterator, elements, this->elements());
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($Include, child)) {
			$var(Stylesheet, included, $nc(($cast($Include, child)))->getIncludedStylesheet());
			if (included != nullptr && included->_includedFrom == this) {
				included->setImportPrecedence(precedence);
			}
		}
	}
	if (this->_importedFrom != nullptr) {
		if ($nc(this->_importedFrom)->getImportPrecedence() < precedence) {
			$var($Parser, parser, getParser());
			int32_t nextPrecedence = $nc(parser)->getNextImportPrecedence();
			$nc(this->_importedFrom)->setImportPrecedence(nextPrecedence);
		}
	} else if (this->_includedFrom != nullptr) {
		if ($nc(this->_includedFrom)->getImportPrecedence() != precedence) {
			$nc(this->_includedFrom)->setImportPrecedence(precedence);
		}
	}
}

int32_t Stylesheet::getImportPrecedence() {
	return this->_importPrecedence;
}

int32_t Stylesheet::getMinimumDescendantPrecedence() {
	$useLocalCurrentObjectStackCache();
	if (this->_minimumDescendantPrecedence == -1) {
		int32_t min = getImportPrecedence();
		int32_t inclImpCount = (this->_includedStylesheets != nullptr) ? $nc(this->_includedStylesheets)->size() : 0;
		for (int32_t i = 0; i < inclImpCount; ++i) {
			int32_t prec = $nc(($cast(Stylesheet, $($nc(this->_includedStylesheets)->get(i)))))->getMinimumDescendantPrecedence();
			if (prec < min) {
				min = prec;
			}
		}
		this->_minimumDescendantPrecedence = min;
	}
	return this->_minimumDescendantPrecedence;
}

bool Stylesheet::checkForLoop($String* systemId) {
	if (this->_systemId != nullptr && $nc(this->_systemId)->equals(systemId)) {
		return true;
	}
	if (this->_parentStylesheet != nullptr) {
		return $nc(this->_parentStylesheet)->checkForLoop(systemId);
	}
	return false;
}

void Stylesheet::setParser($Parser* parser) {
	$SyntaxTreeNode::setParser(parser);
	$set(this, _name, makeStylesheetName("__stylesheet_"_s));
}

void Stylesheet::setParentStylesheet(Stylesheet* parent) {
	$set(this, _parentStylesheet, parent);
}

Stylesheet* Stylesheet::getParentStylesheet() {
	return this->_parentStylesheet;
}

void Stylesheet::setImportingStylesheet(Stylesheet* parent) {
	$set(this, _importedFrom, parent);
	$nc(parent)->addIncludedStylesheet(this);
}

void Stylesheet::setIncludingStylesheet(Stylesheet* parent) {
	$set(this, _includedFrom, parent);
	$nc(parent)->addIncludedStylesheet(this);
}

void Stylesheet::addIncludedStylesheet(Stylesheet* child) {
	if (this->_includedStylesheets == nullptr) {
		$set(this, _includedStylesheets, $new($ArrayList));
	}
	$nc(this->_includedStylesheets)->add(child);
}

void Stylesheet::setSystemId($String* systemId) {
	if (systemId != nullptr) {
		$set(this, _systemId, $SystemIDResolver::getAbsoluteURI(systemId));
	}
}

$String* Stylesheet::getSystemId() {
	return this->_systemId;
}

void Stylesheet::setSourceLoader($SourceLoader* loader) {
	$set(this, _loader, loader);
}

$SourceLoader* Stylesheet::getSourceLoader() {
	return this->_loader;
}

$QName* Stylesheet::makeStylesheetName($String* prefix) {
	$useLocalCurrentObjectStackCache();
	return $nc($(getParser()))->getQName($$str({prefix, $$str($nc($(getXSLTC()))->nextStylesheetSerial())}));
}

bool Stylesheet::hasGlobals() {
	return $nc(this->_globals)->size() > 0;
}

bool Stylesheet::hasLocalParams() {
	$useLocalCurrentObjectStackCache();
	if (this->_hasLocalParams == nullptr) {
		$var($List, templates, getAllValidTemplates());
		int32_t n = $nc(templates)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Template, template$, $cast($Template, templates->get(i)));
			if ($nc(template$)->hasParams()) {
				$init($Boolean);
				$set(this, _hasLocalParams, $Boolean::TRUE);
				return true;
			}
		}
		$init($Boolean);
		$set(this, _hasLocalParams, $Boolean::FALSE);
		return false;
	} else {
		return $nc(this->_hasLocalParams)->booleanValue();
	}
}

void Stylesheet::addPrefixMapping($String* prefix, $String* uri) {
	$init($Constants);
	bool var$0 = $nc(prefix)->equals($Constants::EMPTYSTRING);
	if (var$0 && $nc(uri)->equals($Constants::XHTML_URI)) {
		return;
	}
	$SyntaxTreeNode::addPrefixMapping(prefix, uri);
}

void Stylesheet::extensionURI($String* prefixes, $SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (prefixes != nullptr) {
		$var($StringTokenizer, tokens, $new($StringTokenizer, prefixes));
		while (tokens->hasMoreTokens()) {
			$var($String, prefix, tokens->nextToken());
			$var($String, uri, lookupNamespace(prefix));
			if (uri != nullptr) {
				$nc(this->_extensions)->put(uri, prefix);
			}
		}
	}
}

bool Stylesheet::isExtension($String* uri) {
	return ($nc(this->_extensions)->get(uri) != nullptr);
}

void Stylesheet::declareExtensionPrefixes($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	$var($String, extensionPrefixes, getAttribute("extension-element-prefixes"_s));
	extensionURI(extensionPrefixes, stable);
}

void Stylesheet::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	addPrefixMapping("xml"_s, "http://www.w3.org/XML/1998/namespace"_s);
	$var(Stylesheet, sheet, $nc(stable)->addStylesheet(this->_name, this));
	if (sheet != nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::MULTIPLE_STYLESHEET_ERR, static_cast<$SyntaxTreeNode*>(this)));
		parser->reportError($Constants::ERROR, err);
	}
	if (this->_simplified) {
		$init($Constants);
		stable->excludeURI($Constants::XSLT_URI);
		$var($Template, template$, $new($Template));
		template$->parseSimplified(this, parser);
	} else {
		parseOwnChildren(parser);
	}
}

void Stylesheet::parseOwnChildren($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	$var($String, excludePrefixes, getAttribute("exclude-result-prefixes"_s));
	$var($String, extensionPrefixes, getAttribute("extension-element-prefixes"_s));
	$nc(stable)->pushExcludedNamespacesContext();
	$init($Constants);
	stable->excludeURI($Constants::XSLT_URI);
	stable->excludeNamespaces(excludePrefixes);
	stable->excludeNamespaces(extensionPrefixes);
	$var($List, contents, getContents());
	int32_t count = $nc(contents)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, contents->get(i)));
		if (($instanceOf($VariableBase, child)) || ($instanceOf($NamespaceAlias, child))) {
			$nc($(parser->getSymbolTable()))->setCurrentNode(child);
			$nc(child)->parseContents(parser);
		}
	}
	for (int32_t i = 0; i < count; ++i) {
		$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, contents->get(i)));
		if (!($instanceOf($VariableBase, child)) && !($instanceOf($NamespaceAlias, child))) {
			$nc($(parser->getSymbolTable()))->setCurrentNode(child);
			$nc(child)->parseContents(parser);
		}
		if (!this->_templateInlining && ($instanceOf($Template, child))) {
			$var($Template, template$, $cast($Template, child));
			$var($String, name, $str({"template$dot$"_s, $$str($nc(template$)->getPosition())}));
			template$->setName($(parser->getQName(name)));
		}
	}
	stable->popExcludedNamespacesContext();
}

void Stylesheet::processModes() {
	$useLocalCurrentObjectStackCache();
	if (this->_defaultMode == nullptr) {
		$init($Constants);
		$set(this, _defaultMode, $new($Mode, nullptr, this, $Constants::EMPTYSTRING));
	}
	$nc(this->_defaultMode)->processPatterns(this->_keys);
	$nc($($nc($($nc(this->_modes)->values()))->stream()))->forEach(static_cast<$Consumer*>($$new(Stylesheet$$Lambda$lambda$processModes$0, this)));
}

void Stylesheet::compileModes($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$nc(this->_defaultMode)->compileApplyTemplates(classGen);
	$nc($($nc($($nc(this->_modes)->values()))->stream()))->forEach(static_cast<$Consumer*>($$new(Stylesheet$$Lambda$lambda$compileModes$1$1, classGen)));
}

$Mode* Stylesheet::getMode($QName* modeName) {
	$useLocalCurrentObjectStackCache();
	if (modeName == nullptr) {
		if (this->_defaultMode == nullptr) {
			$init($Constants);
			$set(this, _defaultMode, $new($Mode, nullptr, this, $Constants::EMPTYSTRING));
		}
		return this->_defaultMode;
	} else {
		$var($Mode, mode, $cast($Mode, $nc(this->_modes)->get($($nc(modeName)->getStringRep()))));
		if (mode == nullptr) {
			$var($String, suffix, $Integer::toString(this->_nextModeSerial++));
			$var($Object, var$0, $of($nc(modeName)->getStringRep()));
			$nc(this->_modes)->put(var$0, $assign(mode, $new($Mode, modeName, this, suffix)));
		}
		return mode;
	}
}

$Type* Stylesheet::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->_globals)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($VariableBase, var, $cast($VariableBase, $nc(this->_globals)->get(i)));
		$nc(var)->typeCheck(stable);
	}
	return typeCheckContents(stable);
}

void Stylesheet::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	translate();
}

void Stylesheet::addDOMField($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $Constants::ACC_PUBLIC;
	$init($Constants);
	$var($1Type, var$1, $Util::getJCRefType($Constants::DOM_INTF_SIG));
	$var($String, var$2, $Constants::DOM_FIELD);
	$var($FieldGen, fgen, $new($FieldGen, var$0, var$1, var$2, $($nc(classGen)->getConstantPool())));
	$nc(classGen)->addField($(fgen->getField()));
}

void Stylesheet::addStaticField($ClassGenerator* classGen, $String* type, $String* name) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $Constants::ACC_PROTECTED | $Constants::ACC_STATIC;
	$var($1Type, var$1, $Util::getJCRefType(type));
	$var($String, var$2, name);
	$var($FieldGen, fgen, $new($FieldGen, var$0, var$1, var$2, $($nc(classGen)->getConstantPool())));
	$nc(classGen)->addField($(fgen->getField()));
}

void Stylesheet::translate() {
	$useLocalCurrentObjectStackCache();
	$set(this, _className, $nc($(getXSLTC()))->getClassName());
	$init($Constants);
	$var($ClassGenerator, classGen, $new($ClassGenerator, this->_className, $Constants::TRANSLET_CLASS, $Constants::EMPTYSTRING, $Constants::ACC_PUBLIC | $Constants::ACC_SUPER, nullptr, this));
	addDOMField(classGen);
	compileTransform(classGen);
	$var($Iterator, elements, this->elements());
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($Template, element)) {
			$var($Template, template$, $cast($Template, element));
			$nc($(getMode($($nc(template$)->getModeName()))))->addTemplate(template$);
		} else if ($instanceOf($AttributeSet, element)) {
			$nc(($cast($AttributeSet, element)))->translate(classGen, nullptr);
		} else if ($instanceOf($Output, element)) {
			$var($Output, output, $cast($Output, element));
			if ($nc(output)->enabled()) {
				$set(this, _lastOutputElement, output);
			}
		} else {
		}
	}
	checkOutputMethod();
	processModes();
	compileModes(classGen);
	compileStaticInitializer(classGen);
	compileConstructor(classGen, this->_lastOutputElement);
	if (!$nc($(getParser()))->errorsFound()) {
		$nc($(getXSLTC()))->dumpClass($(classGen->getJavaClass()));
	}
}

void Stylesheet::compileStaticInitializer($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, staticConst, $new($MethodGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_STATIC, $1Type::VOID, nullptr, nullptr, "<clinit>"_s, this->_className, il, cpg));
	$init($Constants);
	addStaticField(classGen, $$str({"["_s, $Constants::STRING_SIG}), $Constants::STATIC_NAMES_ARRAY_FIELD);
	addStaticField(classGen, $$str({"["_s, $Constants::STRING_SIG}), $Constants::STATIC_URIS_ARRAY_FIELD);
	addStaticField(classGen, "[I"_s, $Constants::STATIC_TYPES_ARRAY_FIELD);
	addStaticField(classGen, $$str({"["_s, $Constants::STRING_SIG}), $Constants::STATIC_NAMESPACE_ARRAY_FIELD);
	int32_t charDataFieldCount = $nc($(getXSLTC()))->getCharacterDataCount();
	for (int32_t i = 0; i < charDataFieldCount; ++i) {
		addStaticField(classGen, $Constants::STATIC_CHAR_DATA_FIELD_SIG, $$str({$Constants::STATIC_CHAR_DATA_FIELD, $$str(i)}));
	}
	$var($List, namesIndex, $nc($(getXSLTC()))->getNamesIndex());
	int32_t size = $nc(namesIndex)->size();
	$var($StringArray, namesArray, $new($StringArray, size));
	$var($StringArray, urisArray, $new($StringArray, size));
	$var($ints, typesArray, $new($ints, size));
	int32_t index = 0;
	for (int32_t i = 0; i < size; ++i) {
		$var($String, encodedName, $cast($String, namesIndex->get(i)));
		if ((index = $nc(encodedName)->lastIndexOf((int32_t)u':')) > -1) {
			urisArray->set(i, $(encodedName->substring(0, index)));
		}
		index = index + 1;
		if ($nc(encodedName)->charAt(index) == u'@') {
			typesArray->set(i, $DTM::ATTRIBUTE_NODE);
			++index;
		} else if (encodedName->charAt(index) == u'?') {
			typesArray->set(i, $DTM::NAMESPACE_NODE);
			++index;
		} else {
			typesArray->set(i, $DTM::ELEMENT_NODE);
		}
		if (index == 0) {
			namesArray->set(i, encodedName);
		} else {
			namesArray->set(i, $($nc(encodedName)->substring(index)));
		}
	}
	staticConst->markChunkStart();
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, size)));
	il->append(static_cast<$Instruction*>($$new($ANEWARRAY, $nc(cpg)->addClass($Constants::STRING))));
	int32_t namesArrayRef = $nc(cpg)->addFieldref(this->_className, $Constants::STATIC_NAMES_ARRAY_FIELD, $Constants::NAMES_INDEX_SIG);
	il->append(static_cast<$Instruction*>($$new($PUTSTATIC, namesArrayRef)));
	staticConst->markChunkEnd();
	for (int32_t i = 0; i < size; ++i) {
		$var($String, name, namesArray->get(i));
		staticConst->markChunkStart();
		il->append(static_cast<$Instruction*>($$new($GETSTATIC, namesArrayRef)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, i)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, name)));
		il->append(static_cast<$Instruction*>($Constants::AASTORE));
		staticConst->markChunkEnd();
	}
	staticConst->markChunkStart();
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, size)));
	il->append(static_cast<$Instruction*>($$new($ANEWARRAY, cpg->addClass($Constants::STRING))));
	int32_t urisArrayRef = cpg->addFieldref(this->_className, $Constants::STATIC_URIS_ARRAY_FIELD, $Constants::URIS_INDEX_SIG);
	il->append(static_cast<$Instruction*>($$new($PUTSTATIC, urisArrayRef)));
	staticConst->markChunkEnd();
	for (int32_t i = 0; i < size; ++i) {
		$var($String, uri, urisArray->get(i));
		staticConst->markChunkStart();
		il->append(static_cast<$Instruction*>($$new($GETSTATIC, urisArrayRef)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, i)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, uri)));
		il->append(static_cast<$Instruction*>($Constants::AASTORE));
		staticConst->markChunkEnd();
	}
	staticConst->markChunkStart();
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, size)));
	$init($BasicType);
	il->append(static_cast<$Instruction*>($$new($NEWARRAY, $BasicType::INT)));
	int32_t typesArrayRef = cpg->addFieldref(this->_className, $Constants::STATIC_TYPES_ARRAY_FIELD, $Constants::TYPES_INDEX_SIG);
	il->append(static_cast<$Instruction*>($$new($PUTSTATIC, typesArrayRef)));
	staticConst->markChunkEnd();
	for (int32_t i = 0; i < size; ++i) {
		int32_t nodeType = typesArray->get(i);
		staticConst->markChunkStart();
		il->append(static_cast<$Instruction*>($$new($GETSTATIC, typesArrayRef)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, i)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nodeType)));
		il->append(static_cast<$Instruction*>($Constants::IASTORE));
	}
	$var($List, namespaces, $nc($(getXSLTC()))->getNamespaceIndex());
	staticConst->markChunkStart();
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $nc(namespaces)->size())));
	il->append(static_cast<$Instruction*>($$new($ANEWARRAY, cpg->addClass($Constants::STRING))));
	int32_t namespaceArrayRef = cpg->addFieldref(this->_className, $Constants::STATIC_NAMESPACE_ARRAY_FIELD, $Constants::NAMESPACE_INDEX_SIG);
	il->append(static_cast<$Instruction*>($$new($PUTSTATIC, namespaceArrayRef)));
	staticConst->markChunkEnd();
	for (int32_t i = 0; i < $nc(namespaces)->size(); ++i) {
		$var($String, ns, $cast($String, namespaces->get(i)));
		staticConst->markChunkStart();
		il->append(static_cast<$Instruction*>($$new($GETSTATIC, namespaceArrayRef)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, i)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, ns)));
		il->append(static_cast<$Instruction*>($Constants::AASTORE));
		staticConst->markChunkEnd();
	}
	int32_t charDataCount = $nc($(getXSLTC()))->getCharacterDataCount();
	int32_t toCharArray = cpg->addMethodref($Constants::STRING, "toCharArray"_s, "()[C"_s);
	for (int32_t i = 0; i < charDataCount; ++i) {
		staticConst->markChunkStart();
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc($(getXSLTC()))->getCharacterData(i)))));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, toCharArray)));
		il->append(static_cast<$Instruction*>($$new($PUTSTATIC, cpg->addFieldref(this->_className, $$str({$Constants::STATIC_CHAR_DATA_FIELD, $$str(i)}), $Constants::STATIC_CHAR_DATA_FIELD_SIG))));
		staticConst->markChunkEnd();
	}
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	classGen->addMethod(staticConst);
}

void Stylesheet::compileConstructor($ClassGenerator* classGen, $Output* output) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, constructor, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, nullptr, nullptr, "<init>"_s, this->_className, il, cpg));
	il->append($(classGen->loadTranslet()));
	$init($Constants);
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "<init>"_s, "()V"_s))));
	constructor->markChunkStart();
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, $nc(cpg)->addFieldref(this->_className, $Constants::STATIC_NAMES_ARRAY_FIELD, $Constants::NAMES_INDEX_SIG))));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMES_INDEX, $Constants::NAMES_INDEX_SIG))));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, $nc(cpg)->addFieldref(this->_className, $Constants::STATIC_URIS_ARRAY_FIELD, $Constants::URIS_INDEX_SIG))));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::URIS_INDEX, $Constants::URIS_INDEX_SIG))));
	constructor->markChunkEnd();
	constructor->markChunkStart();
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, $nc(cpg)->addFieldref(this->_className, $Constants::STATIC_TYPES_ARRAY_FIELD, $Constants::TYPES_INDEX_SIG))));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::TYPES_INDEX, $Constants::TYPES_INDEX_SIG))));
	constructor->markChunkEnd();
	constructor->markChunkStart();
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, $nc(cpg)->addFieldref(this->_className, $Constants::STATIC_NAMESPACE_ARRAY_FIELD, $Constants::NAMESPACE_INDEX_SIG))));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMESPACE_INDEX, $Constants::NAMESPACE_INDEX_SIG))));
	constructor->markChunkEnd();
	constructor->markChunkStart();
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $AbstractTranslet::CURRENT_TRANSLET_VERSION)));
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::TRANSLET_VERSION_INDEX, $Constants::TRANSLET_VERSION_INDEX_SIG))));
	constructor->markChunkEnd();
	if (this->_hasIdCall) {
		constructor->markChunkStart();
		il->append($(classGen->loadTranslet()));
		$init($Boolean);
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Boolean::TRUE)));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::HASIDCALL_INDEX, $Constants::HASIDCALL_INDEX_SIG))));
		constructor->markChunkEnd();
	}
	if (output != nullptr) {
		constructor->markChunkStart();
		output->translate(classGen, constructor);
		constructor->markChunkEnd();
	}
	if (this->_numberFormattingUsed) {
		constructor->markChunkStart();
		$DecimalFormatting::translateDefaultDFS(classGen, constructor);
		constructor->markChunkEnd();
	}
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	classGen->addMethod(constructor);
}

$String* Stylesheet::compileTopLevel($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$init($Constants);
	$var($TypeArray, argTypes, $new($TypeArray, {
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)),
		$($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG))
	}));
	$var($StringArray, argNames, $new($StringArray, {
		$Constants::DOCUMENT_PNAME,
		$Constants::ITERATOR_PNAME,
		$Constants::TRANSLET_OUTPUT_PNAME
	}));
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, toplevel, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, argTypes, argNames, "topLevel"_s, this->_className, il, $(classGen->getConstantPool())));
	toplevel->addException("com.sun.org.apache.xalan.internal.xsltc.TransletException"_s);
	$var($LocalVariableGen, current, toplevel->addLocalVariable("current"_s, $1Type::INT, nullptr, nullptr));
	int32_t setFilter = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "setFilter"_s, "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V"_s);
	int32_t gitr = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
	il->append($(toplevel->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, gitr, 1)));
	il->append($(toplevel->nextNode()));
	$nc(current)->setStart($(il->append(static_cast<$Instruction*>($$new($ISTORE, current->getIndex())))));
	$var($List, varDepElements, $new($ArrayList, static_cast<$Collection*>(this->_globals)));
	$var($Iterator, elements, this->elements());
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($Key, element)) {
			varDepElements->add(element);
		}
	}
	$assign(varDepElements, resolveDependencies(varDepElements));
	int32_t count = $nc(varDepElements)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($TopLevelElement, tle, $cast($TopLevelElement, varDepElements->get(i)));
		$nc(tle)->translate(classGen, toplevel);
		if ($instanceOf($Key, tle)) {
			$var($Key, key, $cast($Key, tle));
			$nc(this->_keys)->put($(key->getName()), key);
		}
	}
	$var($List, whitespaceRules, $new($ArrayList));
	$assign(elements, this->elements());
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($DecimalFormatting, element)) {
			$nc(($cast($DecimalFormatting, element)))->translate(classGen, toplevel);
		} else if ($instanceOf($Whitespace, element)) {
			whitespaceRules->addAll($($nc(($cast($Whitespace, element)))->getRules()));
		}
	}
	if (whitespaceRules->size() > 0) {
		$Whitespace::translateRules(whitespaceRules, classGen);
	}
	if (classGen->containsMethod($Constants::STRIP_SPACE, $Constants::STRIP_SPACE_PARAMS) != nullptr) {
		il->append($(toplevel->loadDOM()));
		il->append($(classGen->loadTranslet()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, setFilter, 2)));
	}
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	classGen->addMethod(toplevel);
	return ($str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
}

$List* Stylesheet::resolveDependencies($List* input) {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	while ($nc(input)->size() > 0) {
		bool changed = false;
		for (int32_t i = 0; i < input->size();) {
			$var($TopLevelElement, vde, $cast($TopLevelElement, input->get(i)));
			$var($List, dep, $nc(vde)->getDependencies());
			if (dep == nullptr || result->containsAll(dep)) {
				result->add(vde);
				input->remove(i);
				changed = true;
			} else {
				++i;
			}
		}
		if (!changed) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::CIRCULAR_VARIABLE_ERR, $($of($of(input)->toString())), static_cast<$SyntaxTreeNode*>(this)));
			$nc($(getParser()))->reportError($Constants::ERROR, err);
			return (result);
		}
	}
	return result;
}

$String* Stylesheet::compileBuildKeys($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$init($Constants);
	$init($1Type);
	$var($TypeArray, argTypes, $new($TypeArray, {
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)),
		$($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)),
		static_cast<$1Type*>($1Type::INT)
	}));
	$var($StringArray, argNames, $new($StringArray, {
		$Constants::DOCUMENT_PNAME,
		$Constants::ITERATOR_PNAME,
		$Constants::TRANSLET_OUTPUT_PNAME,
		"current"_s
	}));
	$var($InstructionList, il, $new($InstructionList));
	$var($MethodGenerator, buildKeys, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, argTypes, argNames, "buildKeys"_s, this->_className, il, $(classGen->getConstantPool())));
	buildKeys->addException("com.sun.org.apache.xalan.internal.xsltc.TransletException"_s);
	$var($Iterator, elements, this->elements());
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($Key, element)) {
			$var($Key, key, $cast($Key, element));
			$nc(key)->translate(classGen, buildKeys);
			$nc(this->_keys)->put($(key->getName()), key);
		}
	}
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	buildKeys->stripAttributes(true);
	buildKeys->setMaxLocals();
	buildKeys->setMaxStack();
	buildKeys->removeNOPs();
	classGen->addMethod($(buildKeys->getMethod()));
	return ($str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, "I)V"_s}));
}

void Stylesheet::compileTransform($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($TypeArray, argTypes, $new($TypeArray, 3));
	$init($Constants);
	argTypes->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
	argTypes->set(1, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)));
	argTypes->set(2, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)));
	$var($StringArray, argNames, $new($StringArray, 3));
	argNames->set(0, $Constants::DOCUMENT_PNAME);
	argNames->set(1, $Constants::ITERATOR_PNAME);
	argNames->set(2, $Constants::TRANSLET_OUTPUT_PNAME);
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, transf, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, argTypes, argNames, "transform"_s, this->_className, il, $(classGen->getConstantPool())));
	transf->addException("com.sun.org.apache.xalan.internal.xsltc.TransletException"_s);
	int32_t check = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "resetPrefixIndex"_s, "()V"_s);
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, check)));
	$var($LocalVariableGen, current, transf->addLocalVariable("current"_s, $1Type::INT, nullptr, nullptr));
	$var($String, applyTemplatesSig, classGen->getApplyTemplatesSig());
	int32_t applyTemplates = cpg->addMethodref($(getClassName()), "applyTemplates"_s, applyTemplatesSig);
	int32_t domField = cpg->addFieldref($(getClassName()), $Constants::DOM_FIELD, $Constants::DOM_INTF_SIG);
	il->append($(classGen->loadTranslet()));
	if (isMultiDocument()) {
		il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::MULTI_DOM_CLASS))));
		il->append(static_cast<$Instruction*>($Constants::DUP));
	}
	il->append($(classGen->loadTranslet()));
	il->append($(transf->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, cpg->addMethodref($Constants::TRANSLET_CLASS, "makeDOMAdapter"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, ")"_s, $Constants::DOM_ADAPTER_SIG})))));
	if (isMultiDocument()) {
		int32_t init = cpg->addMethodref($Constants::MULTI_DOM_CLASS, "<init>"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, ")V"_s}));
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
	}
	il->append(static_cast<$Instruction*>($$new($PUTFIELD, domField)));
	int32_t gitr = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
	il->append($(transf->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, gitr, 1)));
	il->append($(transf->nextNode()));
	$nc(current)->setStart($(il->append(static_cast<$Instruction*>($$new($ISTORE, current->getIndex())))));
	il->append($(classGen->loadTranslet()));
	il->append($(transf->loadHandler()));
	int32_t index = cpg->addMethodref($Constants::TRANSLET_CLASS, "transferOutputSettings"_s, $$str({"("_s, $Constants::OUTPUT_HANDLER_SIG, ")V"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
	$var($String, keySig, compileBuildKeys(classGen));
	int32_t keyIdx = cpg->addMethodref($(getClassName()), "buildKeys"_s, keySig);
	$var($Iterator, toplevel, elements());
	bool var$0 = $nc(this->_globals)->size() > 0;
	if (var$0 || $nc(toplevel)->hasNext()) {
		$var($String, topLevelSig, compileTopLevel(classGen));
		int32_t topLevelIdx = cpg->addMethodref($(getClassName()), "topLevel"_s, topLevelSig);
		il->append($(classGen->loadTranslet()));
		il->append($(classGen->loadTranslet()));
		il->append(static_cast<$Instruction*>($$new($GETFIELD, domField)));
		il->append($(transf->loadIterator()));
		il->append($(transf->loadHandler()));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, topLevelIdx)));
	}
	il->append($(transf->loadHandler()));
	il->append($(transf->startDocument()));
	il->append($(classGen->loadTranslet()));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, domField)));
	il->append($(transf->loadIterator()));
	il->append($(transf->loadHandler()));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, applyTemplates)));
	il->append($(transf->loadHandler()));
	il->append($(transf->endDocument()));
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	classGen->addMethod(transf);
}

void Stylesheet::peepHoleOptimization($MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($String, pattern, "`aload\'`pop\'`instruction\'"_s);
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($InstructionFinder, find, $new($InstructionFinder, il));
	{
		$var($Iterator, iter, find->search(pattern));
		for (; $nc(iter)->hasNext();) {
			$var($InstructionHandleArray, match, $cast($InstructionHandleArray, iter->next()));
			try {
				$nc(il)->delete$($nc(match)->get(0), match->get(1));
			} catch ($TargetLostException& e) {
			}
		}
	}
}

int32_t Stylesheet::addParam($Param* param) {
	$nc(this->_globals)->add(param);
	return $nc(this->_globals)->size() - 1;
}

int32_t Stylesheet::addVariable($Variable* global) {
	$nc(this->_globals)->add(global);
	return $nc(this->_globals)->size() - 1;
}

void Stylesheet::display(int32_t indent) {
	this->indent(indent);
	$Util::println("Stylesheet"_s);
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$String* Stylesheet::getNamespace($String* prefix) {
	return lookupNamespace(prefix);
}

$String* Stylesheet::getClassName() {
	return this->_className;
}

$List* Stylesheet::getTemplates() {
	return this->_templates;
}

$List* Stylesheet::getAllValidTemplates() {
	$useLocalCurrentObjectStackCache();
	if (this->_includedStylesheets == nullptr) {
		return this->_templates;
	}
	if (this->_allValidTemplates == nullptr) {
		$var($List, templates, $new($ArrayList));
		templates->addAll(this->_templates);
		{
			$var($Iterator, i$, $nc(this->_includedStylesheets)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(Stylesheet, included, $cast(Stylesheet, i$->next()));
				{
					templates->addAll($($nc(included)->getAllValidTemplates()));
				}
			}
		}
		if (this->_parentStylesheet != nullptr) {
			return templates;
		}
		$set(this, _allValidTemplates, templates);
	}
	return this->_allValidTemplates;
}

void Stylesheet::addTemplate($Template* template$) {
	$nc(this->_templates)->add(template$);
}

void Stylesheet::lambda$compileModes$1($ClassGenerator* classGen, $Mode* mode) {
	$init(Stylesheet);
	$nc(mode)->compileApplyTemplates(classGen);
}

void Stylesheet::lambda$processModes$0($Mode* mode) {
	$nc(mode)->processPatterns(this->_keys);
}

Stylesheet::Stylesheet() {
}

$Class* Stylesheet::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Stylesheet$$Lambda$lambda$processModes$0::classInfo$.name)) {
			return Stylesheet$$Lambda$lambda$processModes$0::load$(name, initialize);
		}
		if (name->equals(Stylesheet$$Lambda$lambda$compileModes$1$1::classInfo$.name)) {
			return Stylesheet$$Lambda$lambda$compileModes$1$1::load$(name, initialize);
		}
	}
	$loadClass(Stylesheet, name, initialize, &_Stylesheet_ClassInfo_, allocate$Stylesheet);
	return class$;
}

$Class* Stylesheet::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com