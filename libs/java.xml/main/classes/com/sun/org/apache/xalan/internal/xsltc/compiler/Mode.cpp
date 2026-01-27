#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Mode.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/SWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AlternativePattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NamedMethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
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
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PUBLIC
#undef APPLY_TEMPLATES
#undef ATTRIBUTE
#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef CHARACTERS
#undef CHARACTERS_SIG
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_PNAME
#undef DOCUMENT_TYPE_NODE
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef GET_CHILDREN
#undef GET_CHILDREN_SIG
#undef INT
#undef ITERATOR_PNAME
#undef MAX_VALUE
#undef MIN_VALUE
#undef NAMESPACE_NODE
#undef NODE_ITERATOR_SIG
#undef NODE_PNAME
#undef NOP
#undef NOTATION_NODE
#undef NO_TYPE
#undef NTYPES
#undef OBJECT_SIG
#undef PROCESSING_INSTRUCTION_NODE
#undef RETURN
#undef ROOT_NODE
#undef TEXT_NODE
#undef TRANSLET_OUTPUT_PNAME
#undef TRANSLET_OUTPUT_SIG
#undef VOID

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $TestSeqArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq>;
using $ArrayListArray = $Array<::java::util::ArrayList>;
using $ListArray = $Array<::java::util::List>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DUP = ::com::sun::org::apache::bcel::internal::generic::DUP;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $SWITCH = ::com::sun::org::apache::bcel::internal::generic::SWITCH;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TargetLostException = ::com::sun::org::apache::bcel::internal::generic::TargetLostException;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $InstructionFinder = ::com::sun::org::apache::bcel::internal::util::InstructionFinder;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $AlternativePattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AlternativePattern;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $IdKeyPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $TestSeq = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TestSeq;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NamedMethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NamedMethodGenerator;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
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

class Mode$$Lambda$lambda$compileTemplateCalls$0 : public $Consumer {
	$class(Mode$$Lambda$lambda$compileTemplateCalls$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Mode* inst, int32_t min, int32_t max, $ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next) {
		$set(this, inst$, inst);
		this->min = min;
		this->max = max;
		$set(this, classGen, classGen);
		$set(this, methodGen, methodGen);
		$set(this, next, next);
	}
	virtual void accept(Object$* template$) override {
		$nc(inst$)->lambda$compileTemplateCalls$0(min, max, classGen, methodGen, next, $cast($Template, template$));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Mode$$Lambda$lambda$compileTemplateCalls$0>());
	}
	Mode* inst$ = nullptr;
	int32_t min = 0;
	int32_t max = 0;
	$ClassGenerator* classGen = nullptr;
	$MethodGenerator* methodGen = nullptr;
	$InstructionHandle* next = nullptr;
	static $FieldInfo fieldInfos[7];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Mode$$Lambda$lambda$compileTemplateCalls$0::fieldInfos[7] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, inst$)},
	{"min", "I", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, min)},
	{"max", "I", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, max)},
	{"classGen", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, classGen)},
	{"methodGen", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, methodGen)},
	{"next", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $field(Mode$$Lambda$lambda$compileTemplateCalls$0, next)},
	{}
};
$MethodInfo Mode$$Lambda$lambda$compileTemplateCalls$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;IILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(Mode$$Lambda$lambda$compileTemplateCalls$0, init$, void, Mode*, int32_t, int32_t, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Mode$$Lambda$lambda$compileTemplateCalls$0, accept, void, Object$*)},
	{}
};
$ClassInfo Mode$$Lambda$lambda$compileTemplateCalls$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Mode$$Lambda$lambda$compileTemplateCalls$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Mode$$Lambda$lambda$compileTemplateCalls$0::load$($String* name, bool initialize) {
	$loadClass(Mode$$Lambda$lambda$compileTemplateCalls$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Mode$$Lambda$lambda$compileTemplateCalls$0::class$ = nullptr;

$FieldInfo _Mode_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE | $FINAL, $field(Mode, _name)},
	{"_stylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE | $FINAL, $field(Mode, _stylesheet)},
	{"_methodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mode, _methodName)},
	{"_templates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PRIVATE, $field(Mode, _templates)},
	{"_childNodeGroup", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;", $PRIVATE, $field(Mode, _childNodeGroup)},
	{"_childNodeTestSeq", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq;", nullptr, $PRIVATE, $field(Mode, _childNodeTestSeq)},
	{"_attribNodeGroup", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;", $PRIVATE, $field(Mode, _attribNodeGroup)},
	{"_attribNodeTestSeq", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq;", nullptr, $PRIVATE, $field(Mode, _attribNodeTestSeq)},
	{"_idxGroup", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;", $PRIVATE, $field(Mode, _idxGroup)},
	{"_idxTestSeq", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq;", nullptr, $PRIVATE, $field(Mode, _idxTestSeq)},
	{"_patternGroups", "[Ljava/util/List;", "[Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;", $PRIVATE, $field(Mode, _patternGroups)},
	{"_testSeq", "[Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq;", nullptr, $PRIVATE, $field(Mode, _testSeq)},
	{"_neededTemplates", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Ljava/lang/Object;>;", $PRIVATE, $field(Mode, _neededTemplates)},
	{"_namedTemplates", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;>;", $PRIVATE, $field(Mode, _namedTemplates)},
	{"_templateIHs", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PRIVATE, $field(Mode, _templateIHs)},
	{"_templateILs", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;>;", $PRIVATE, $field(Mode, _templateILs)},
	{"_rootPattern", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;", nullptr, $PRIVATE, $field(Mode, _rootPattern)},
	{"_importLevels", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE, $field(Mode, _importLevels)},
	{"_keys", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;>;", $PRIVATE, $field(Mode, _keys)},
	{"_currentIndex", "I", nullptr, $PRIVATE, $field(Mode, _currentIndex)},
	{}
};

$MethodInfo _Mode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Mode, init$, void, $QName*, $Stylesheet*, $String*)},
	{"addPattern", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;)V", nullptr, $PRIVATE, $method(Mode, addPattern, void, int32_t, $LocationPathPattern*)},
	{"addPatternToGroup", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;)V", nullptr, $PRIVATE, $method(Mode, addPatternToGroup, void, $LocationPathPattern*)},
	{"addTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)V", nullptr, $PUBLIC, $method(Mode, addTemplate, void, $Template*)},
	{"appendTemplateCode", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PRIVATE, $method(Mode, appendTemplateCode, void, $InstructionList*)},
	{"appendTestSequences", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PRIVATE, $method(Mode, appendTestSequences, void, $InstructionList*)},
	{"compileApplyImports", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;II)V", nullptr, $PUBLIC, $method(Mode, compileApplyImports, void, $ClassGenerator*, int32_t, int32_t)},
	{"compileApplyTemplates", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PUBLIC, $method(Mode, compileApplyTemplates, void, $ClassGenerator*)},
	{"compileDefaultRecursion", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE, $method(Mode, compileDefaultRecursion, $InstructionList*, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*)},
	{"compileDefaultText", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE, $method(Mode, compileDefaultText, $InstructionList*, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*)},
	{"compileGetChildren", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Mode, compileGetChildren, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"compileNamedTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Mode, compileNamedTemplate, void, $Template*, $ClassGenerator*)},
	{"compileNamespaces", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;[Z[ZZLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE, $method(Mode, compileNamespaces, $InstructionList*, $ClassGenerator*, $MethodGenerator*, $booleans*, $booleans*, bool, $InstructionHandle*)},
	{"compileTemplateCalls", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;II)V", nullptr, $PRIVATE, $method(Mode, compileTemplateCalls, void, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*, int32_t, int32_t)},
	{"compileTemplates", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PRIVATE, $method(Mode, compileTemplates, void, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*)},
	{"completeTestSequences", "(ILjava/util/List;)V", "(ILjava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;)V", $PRIVATE, $method(Mode, completeTestSequences, void, int32_t, $List*)},
	{"flattenAlternative", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;>;)V", $PRIVATE, $method(Mode, flattenAlternative, void, $Pattern*, $Template*, $Map*)},
	{"functionName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Mode, functionName, $String*)},
	{"functionName", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $method(Mode, functionName, $String*, int32_t, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(Mode, getClassName, $String*)},
	{"getStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(Mode, getStylesheet, $Stylesheet*)},
	{"getTemplateInstructionHandle", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(Mode, getTemplateInstructionHandle, $InstructionHandle*, $Template*)},
	{"isAttributeName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Mode, isAttributeName, bool, $String*)},
	{"isNamespaceName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Mode, isNamespaceName, bool, $String*)},
	{"lambda$compileTemplateCalls$0", "(IILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Mode, lambda$compileTemplateCalls$0, void, int32_t, int32_t, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*, $Template*)},
	{"partition", "(Ljava/util/List;II)I", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;II)I", $PRIVATE, $method(Mode, partition, int32_t, $List*, int32_t, int32_t)},
	{"peepHoleOptimization", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(Mode, peepHoleOptimization, void, $MethodGenerator*)},
	{"prepareTestSequences", "()V", nullptr, $PRIVATE, $method(Mode, prepareTestSequences, void)},
	{"processPatterns", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Key;>;)V", $PUBLIC, $method(Mode, processPatterns, void, $Map*)},
	{"quicksort", "(Ljava/util/List;II)Ljava/util/List;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;II)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;>;", $PRIVATE, $method(Mode, quicksort, $List*, $List*, int32_t, int32_t)},
	{}
};

$ClassInfo _Mode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Mode",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants",
	_Mode_FieldInfo_,
	_Mode_MethodInfo_
};

$Object* allocate$Mode($Class* clazz) {
	return $of($alloc(Mode));
}

void Mode::init$($QName* name, $Stylesheet* stylesheet, $String* suffix) {
	$set(this, _childNodeGroup, nullptr);
	$set(this, _childNodeTestSeq, nullptr);
	$set(this, _attribNodeGroup, nullptr);
	$set(this, _attribNodeTestSeq, nullptr);
	$set(this, _idxGroup, nullptr);
	$set(this, _idxTestSeq, nullptr);
	$set(this, _neededTemplates, $new($HashMap));
	$set(this, _namedTemplates, $new($HashMap));
	$set(this, _templateIHs, $new($HashMap));
	$set(this, _templateILs, $new($HashMap));
	$set(this, _rootPattern, nullptr);
	$set(this, _importLevels, nullptr);
	$set(this, _keys, nullptr);
	$set(this, _name, name);
	$set(this, _stylesheet, stylesheet);
	$init($Constants);
	$set(this, _methodName, $str({$Constants::APPLY_TEMPLATES, suffix}));
	$set(this, _templates, $new($ArrayList));
	$set(this, _patternGroups, $fcast($ListArray, $new($ArrayListArray, 32)));
}

$String* Mode::functionName() {
	return this->_methodName;
}

$String* Mode::functionName(int32_t min, int32_t max) {
	$useLocalCurrentObjectStackCache();
	if (this->_importLevels == nullptr) {
		$set(this, _importLevels, $new($HashMap));
	}
	$var($Object, var$0, $of($Integer::valueOf(max)));
	$nc(this->_importLevels)->put(var$0, $($Integer::valueOf(min)));
	return $str({this->_methodName, $$str(u'_'), $$str(max)});
}

$String* Mode::getClassName() {
	return $nc(this->_stylesheet)->getClassName();
}

$Stylesheet* Mode::getStylesheet() {
	return this->_stylesheet;
}

void Mode::addTemplate($Template* template$) {
	$nc(this->_templates)->add(template$);
}

$List* Mode::quicksort($List* templates, int32_t p, int32_t r) {
	if (p < r) {
		int32_t q = partition(templates, p, r);
		quicksort(templates, p, q);
		quicksort(templates, q + 1, r);
	}
	return templates;
}

int32_t Mode::partition($List* templates, int32_t p, int32_t r) {
	$useLocalCurrentObjectStackCache();
	$var($Template, x, $cast($Template, $nc(templates)->get(p)));
	int32_t i = p - 1;
	int32_t j = r + 1;
	while (true) {
		while ($nc(x)->compareTo($(templates->get(--j))) > 0) {
		}
		while ($nc(x)->compareTo($(templates->get(++i))) < 0) {
		}
		if (i < j) {
			templates->set(j, $cast($Template, $(templates->set(i, $cast($Template, $(templates->get(j)))))));
		} else {
			return j;
		}
	}
}

void Mode::processPatterns($Map* keys) {
	$useLocalCurrentObjectStackCache();
	$set(this, _keys, keys);
	$set(this, _templates, quicksort(this->_templates, 0, $nc(this->_templates)->size() - 1));
	{
		$var($Iterator, i$, $nc(this->_templates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Template, template$, $cast($Template, i$->next()));
			{
				bool var$0 = $nc(template$)->isNamed();
				if (var$0 && !template$->disabled()) {
					$nc(this->_namedTemplates)->put(template$, this);
				}
				$var($Pattern, pattern, $nc(template$)->getPattern());
				if (pattern != nullptr) {
					flattenAlternative(pattern, template$, keys);
				}
			}
		}
	}
	prepareTestSequences();
}

void Mode::flattenAlternative($Pattern* pattern, $Template* template$, $Map* keys) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($IdKeyPattern, pattern)) {
		$var($IdKeyPattern, idkey, $cast($IdKeyPattern, pattern));
		$nc(idkey)->setTemplate(template$);
		if (this->_idxGroup == nullptr) {
			$set(this, _idxGroup, $new($ArrayList));
		}
		$nc(this->_idxGroup)->add($cast($IdKeyPattern, pattern));
	} else if ($instanceOf($AlternativePattern, pattern)) {
		$var($AlternativePattern, alt, $cast($AlternativePattern, pattern));
		flattenAlternative($($nc(alt)->getLeft()), template$, keys);
		flattenAlternative($($nc(alt)->getRight()), template$, keys);
	} else if ($instanceOf($LocationPathPattern, pattern)) {
		$var($LocationPathPattern, lpp, $cast($LocationPathPattern, pattern));
		$nc(lpp)->setTemplate(template$);
		addPatternToGroup(lpp);
	}
}

void Mode::addPatternToGroup($LocationPathPattern* lpp) {
	if ($instanceOf($IdKeyPattern, lpp)) {
		addPattern(-1, lpp);
	} else {
		$var($StepPattern, kernel, $nc(lpp)->getKernelPattern());
		if (kernel != nullptr) {
			addPattern(kernel->getNodeType(), lpp);
		} else if (this->_rootPattern == nullptr || lpp->noSmallerThan(this->_rootPattern)) {
			$set(this, _rootPattern, lpp);
		}
	}
}

void Mode::addPattern(int32_t kernelType, $LocationPathPattern* pattern) {
	$useLocalCurrentObjectStackCache();
	int32_t oldLength = $nc(this->_patternGroups)->length;
	if (kernelType >= oldLength) {
		$var($ListArray, newGroups, $fcast($ListArray, $new($ArrayListArray, kernelType * 2)));
		$System::arraycopy(this->_patternGroups, 0, newGroups, 0, oldLength);
		$set(this, _patternGroups, newGroups);
	}
	$var($List, patterns, nullptr);
	if (kernelType == $DOM::NO_TYPE) {
		if ($nc(pattern)->getAxis() == $Axis::ATTRIBUTE) {
			$assign(patterns, (this->_attribNodeGroup == nullptr) ? ($set(this, _attribNodeGroup, $new($ArrayList, 2))) : this->_attribNodeGroup);
		} else {
			$assign(patterns, (this->_childNodeGroup == nullptr) ? ($set(this, _childNodeGroup, $new($ArrayList, 2))) : this->_childNodeGroup);
		}
	} else {
		$assign(patterns, ($nc(this->_patternGroups)->get(kernelType) == nullptr) ? ($nc(this->_patternGroups)->set(kernelType, $$new($ArrayList, 2))) : $nc(this->_patternGroups)->get(kernelType));
	}
	if ($nc(patterns)->size() == 0) {
		patterns->add(pattern);
	} else {
		bool inserted = false;
		for (int32_t i = 0; i < patterns->size(); ++i) {
			$var($LocationPathPattern, lppToCompare, $cast($LocationPathPattern, patterns->get(i)));
			if ($nc(pattern)->noSmallerThan(lppToCompare)) {
				inserted = true;
				patterns->add(i, pattern);
				break;
			}
		}
		if (inserted == false) {
			patterns->add(pattern);
		}
	}
}

void Mode::completeTestSequences(int32_t nodeType, $List* patterns) {
	$useLocalCurrentObjectStackCache();
	if (patterns != nullptr) {
		if ($nc(this->_patternGroups)->get(nodeType) == nullptr) {
			$nc(this->_patternGroups)->set(nodeType, patterns);
		} else {
			int32_t m = patterns->size();
			for (int32_t j = 0; j < m; ++j) {
				addPattern(nodeType, $cast($LocationPathPattern, $(patterns->get(j))));
			}
		}
	}
}

void Mode::prepareTestSequences() {
	$useLocalCurrentObjectStackCache();
	$var($List, starGroup, $nc(this->_patternGroups)->get($DTM::ELEMENT_NODE));
	$var($List, atStarGroup, $nc(this->_patternGroups)->get($DTM::ATTRIBUTE_NODE));
	completeTestSequences($DTM::TEXT_NODE, this->_childNodeGroup);
	completeTestSequences($DTM::ELEMENT_NODE, this->_childNodeGroup);
	completeTestSequences($DTM::PROCESSING_INSTRUCTION_NODE, this->_childNodeGroup);
	completeTestSequences($DTM::COMMENT_NODE, this->_childNodeGroup);
	completeTestSequences($DTM::ATTRIBUTE_NODE, this->_attribNodeGroup);
	$var($List, names, $nc($($nc(this->_stylesheet)->getXSLTC()))->getNamesIndex());
	if (starGroup != nullptr || atStarGroup != nullptr || this->_childNodeGroup != nullptr || this->_attribNodeGroup != nullptr) {
		int32_t n = $nc(this->_patternGroups)->length;
		for (int32_t i = $DTM::NTYPES; i < n; ++i) {
			if ($nc(this->_patternGroups)->get(i) == nullptr) {
				continue;
			}
			$var($String, name, $cast($String, $nc(names)->get(i - $DTM::NTYPES)));
			if (isAttributeName(name)) {
				completeTestSequences(i, atStarGroup);
				completeTestSequences(i, this->_attribNodeGroup);
			} else {
				completeTestSequences(i, starGroup);
				completeTestSequences(i, this->_childNodeGroup);
			}
		}
	}
	$set(this, _testSeq, $new($TestSeqArray, $DTM::NTYPES + $nc(names)->size()));
	int32_t n = $nc(this->_patternGroups)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($List, patterns, $nc(this->_patternGroups)->get(i));
		if (patterns != nullptr) {
			$var($TestSeq, testSeq, $new($TestSeq, patterns, i, this));
			testSeq->reduce();
			$nc(this->_testSeq)->set(i, testSeq);
			testSeq->findTemplates(this->_neededTemplates);
		}
	}
	if (this->_childNodeGroup != nullptr && $nc(this->_childNodeGroup)->size() > 0) {
		$set(this, _childNodeTestSeq, $new($TestSeq, this->_childNodeGroup, -1, this));
		$nc(this->_childNodeTestSeq)->reduce();
		$nc(this->_childNodeTestSeq)->findTemplates(this->_neededTemplates);
	}
	if (this->_idxGroup != nullptr && $nc(this->_idxGroup)->size() > 0) {
		$set(this, _idxTestSeq, $new($TestSeq, this->_idxGroup, this));
		$nc(this->_idxTestSeq)->reduce();
		$nc(this->_idxTestSeq)->findTemplates(this->_neededTemplates);
	}
	if (this->_rootPattern != nullptr) {
		$nc(this->_neededTemplates)->put($($nc(this->_rootPattern)->getTemplate()), this);
	}
}

void Mode::compileNamedTemplate($Template* template$, $ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$var($String, methodName, $Util::escape($($nc($($nc(template$)->getName()))->toString())));
	int32_t numParams = 0;
	if ($nc(template$)->isSimpleNamedTemplate()) {
		$var($List, parameters, template$->getParameters());
		numParams = $nc(parameters)->size();
	}
	$var($TypeArray, types, $new($TypeArray, 4 + numParams));
	$var($StringArray, names, $new($StringArray, 4 + numParams));
	$init($Constants);
	types->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
	types->set(1, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)));
	types->set(2, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)));
	$init($Type);
	types->set(3, $Type::INT);
	names->set(0, $Constants::DOCUMENT_PNAME);
	names->set(1, $Constants::ITERATOR_PNAME);
	names->set(2, $Constants::TRANSLET_OUTPUT_PNAME);
	names->set(3, $Constants::NODE_PNAME);
	for (int32_t i = 4; i < 4 + numParams; ++i) {
		types->set(i, $($Util::getJCRefType($Constants::OBJECT_SIG)));
		names->set(i, $$str({"param"_s, $($String::valueOf(i - 4))}));
	}
	$var($NamedMethodGenerator, methodGen, $new($NamedMethodGenerator, $Constants::ACC_PUBLIC, $Type::VOID, types, names, methodName, $(getClassName()), il, cpg));
	il->append($($nc(template$)->compile(classGen, methodGen)));
	il->append(static_cast<$Instruction*>($Constants::RETURN));
	classGen->addMethod(static_cast<$MethodGenerator*>(methodGen));
}

void Mode::compileTemplates($ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next) {
	$useLocalCurrentObjectStackCache();
	$var($Set, templates, $nc(this->_namedTemplates)->keySet());
	{
		$var($Iterator, i$, $nc(templates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Template, template$, $cast($Template, i$->next()));
			{
				compileNamedTemplate(template$, classGen);
			}
		}
	}
	$assign(templates, $nc(this->_neededTemplates)->keySet());
	{
		$var($Iterator, i$, templates->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Template, template$, $cast($Template, i$->next()));
			{
				if ($nc(template$)->hasContents()) {
					$var($InstructionList, til, template$->compile(classGen, methodGen));
					$nc(til)->append(static_cast<$BranchInstruction*>($$new($GOTO_W, next)));
					$nc(this->_templateILs)->put(template$, til);
					$nc(this->_templateIHs)->put(template$, $(til->getStart()));
				} else {
					$nc(this->_templateIHs)->put(template$, next);
				}
			}
		}
	}
}

void Mode::appendTemplateCode($InstructionList* body) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->_neededTemplates)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Template, template$, $cast($Template, i$->next()));
			{
				$var($InstructionList, iList, $cast($InstructionList, $nc(this->_templateILs)->get(template$)));
				if (iList != nullptr) {
					$nc(body)->append(iList);
				}
			}
		}
	}
}

void Mode::appendTestSequences($InstructionList* body) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->_testSeq)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($TestSeq, testSeq, $nc(this->_testSeq)->get(i));
		if (testSeq != nullptr) {
			$var($InstructionList, il, testSeq->getInstructionList());
			if (il != nullptr) {
				$nc(body)->append(il);
			}
		}
	}
}

void Mode::compileGetChildren($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t node) {
	$init(Mode);
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t git = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_CHILDREN, $Constants::GET_CHILDREN_SIG);
	$nc(il)->append($(methodGen->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($ILOAD, node)));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, git, 2)));
}

$InstructionList* Mode::compileDefaultRecursion($ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$var($String, applyTemplatesSig, classGen->getApplyTemplatesSig());
	$init($Constants);
	int32_t git = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_CHILDREN, $Constants::GET_CHILDREN_SIG);
	$var($String, var$0, getClassName());
	int32_t applyTemplates = cpg->addMethodref(var$0, $(functionName()), applyTemplatesSig);
	il->append($(classGen->loadTranslet()));
	il->append($($nc(methodGen)->loadDOM()));
	il->append($($nc(methodGen)->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($ILOAD, this->_currentIndex)));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, git, 2)));
	il->append($($nc(methodGen)->loadHandler()));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, applyTemplates)));
	il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, next)));
	return il;
}

$InstructionList* Mode::compileDefaultText($ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$init($Constants);
	int32_t chars = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::CHARACTERS, $Constants::CHARACTERS_SIG);
	il->append($($nc(methodGen)->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($ILOAD, this->_currentIndex)));
	il->append($($nc(methodGen)->loadHandler()));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, chars, 3)));
	il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, next)));
	return il;
}

$InstructionList* Mode::compileNamespaces($ClassGenerator* classGen, $MethodGenerator* methodGen, $booleans* isNamespace, $booleans* isAttribute, bool attrFlag, $InstructionHandle* defaultTarget) {
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc($($nc(classGen)->getParser()))->getXSLTC());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($List, namespaces, $nc(xsltc)->getNamespaceIndex());
	$var($List, names, xsltc->getNamesIndex());
	int32_t namespaceCount = $nc(namespaces)->size() + 1;
	int32_t namesCount = $nc(names)->size();
	$var($InstructionList, il, $new($InstructionList));
	$var($ints, types, $new($ints, namespaceCount));
	$var($InstructionHandleArray, targets, $new($InstructionHandleArray, types->length));
	if (namespaceCount > 0) {
		bool compiled = false;
		for (int32_t i = 0; i < namespaceCount; ++i) {
			targets->set(i, defaultTarget);
			types->set(i, i);
		}
		for (int32_t i = $DTM::NTYPES; i < ($DTM::NTYPES + namesCount); ++i) {
			if (($nc(isNamespace)->get(i)) && ($nc(isAttribute)->get(i) == attrFlag)) {
				$var($String, name, $cast($String, names->get(i - $DTM::NTYPES)));
				$var($String, namespace$, $nc(name)->substring(0, name->lastIndexOf((int32_t)u':')));
				int32_t type = xsltc->registerNamespace(namespace$);
				if ((i < $nc(this->_testSeq)->length) && ($nc(this->_testSeq)->get(i) != nullptr)) {
					targets->set(type, $($nc(($nc(this->_testSeq)->get(i)))->compile(classGen, methodGen, defaultTarget)));
					compiled = true;
				}
			}
		}
		if (!compiled) {
			return (nullptr);
		}
		$init($Constants);
		int32_t getNS = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getNamespaceType"_s, "(I)I"_s);
		il->append($($nc(methodGen)->loadDOM()));
		il->append(static_cast<$Instruction*>($$new($ILOAD, this->_currentIndex)));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getNS, 2)));
		il->append(static_cast<$CompoundInstruction*>($$new($SWITCH, types, targets, defaultTarget)));
		return (il);
	} else {
		return (nullptr);
	}
}

void Mode::compileApplyTemplates($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc($($nc(classGen)->getParser()))->getXSLTC());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($List, names, $nc(xsltc)->getNamesIndex());
	$var($TypeArray, argTypes, $new($TypeArray, 3));
	$init($Constants);
	argTypes->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
	argTypes->set(1, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)));
	argTypes->set(2, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)));
	$var($StringArray, argNames, $new($StringArray, 3));
	argNames->set(0, $Constants::DOCUMENT_PNAME);
	argNames->set(1, $Constants::ITERATOR_PNAME);
	argNames->set(2, $Constants::TRANSLET_OUTPUT_PNAME);
	$var($InstructionList, mainIL, $new($InstructionList));
	int32_t var$0 = $Constants::ACC_PUBLIC | $Constants::ACC_FINAL;
	$init($Type);
	$var($Type, var$1, static_cast<$Type*>($Type::VOID));
	$var($TypeArray, var$2, argTypes);
	$var($StringArray, var$3, argNames);
	$var($String, var$4, functionName());
	$var($String, var$5, getClassName());
	$var($InstructionList, var$6, mainIL);
	$var($MethodGenerator, methodGen, $new($MethodGenerator, var$0, var$1, var$2, var$3, var$4, var$5, var$6, $(classGen->getConstantPool())));
	methodGen->addException("com.sun.org.apache.xalan.internal.xsltc.TransletException"_s);
	mainIL->append($Constants::NOP);
	$var($LocalVariableGen, current, nullptr);
	$assign(current, methodGen->addLocalVariable2("current"_s, $Type::INT, nullptr));
	this->_currentIndex = $nc(current)->getIndex();
	$var($InstructionList, body, $new($InstructionList));
	body->append($Constants::NOP);
	$var($InstructionList, ilLoop, $new($InstructionList));
	ilLoop->append($(methodGen->loadIterator()));
	ilLoop->append($(methodGen->nextNode()));
	ilLoop->append(static_cast<$Instruction*>($Constants::DUP));
	ilLoop->append(static_cast<$Instruction*>($$new($ISTORE, this->_currentIndex)));
	$var($BranchHandle, ifeq, ilLoop->append(static_cast<$BranchInstruction*>($$new($IFLT, nullptr))));
	$var($BranchHandle, loop, ilLoop->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr))));
	$nc(ifeq)->setTarget($(ilLoop->append(static_cast<$Instruction*>($Constants::RETURN))));
	$var($InstructionHandle, ihLoop, ilLoop->getStart());
	current->setStart($(mainIL->append(static_cast<$BranchInstruction*>($$new($GOTO_W, ihLoop)))));
	current->setEnd(loop);
	$var($InstructionList, ilRecurse, compileDefaultRecursion(classGen, methodGen, ihLoop));
	$var($InstructionHandle, ihRecurse, $nc(ilRecurse)->getStart());
	$var($InstructionList, ilText, compileDefaultText(classGen, methodGen, ihLoop));
	$var($InstructionHandle, ihText, $nc(ilText)->getStart());
	$var($ints, types, $new($ints, $DTM::NTYPES + $nc(names)->size()));
	for (int32_t i = 0; i < types->length; ++i) {
		types->set(i, i);
	}
	$var($booleans, isAttribute, $new($booleans, types->length));
	$var($booleans, isNamespace, $new($booleans, types->length));
	for (int32_t i = 0; i < names->size(); ++i) {
		$var($String, name, $cast($String, names->get(i)));
		isAttribute->set(i + $DTM::NTYPES, isAttributeName(name));
		isNamespace->set(i + $DTM::NTYPES, isNamespaceName(name));
	}
	compileTemplates(classGen, methodGen, ihLoop);
	$var($TestSeq, elemTest, $nc(this->_testSeq)->get($DTM::ELEMENT_NODE));
	$var($InstructionHandle, ihElem, ihRecurse);
	if (elemTest != nullptr) {
		$assign(ihElem, elemTest->compile(classGen, methodGen, ihRecurse));
	}
	$var($TestSeq, attrTest, $nc(this->_testSeq)->get($DTM::ATTRIBUTE_NODE));
	$var($InstructionHandle, ihAttr, ihText);
	if (attrTest != nullptr) {
		$assign(ihAttr, attrTest->compile(classGen, methodGen, ihAttr));
	}
	$var($InstructionList, ilKey, nullptr);
	if (this->_idxTestSeq != nullptr) {
		$nc(loop)->setTarget($($nc(this->_idxTestSeq)->compile(classGen, methodGen, $(body->getStart()))));
		$assign(ilKey, $nc(this->_idxTestSeq)->getInstructionList());
	} else {
		$nc(loop)->setTarget($(body->getStart()));
	}
	if (this->_childNodeTestSeq != nullptr) {
		double nodePrio = $nc(this->_childNodeTestSeq)->getPriority();
		int32_t nodePos = $nc(this->_childNodeTestSeq)->getPosition();
		$init($Double);
		double elemPrio = (0 - $Double::MAX_VALUE);
		int32_t elemPos = $Integer::MIN_VALUE;
		if (elemTest != nullptr) {
			elemPrio = elemTest->getPriority();
			elemPos = elemTest->getPosition();
		}
		if (elemPrio == $Double::NaN || elemPrio < nodePrio || (elemPrio == nodePrio && elemPos < nodePos)) {
			$assign(ihElem, $nc(this->_childNodeTestSeq)->compile(classGen, methodGen, ihLoop));
		}
		$var($TestSeq, textTest, $nc(this->_testSeq)->get($DTM::TEXT_NODE));
		double textPrio = (0 - $Double::MAX_VALUE);
		int32_t textPos = $Integer::MIN_VALUE;
		if (textTest != nullptr) {
			textPrio = textTest->getPriority();
			textPos = textTest->getPosition();
		}
		if (textPrio == $Double::NaN || textPrio < nodePrio || (textPrio == nodePrio && textPos < nodePos)) {
			$assign(ihText, $nc(this->_childNodeTestSeq)->compile(classGen, methodGen, ihLoop));
			$nc(this->_testSeq)->set($DTM::TEXT_NODE, this->_childNodeTestSeq);
		}
	}
	$var($InstructionHandle, elemNamespaceHandle, ihElem);
	$var($InstructionList, nsElem, compileNamespaces(classGen, methodGen, isNamespace, isAttribute, false, ihElem));
	if (nsElem != nullptr) {
		$assign(elemNamespaceHandle, nsElem->getStart());
	}
	$var($InstructionHandle, attrNamespaceHandle, ihAttr);
	$var($InstructionList, nsAttr, compileNamespaces(classGen, methodGen, isNamespace, isAttribute, true, ihAttr));
	if (nsAttr != nullptr) {
		$assign(attrNamespaceHandle, nsAttr->getStart());
	}
	$var($InstructionHandleArray, targets, $new($InstructionHandleArray, types->length));
	for (int32_t i = $DTM::NTYPES; i < targets->length; ++i) {
		$var($TestSeq, testSeq, $nc(this->_testSeq)->get(i));
		if (isNamespace->get(i)) {
			if (isAttribute->get(i)) {
				targets->set(i, attrNamespaceHandle);
			} else {
				targets->set(i, elemNamespaceHandle);
			}
		} else if (testSeq != nullptr) {
			if (isAttribute->get(i)) {
				targets->set(i, $(testSeq->compile(classGen, methodGen, attrNamespaceHandle)));
			} else {
				targets->set(i, $(testSeq->compile(classGen, methodGen, elemNamespaceHandle)));
			}
		} else {
			targets->set(i, ihLoop);
		}
	}
	targets->set($DTM::ROOT_NODE, this->_rootPattern != nullptr ? $(getTemplateInstructionHandle($($nc(this->_rootPattern)->getTemplate()))) : ihRecurse);
	targets->set($DTM::DOCUMENT_NODE, this->_rootPattern != nullptr ? $(getTemplateInstructionHandle($($nc(this->_rootPattern)->getTemplate()))) : ihRecurse);
	targets->set($DTM::TEXT_NODE, $nc(this->_testSeq)->get($DTM::TEXT_NODE) != nullptr ? $($nc($nc(this->_testSeq)->get($DTM::TEXT_NODE))->compile(classGen, methodGen, ihText)) : ihText);
	targets->set($DTM::NAMESPACE_NODE, ihLoop);
	targets->set($DTM::ELEMENT_NODE, elemNamespaceHandle);
	targets->set($DTM::ATTRIBUTE_NODE, attrNamespaceHandle);
	$var($InstructionHandle, ihPI, ihLoop);
	if (this->_childNodeTestSeq != nullptr) {
		$assign(ihPI, ihElem);
	}
	if ($nc(this->_testSeq)->get($DTM::PROCESSING_INSTRUCTION_NODE) != nullptr) {
		targets->set($DTM::PROCESSING_INSTRUCTION_NODE, $($nc($nc(this->_testSeq)->get($DTM::PROCESSING_INSTRUCTION_NODE))->compile(classGen, methodGen, ihPI)));
	} else {
		targets->set($DTM::PROCESSING_INSTRUCTION_NODE, ihPI);
	}
	$var($InstructionHandle, ihComment, ihLoop);
	if (this->_childNodeTestSeq != nullptr) {
		$assign(ihComment, ihElem);
	}
	targets->set($DTM::COMMENT_NODE, $nc(this->_testSeq)->get($DTM::COMMENT_NODE) != nullptr ? $($nc($nc(this->_testSeq)->get($DTM::COMMENT_NODE))->compile(classGen, methodGen, ihComment)) : ihComment);
	targets->set($DTM::CDATA_SECTION_NODE, ihLoop);
	targets->set($DTM::DOCUMENT_FRAGMENT_NODE, ihLoop);
	targets->set($DTM::DOCUMENT_TYPE_NODE, ihLoop);
	targets->set($DTM::ENTITY_NODE, ihLoop);
	targets->set($DTM::ENTITY_REFERENCE_NODE, ihLoop);
	targets->set($DTM::NOTATION_NODE, ihLoop);
	for (int32_t i = $DTM::NTYPES; i < targets->length; ++i) {
		$var($TestSeq, testSeq, $nc(this->_testSeq)->get(i));
		if ((testSeq == nullptr) || (isNamespace->get(i))) {
			if (isAttribute->get(i)) {
				targets->set(i, attrNamespaceHandle);
			} else {
				targets->set(i, elemNamespaceHandle);
			}
		} else if (isAttribute->get(i)) {
			targets->set(i, $($nc(testSeq)->compile(classGen, methodGen, attrNamespaceHandle)));
		} else {
			targets->set(i, $($nc(testSeq)->compile(classGen, methodGen, elemNamespaceHandle)));
		}
	}
	if (ilKey != nullptr) {
		body->insert(ilKey);
	}
	int32_t getType = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
	body->append($(methodGen->loadDOM()));
	body->append(static_cast<$Instruction*>($$new($ILOAD, this->_currentIndex)));
	body->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getType, 2)));
	$var($InstructionHandle, disp, body->append(static_cast<$CompoundInstruction*>($$new($SWITCH, types, targets, ihLoop))));
	appendTestSequences(body);
	appendTemplateCode(body);
	if (nsElem != nullptr) {
		body->append(nsElem);
	}
	if (nsAttr != nullptr) {
		body->append(nsAttr);
	}
	body->append(ilRecurse);
	body->append(ilText);
	mainIL->append(body);
	mainIL->append(ilLoop);
	peepHoleOptimization(methodGen);
	classGen->addMethod(methodGen);
	if (this->_importLevels != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc(this->_importLevels)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($ClassGenerator, var$7, classGen);
					int32_t var$8 = $nc(($cast($Integer, $($nc(entry)->getValue()))))->intValue();
					compileApplyImports(var$7, var$8, $nc(($cast($Integer, $(entry->getKey()))))->intValue());
				}
			}
		}
	}
}

void Mode::compileTemplateCalls($ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next, int32_t min, int32_t max) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc(this->_neededTemplates)->keySet()))->stream()))->forEach(static_cast<$Consumer*>($$new(Mode$$Lambda$lambda$compileTemplateCalls$0, this, min, max, classGen, methodGen, next)));
}

void Mode::compileApplyImports($ClassGenerator* classGen, int32_t min, int32_t max) {
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc($($nc(classGen)->getParser()))->getXSLTC());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($List, names, $nc(xsltc)->getNamesIndex());
	$set(this, _namedTemplates, $new($HashMap));
	$set(this, _neededTemplates, $new($HashMap));
	$set(this, _templateIHs, $new($HashMap));
	$set(this, _templateILs, $new($HashMap));
	$set(this, _patternGroups, $fcast($ListArray, $new($ArrayListArray, 32)));
	$set(this, _rootPattern, nullptr);
	$var($List, oldTemplates, this->_templates);
	$set(this, _templates, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(oldTemplates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Template, template$, $cast($Template, i$->next()));
			{
				int32_t prec = $nc(template$)->getImportPrecedence();
				if ((prec >= min) && (prec < max)) {
					addTemplate(template$);
				}
			}
		}
	}
	processPatterns(this->_keys);
	$var($TypeArray, argTypes, $new($TypeArray, 4));
	$init($Constants);
	argTypes->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
	argTypes->set(1, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)));
	argTypes->set(2, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)));
	$init($Type);
	argTypes->set(3, $Type::INT);
	$var($StringArray, argNames, $new($StringArray, 4));
	argNames->set(0, $Constants::DOCUMENT_PNAME);
	argNames->set(1, $Constants::ITERATOR_PNAME);
	argNames->set(2, $Constants::TRANSLET_OUTPUT_PNAME);
	argNames->set(3, $Constants::NODE_PNAME);
	$var($InstructionList, mainIL, $new($InstructionList));
	int32_t var$0 = $Constants::ACC_PUBLIC | $Constants::ACC_FINAL;
	$var($Type, var$1, static_cast<$Type*>($Type::VOID));
	$var($TypeArray, var$2, argTypes);
	$var($StringArray, var$3, argNames);
	$var($String, var$4, $str({$(functionName()), $$str(u'_'), $$str(max)}));
	$var($String, var$5, getClassName());
	$var($InstructionList, var$6, mainIL);
	$var($MethodGenerator, methodGen, $new($MethodGenerator, var$0, var$1, var$2, var$3, var$4, var$5, var$6, $(classGen->getConstantPool())));
	methodGen->addException("com.sun.org.apache.xalan.internal.xsltc.TransletException"_s);
	$var($LocalVariableGen, current, nullptr);
	$assign(current, methodGen->addLocalVariable2("current"_s, $Type::INT, nullptr));
	this->_currentIndex = $nc(current)->getIndex();
	mainIL->append(static_cast<$Instruction*>($$new($ILOAD, methodGen->getLocalIndex($Constants::NODE_PNAME))));
	current->setStart($(mainIL->append(static_cast<$Instruction*>($$new($ISTORE, this->_currentIndex)))));
	$var($InstructionList, body, $new($InstructionList));
	body->append($Constants::NOP);
	$var($InstructionList, ilLoop, $new($InstructionList));
	ilLoop->append(static_cast<$Instruction*>($Constants::RETURN));
	$var($InstructionHandle, ihLoop, ilLoop->getStart());
	$var($InstructionList, ilRecurse, compileDefaultRecursion(classGen, methodGen, ihLoop));
	$var($InstructionHandle, ihRecurse, $nc(ilRecurse)->getStart());
	$var($InstructionList, ilText, compileDefaultText(classGen, methodGen, ihLoop));
	$var($InstructionHandle, ihText, $nc(ilText)->getStart());
	$var($ints, types, $new($ints, $DTM::NTYPES + $nc(names)->size()));
	for (int32_t i = 0; i < types->length; ++i) {
		types->set(i, i);
	}
	$var($booleans, isAttribute, $new($booleans, types->length));
	$var($booleans, isNamespace, $new($booleans, types->length));
	for (int32_t i = 0; i < names->size(); ++i) {
		$var($String, name, $cast($String, names->get(i)));
		isAttribute->set(i + $DTM::NTYPES, isAttributeName(name));
		isNamespace->set(i + $DTM::NTYPES, isNamespaceName(name));
	}
	compileTemplateCalls(classGen, methodGen, ihLoop, min, max);
	$var($TestSeq, elemTest, $nc(this->_testSeq)->get($DTM::ELEMENT_NODE));
	$var($InstructionHandle, ihElem, ihRecurse);
	if (elemTest != nullptr) {
		$assign(ihElem, elemTest->compile(classGen, methodGen, ihLoop));
	}
	$var($TestSeq, attrTest, $nc(this->_testSeq)->get($DTM::ATTRIBUTE_NODE));
	$var($InstructionHandle, ihAttr, ihLoop);
	if (attrTest != nullptr) {
		$assign(ihAttr, attrTest->compile(classGen, methodGen, ihAttr));
	}
	$var($InstructionList, ilKey, nullptr);
	if (this->_idxTestSeq != nullptr) {
		$assign(ilKey, $nc(this->_idxTestSeq)->getInstructionList());
	}
	if (this->_childNodeTestSeq != nullptr) {
		double nodePrio = $nc(this->_childNodeTestSeq)->getPriority();
		int32_t nodePos = $nc(this->_childNodeTestSeq)->getPosition();
		$init($Double);
		double elemPrio = (0 - $Double::MAX_VALUE);
		int32_t elemPos = $Integer::MIN_VALUE;
		if (elemTest != nullptr) {
			elemPrio = elemTest->getPriority();
			elemPos = elemTest->getPosition();
		}
		if (elemPrio == $Double::NaN || elemPrio < nodePrio || (elemPrio == nodePrio && elemPos < nodePos)) {
			$assign(ihElem, $nc(this->_childNodeTestSeq)->compile(classGen, methodGen, ihLoop));
		}
		$var($TestSeq, textTest, $nc(this->_testSeq)->get($DTM::TEXT_NODE));
		double textPrio = (0 - $Double::MAX_VALUE);
		int32_t textPos = $Integer::MIN_VALUE;
		if (textTest != nullptr) {
			textPrio = textTest->getPriority();
			textPos = textTest->getPosition();
		}
		if (textPrio == $Double::NaN || textPrio < nodePrio || (textPrio == nodePrio && textPos < nodePos)) {
			$assign(ihText, $nc(this->_childNodeTestSeq)->compile(classGen, methodGen, ihLoop));
			$nc(this->_testSeq)->set($DTM::TEXT_NODE, this->_childNodeTestSeq);
		}
	}
	$var($InstructionHandle, elemNamespaceHandle, ihElem);
	$var($InstructionList, nsElem, compileNamespaces(classGen, methodGen, isNamespace, isAttribute, false, ihElem));
	if (nsElem != nullptr) {
		$assign(elemNamespaceHandle, nsElem->getStart());
	}
	$var($InstructionList, nsAttr, compileNamespaces(classGen, methodGen, isNamespace, isAttribute, true, ihAttr));
	$var($InstructionHandle, attrNamespaceHandle, ihAttr);
	if (nsAttr != nullptr) {
		$assign(attrNamespaceHandle, nsAttr->getStart());
	}
	$var($InstructionHandleArray, targets, $new($InstructionHandleArray, types->length));
	for (int32_t i = $DTM::NTYPES; i < targets->length; ++i) {
		$var($TestSeq, testSeq, $nc(this->_testSeq)->get(i));
		if (isNamespace->get(i)) {
			if (isAttribute->get(i)) {
				targets->set(i, attrNamespaceHandle);
			} else {
				targets->set(i, elemNamespaceHandle);
			}
		} else if (testSeq != nullptr) {
			if (isAttribute->get(i)) {
				targets->set(i, $(testSeq->compile(classGen, methodGen, attrNamespaceHandle)));
			} else {
				targets->set(i, $(testSeq->compile(classGen, methodGen, elemNamespaceHandle)));
			}
		} else {
			targets->set(i, ihLoop);
		}
	}
	targets->set($DTM::ROOT_NODE, this->_rootPattern != nullptr ? $(getTemplateInstructionHandle($($nc(this->_rootPattern)->getTemplate()))) : ihRecurse);
	targets->set($DTM::DOCUMENT_NODE, this->_rootPattern != nullptr ? $(getTemplateInstructionHandle($($nc(this->_rootPattern)->getTemplate()))) : ihRecurse);
	targets->set($DTM::TEXT_NODE, $nc(this->_testSeq)->get($DTM::TEXT_NODE) != nullptr ? $($nc($nc(this->_testSeq)->get($DTM::TEXT_NODE))->compile(classGen, methodGen, ihText)) : ihText);
	targets->set($DTM::NAMESPACE_NODE, ihLoop);
	targets->set($DTM::ELEMENT_NODE, elemNamespaceHandle);
	targets->set($DTM::ATTRIBUTE_NODE, attrNamespaceHandle);
	$var($InstructionHandle, ihPI, ihLoop);
	if (this->_childNodeTestSeq != nullptr) {
		$assign(ihPI, ihElem);
	}
	if ($nc(this->_testSeq)->get($DTM::PROCESSING_INSTRUCTION_NODE) != nullptr) {
		targets->set($DTM::PROCESSING_INSTRUCTION_NODE, $($nc($nc(this->_testSeq)->get($DTM::PROCESSING_INSTRUCTION_NODE))->compile(classGen, methodGen, ihPI)));
	} else {
		targets->set($DTM::PROCESSING_INSTRUCTION_NODE, ihPI);
	}
	$var($InstructionHandle, ihComment, ihLoop);
	if (this->_childNodeTestSeq != nullptr) {
		$assign(ihComment, ihElem);
	}
	targets->set($DTM::COMMENT_NODE, $nc(this->_testSeq)->get($DTM::COMMENT_NODE) != nullptr ? $($nc($nc(this->_testSeq)->get($DTM::COMMENT_NODE))->compile(classGen, methodGen, ihComment)) : ihComment);
	targets->set($DTM::CDATA_SECTION_NODE, ihLoop);
	targets->set($DTM::DOCUMENT_FRAGMENT_NODE, ihLoop);
	targets->set($DTM::DOCUMENT_TYPE_NODE, ihLoop);
	targets->set($DTM::ENTITY_NODE, ihLoop);
	targets->set($DTM::ENTITY_REFERENCE_NODE, ihLoop);
	targets->set($DTM::NOTATION_NODE, ihLoop);
	for (int32_t i = $DTM::NTYPES; i < targets->length; ++i) {
		$var($TestSeq, testSeq, $nc(this->_testSeq)->get(i));
		if ((testSeq == nullptr) || (isNamespace->get(i))) {
			if (isAttribute->get(i)) {
				targets->set(i, attrNamespaceHandle);
			} else {
				targets->set(i, elemNamespaceHandle);
			}
		} else if (isAttribute->get(i)) {
			targets->set(i, $($nc(testSeq)->compile(classGen, methodGen, attrNamespaceHandle)));
		} else {
			targets->set(i, $($nc(testSeq)->compile(classGen, methodGen, elemNamespaceHandle)));
		}
	}
	if (ilKey != nullptr) {
		body->insert(ilKey);
	}
	int32_t getType = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
	body->append($(methodGen->loadDOM()));
	body->append(static_cast<$Instruction*>($$new($ILOAD, this->_currentIndex)));
	body->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getType, 2)));
	$var($InstructionHandle, disp, body->append(static_cast<$CompoundInstruction*>($$new($SWITCH, types, targets, ihLoop))));
	appendTestSequences(body);
	appendTemplateCode(body);
	if (nsElem != nullptr) {
		body->append(nsElem);
	}
	if (nsAttr != nullptr) {
		body->append(nsAttr);
	}
	body->append(ilRecurse);
	body->append(ilText);
	mainIL->append(body);
	current->setEnd($(body->getEnd()));
	mainIL->append(ilLoop);
	peepHoleOptimization(methodGen);
	classGen->addMethod(methodGen);
	$set(this, _templates, oldTemplates);
}

void Mode::peepHoleOptimization($MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($InstructionFinder, find, $new($InstructionFinder, il));
	$var($InstructionHandle, ih, nullptr);
	$var($String, pattern, nullptr);
	$assign(pattern, "loadinstruction pop"_s);
	{
		$var($Iterator, iter, find->search(pattern));
		for (; $nc(iter)->hasNext();) {
			$var($InstructionHandleArray, match, $cast($InstructionHandleArray, iter->next()));
			try {
				bool var$0 = !$nc($nc(match)->get(0))->hasTargeters();
				if (var$0 && !$nc(match->get(1))->hasTargeters()) {
					$nc(il)->delete$(match->get(0), match->get(1));
				}
			} catch ($TargetLostException& e) {
			}
		}
	}
	$assign(pattern, "iload iload swap istore"_s);
	{
		$var($Iterator, iter, find->search(pattern));
		for (; $nc(iter)->hasNext();) {
			$var($InstructionHandleArray, match, $cast($InstructionHandleArray, iter->next()));
			try {
				$var($ILOAD, iload1, $cast($ILOAD, $nc($nc(match)->get(0))->getInstruction()));
				$var($ILOAD, iload2, $cast($ILOAD, $nc(match->get(1))->getInstruction()));
				$var($ISTORE, istore, $cast($ISTORE, $nc(match->get(3))->getInstruction()));
				bool var$4 = !$nc(match->get(1))->hasTargeters();
				bool var$3 = var$4 && !$nc(match->get(2))->hasTargeters();
				bool var$2 = var$3 && !$nc(match->get(3))->hasTargeters();
				if (var$2) {
					int32_t var$5 = $nc(iload1)->getIndex();
					var$2 = var$5 == $nc(iload2)->getIndex();
				}
				bool var$1 = var$2;
				if (var$1) {
					int32_t var$6 = iload2->getIndex();
					var$1 = var$6 == $nc(istore)->getIndex();
				}
				if (var$1) {
					$nc(il)->delete$(match->get(1), match->get(3));
				}
			} catch ($TargetLostException& e) {
			}
		}
	}
	$assign(pattern, "loadinstruction loadinstruction swap"_s);
	{
		$var($Iterator, iter, find->search(pattern));
		for (; $nc(iter)->hasNext();) {
			$var($InstructionHandleArray, match, $cast($InstructionHandleArray, iter->next()));
			try {
				bool var$8 = !$nc($nc(match)->get(0))->hasTargeters();
				bool var$7 = var$8 && !$nc(match->get(1))->hasTargeters();
				if (var$7 && !$nc(match->get(2))->hasTargeters()) {
					$var($Instruction, load_m, $nc(match->get(1))->getInstruction());
					$nc(il)->insert(match->get(0), load_m);
					il->delete$(match->get(1), match->get(2));
				}
			} catch ($TargetLostException& e) {
			}
		}
	}
	$assign(pattern, "aload aload"_s);
	{
		$var($Iterator, iter, find->search(pattern));
		for (; $nc(iter)->hasNext();) {
			$var($InstructionHandleArray, match, $cast($InstructionHandleArray, iter->next()));
			try {
				if (!$nc($nc(match)->get(1))->hasTargeters()) {
					$var($ALOAD, aload1, $cast($ALOAD, $nc(match->get(0))->getInstruction()));
					$var($ALOAD, aload2, $cast($ALOAD, $nc(match->get(1))->getInstruction()));
					int32_t var$9 = $nc(aload1)->getIndex();
					if (var$9 == $nc(aload2)->getIndex()) {
						$nc(il)->insert(match->get(1), static_cast<$Instruction*>($$new($DUP)));
						il->delete$(match->get(1));
					}
				}
			} catch ($TargetLostException& e) {
			}
		}
	}
}

$InstructionHandle* Mode::getTemplateInstructionHandle($Template* template$) {
	return $cast($InstructionHandle, $nc(this->_templateIHs)->get(template$));
}

bool Mode::isAttributeName($String* qname) {
	$init(Mode);
	int32_t col = $nc(qname)->lastIndexOf((int32_t)u':') + 1;
	return (qname->charAt(col) == u'@');
}

bool Mode::isNamespaceName($String* qname) {
	$init(Mode);
	int32_t col = $nc(qname)->lastIndexOf((int32_t)u':');
	return (col > -1 && qname->charAt(qname->length() - 1) == u'*');
}

void Mode::lambda$compileTemplateCalls$0(int32_t min, int32_t max, $ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* next, $Template* template$) {
	$useLocalCurrentObjectStackCache();
	int32_t prec = $nc(template$)->getImportPrecedence();
	if ((prec >= min) && (prec < max)) {
		if (template$->hasContents()) {
			$var($InstructionList, til, template$->compile(classGen, methodGen));
			$nc(til)->append(static_cast<$BranchInstruction*>($$new($GOTO_W, next)));
			$nc(this->_templateILs)->put(template$, til);
			$nc(this->_templateIHs)->put(template$, $(til->getStart()));
		} else {
			$nc(this->_templateIHs)->put(template$, next);
		}
	}
}

Mode::Mode() {
}

$Class* Mode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Mode$$Lambda$lambda$compileTemplateCalls$0::classInfo$.name)) {
			return Mode$$Lambda$lambda$compileTemplateCalls$0::load$(name, initialize);
		}
	}
	$loadClass(Mode, name, initialize, &_Mode_ClassInfo_, allocate$Mode);
	return class$;
}

$Class* Mode::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com