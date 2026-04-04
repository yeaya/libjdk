#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/lang/StringBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PUBLIC
#undef BOOLEAN
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef EMPTYSTRING
#undef ICONST_0
#undef ICONST_1
#undef INT
#undef IRETURN
#undef PRESERVE_SPACE
#undef REQUIRED_ATTR_ERR
#undef RULE_ALL
#undef RULE_ELEMENT
#undef RULE_NAMESPACE
#undef RULE_NONE
#undef STRIP_SPACE
#undef USE_PREDICATE

using $BranchHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::BranchHandle>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $Whitespace$WhitespaceRule = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace$WhitespaceRule;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

void Whitespace::init$() {
	$TopLevelElement::init$();
}

void Whitespace::parseContents($Parser* parser) {
	$useLocalObjectStack();
	this->_action = $$nc($nc(this->_qname)->getLocalPart())->endsWith("strip-space"_s) ? Whitespace::STRIP_SPACE : Whitespace::PRESERVE_SPACE;
	this->_importPrecedence = $nc(parser)->getCurrentImportPrecedence();
	$set(this, _elementList, getAttribute("elements"_s));
	if (this->_elementList == nullptr || this->_elementList->length() == 0) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "elements"_s);
		return;
	}
	$var($SymbolTable, stable, parser->getSymbolTable());
	$var($StringTokenizer, list, $new($StringTokenizer, this->_elementList));
	$init($Constants);
	$var($StringBuffer, elements, $new($StringBuffer, $Constants::EMPTYSTRING));
	while (list->hasMoreElements()) {
		$var($String, token, list->nextToken());
		$var($String, prefix, nullptr);
		$var($String, namespace$, nullptr);
		int32_t col = $nc(token)->indexOf(u':');
		if (col != -1) {
			$assign(namespace$, lookupNamespace($(token->substring(0, col))));
			if (namespace$ != nullptr) {
				elements->append(namespace$)->append(u':')->append($(token->substring(col + 1)));
			} else {
				elements->append(token);
			}
		} else {
			elements->append(token);
		}
		if (list->hasMoreElements()) {
			elements->append(" "_s);
		}
	}
	$set(this, _elementList, elements->toString());
}

$List* Whitespace::getRules() {
	$useLocalObjectStack();
	$var($List, rules, $new($ArrayList));
	$var($StringTokenizer, list, $new($StringTokenizer, this->_elementList));
	while (list->hasMoreElements()) {
		rules->add($$new($Whitespace$WhitespaceRule, this->_action, $(list->nextToken()), this->_importPrecedence));
	}
	return rules;
}

$Whitespace$WhitespaceRule* Whitespace::findContradictingRule($List* rules, $Whitespace$WhitespaceRule* rule) {
	$init(Whitespace);
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(rules)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Whitespace$WhitespaceRule, currentRule, $cast($Whitespace$WhitespaceRule, i$->next()));
		{
			if (currentRule == rule) {
				return nullptr;
			}
			switch ($nc(currentRule)->getStrength()) {
			case Whitespace::RULE_ALL:
				return currentRule;
			case Whitespace::RULE_ELEMENT:
				if (!$$nc($nc(rule)->getElement())->equals($(currentRule->getElement()))) {
					break;
				}
			case Whitespace::RULE_NAMESPACE:
				if ($$nc($nc(rule)->getNamespace())->equals($(currentRule->getNamespace()))) {
					return currentRule;
				}
				break;
			}
		}
	}
	return nullptr;
}

int32_t Whitespace::prioritizeRules($List* rules) {
	$init(Whitespace);
	$var($Whitespace$WhitespaceRule, currentRule, nullptr);
	int32_t defaultAction = Whitespace::PRESERVE_SPACE;
	quicksort(rules, 0, $nc(rules)->size() - 1);
	bool strip = false;
	for (int32_t i = 0; i < rules->size(); ++i) {
		$assign(currentRule, $cast($Whitespace$WhitespaceRule, rules->get(i)));
		if ($nc(currentRule)->getAction() == Whitespace::STRIP_SPACE) {
			strip = true;
		}
	}
	if (!strip) {
		rules->clear();
		return Whitespace::PRESERVE_SPACE;
	}
	for (int32_t idx = 0; idx < rules->size();) {
		$assign(currentRule, $cast($Whitespace$WhitespaceRule, rules->get(idx)));
		if (findContradictingRule(rules, currentRule) != nullptr) {
			rules->remove(idx);
		} else {
			if ($nc(currentRule)->getStrength() == Whitespace::RULE_ALL) {
				defaultAction = currentRule->getAction();
				for (int32_t i = idx; i < rules->size(); ++i) {
					rules->remove(i);
				}
			}
			++idx;
		}
	}
	if (rules->isEmpty()) {
		return defaultAction;
	}
	do {
		$assign(currentRule, $cast($Whitespace$WhitespaceRule, rules->get(rules->size() - 1)));
		if ($nc(currentRule)->getAction() == defaultAction) {
			rules->remove(rules->size() - 1);
		} else {
			break;
		}
	} while (rules->size() > 0);
	return defaultAction;
}

void Whitespace::compileStripSpace($BranchHandleArray* strip, int32_t sCount, $InstructionList* il) {
	$init(Whitespace);
	$init($Constants);
	$var($InstructionHandle, target, $nc(il)->append($Constants::ICONST_1));
	il->append($Constants::IRETURN);
	for (int32_t i = 0; i < sCount; ++i) {
		$nc($nc(strip)->get(i))->setTarget(target);
	}
}

void Whitespace::compilePreserveSpace($BranchHandleArray* preserve, int32_t pCount, $InstructionList* il) {
	$init(Whitespace);
	$init($Constants);
	$var($InstructionHandle, target, $nc(il)->append($Constants::ICONST_0));
	il->append($Constants::IRETURN);
	for (int32_t i = 0; i < pCount; ++i) {
		$nc($nc(preserve)->get(i))->setTarget(target);
	}
}

void Whitespace::compilePredicate($List* rules, int32_t defaultAction, $ClassGenerator* classGen) {
	$init(Whitespace);
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$var($XSLTC, xsltc, $$nc(classGen->getParser())->getXSLTC());
	$init($Type);
	$var($Type, var$0, $Type::BOOLEAN);
	$init($Constants);
	$var($TypeArray, var$1, $new($TypeArray, {
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$Type::INT,
		$Type::INT
	}));
	$var($StringArray, var$2, $new($StringArray, {
		"dom"_s,
		"node"_s,
		"type"_s
	}));
	$var($String, var$3, "stripSpace"_s);
	$var($MethodGenerator, stripSpace, $new($MethodGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, var$0, var$1, var$2, var$3, $(classGen->getClassName()), il, cpg));
	classGen->addInterface("com/sun/org/apache/xalan/internal/xsltc/StripFilter"_s);
	int32_t paramDom = stripSpace->getLocalIndex("dom"_s);
	int32_t paramCurrent = stripSpace->getLocalIndex("node"_s);
	int32_t paramType = stripSpace->getLocalIndex("type"_s);
	$var($BranchHandleArray, strip, $new($BranchHandleArray, $nc(rules)->size()));
	$var($BranchHandleArray, preserve, $new($BranchHandleArray, rules->size()));
	int32_t sCount = 0;
	int32_t pCount = 0;
	for (int32_t i = 0; i < rules->size(); ++i) {
		$var($Whitespace$WhitespaceRule, rule, $cast($Whitespace$WhitespaceRule, rules->get(i)));
		int32_t gns = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getNamespaceName"_s, "(I)Ljava/lang/String;"_s);
		int32_t strcmp = cpg->addMethodref("java/lang/String"_s, "compareTo"_s, "(Ljava/lang/String;)I"_s);
		if ($nc(rule)->getStrength() == Whitespace::RULE_NAMESPACE) {
			il->append($$new($ALOAD, paramDom));
			il->append($$new($ILOAD, paramCurrent));
			il->append($$new($INVOKEINTERFACE, gns, 2));
			il->append($$new($PUSH, cpg, $(rule->getNamespace())));
			il->append($$new($INVOKEVIRTUAL, strcmp));
			il->append($Constants::ICONST_0);
			if (rule->getAction() == Whitespace::STRIP_SPACE) {
				strip->set(sCount++, $(il->append($$new($IF_ICMPEQ, nullptr))));
			} else {
				preserve->set(pCount++, $(il->append($$new($IF_ICMPEQ, nullptr))));
			}
		} else if (rule->getStrength() == Whitespace::RULE_ELEMENT) {
			$var($Parser, parser, classGen->getParser());
			$var($QName, qname, nullptr);
			if (rule->getNamespace() != $Constants::EMPTYSTRING) {
				$var($String, var$4, rule->getNamespace());
				$assign(qname, $nc(parser)->getQName(var$4, nullptr, $(rule->getElement())));
			} else {
				$assign(qname, $nc(parser)->getQName($(rule->getElement())));
			}
			int32_t elementType = $nc(xsltc)->registerElement(qname);
			il->append($$new($ILOAD, paramType));
			il->append($$new($PUSH, cpg, elementType));
			if (rule->getAction() == Whitespace::STRIP_SPACE) {
				strip->set(sCount++, $(il->append($$new($IF_ICMPEQ, nullptr))));
			} else {
				preserve->set(pCount++, $(il->append($$new($IF_ICMPEQ, nullptr))));
			}
		}
	}
	if (defaultAction == Whitespace::STRIP_SPACE) {
		compileStripSpace(strip, sCount, il);
		compilePreserveSpace(preserve, pCount, il);
	} else {
		compilePreserveSpace(preserve, pCount, il);
		compileStripSpace(strip, sCount, il);
	}
	classGen->addMethod(stripSpace);
}

void Whitespace::compileDefault(int32_t defaultAction, $ClassGenerator* classGen) {
	$init(Whitespace);
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $new($InstructionList));
	$var($XSLTC, xsltc, $$nc(classGen->getParser())->getXSLTC());
	$init($Type);
	$var($Type, var$0, $Type::BOOLEAN);
	$init($Constants);
	$var($TypeArray, var$1, $new($TypeArray, {
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$Type::INT,
		$Type::INT
	}));
	$var($StringArray, var$2, $new($StringArray, {
		"dom"_s,
		"node"_s,
		"type"_s
	}));
	$var($String, var$3, "stripSpace"_s);
	$var($MethodGenerator, stripSpace, $new($MethodGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, var$0, var$1, var$2, var$3, $(classGen->getClassName()), il, cpg));
	classGen->addInterface("com/sun/org/apache/xalan/internal/xsltc/StripFilter"_s);
	if (defaultAction == Whitespace::STRIP_SPACE) {
		il->append($Constants::ICONST_1);
	} else {
		il->append($Constants::ICONST_0);
	}
	il->append($Constants::IRETURN);
	classGen->addMethod(stripSpace);
}

int32_t Whitespace::translateRules($List* rules, $ClassGenerator* classGen) {
	$init(Whitespace);
	int32_t defaultAction = prioritizeRules(rules);
	if ($nc(rules)->size() == 0) {
		compileDefault(defaultAction, classGen);
		return defaultAction;
	}
	compilePredicate(rules, defaultAction, classGen);
	return Whitespace::USE_PREDICATE;
}

void Whitespace::quicksort($List* rules, int32_t p, int32_t r) {
	$init(Whitespace);
	while (p < r) {
		int32_t q = partition(rules, p, r);
		quicksort(rules, p, q);
		p = q + 1;
	}
}

int32_t Whitespace::partition($List* rules, int32_t p, int32_t r) {
	$init(Whitespace);
	$useLocalObjectStack();
	$var($Whitespace$WhitespaceRule, x, $cast($Whitespace$WhitespaceRule, $nc(rules)->get((int32_t)((uint32_t)(p + r) >> 1))));
	int32_t i = p - 1;
	int32_t j = r + 1;
	while (true) {
		while ($nc(x)->compareTo($$cast($Whitespace$WhitespaceRule, rules->get(--j))) < 0) {
		}
		while (x->compareTo($$cast($Whitespace$WhitespaceRule, rules->get(++i))) > 0) {
		}
		if (i < j) {
			$var($Whitespace$WhitespaceRule, tmp, $cast($Whitespace$WhitespaceRule, rules->get(i)));
			rules->set(i, $$cast($Whitespace$WhitespaceRule, rules->get(j)));
			rules->set(j, tmp);
		} else {
			return j;
		}
	}
}

$1Type* Whitespace::typeCheck($SymbolTable* stable) {
	$init($1Type);
	return $1Type::Void;
}

void Whitespace::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

Whitespace::Whitespace() {
}

$Class* Whitespace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"USE_PREDICATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, USE_PREDICATE)},
		{"STRIP_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, STRIP_SPACE)},
		{"PRESERVE_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, PRESERVE_SPACE)},
		{"RULE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, RULE_NONE)},
		{"RULE_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, RULE_ELEMENT)},
		{"RULE_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, RULE_NAMESPACE)},
		{"RULE_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Whitespace, RULE_ALL)},
		{"_elementList", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Whitespace, _elementList)},
		{"_action", "I", nullptr, $PRIVATE, $field(Whitespace, _action)},
		{"_importPrecedence", "I", nullptr, $PRIVATE, $field(Whitespace, _importPrecedence)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Whitespace, init$, void)},
		{"compileDefault", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Whitespace, compileDefault, void, int32_t, $ClassGenerator*)},
		{"compilePredicate", "(Ljava/util/List;ILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;ILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", $PRIVATE | $STATIC, $staticMethod(Whitespace, compilePredicate, void, $List*, int32_t, $ClassGenerator*)},
		{"compilePreserveSpace", "([Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;ILcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Whitespace, compilePreserveSpace, void, $BranchHandleArray*, int32_t, $InstructionList*)},
		{"compileStripSpace", "([Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;ILcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Whitespace, compileStripSpace, void, $BranchHandleArray*, int32_t, $InstructionList*)},
		{"findContradictingRule", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;", $PRIVATE | $STATIC, $staticMethod(Whitespace, findContradictingRule, $Whitespace$WhitespaceRule*, $List*, $Whitespace$WhitespaceRule*)},
		{"getRules", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;", $PUBLIC, $method(Whitespace, getRules, $List*)},
		{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Whitespace, parseContents, void, $Parser*)},
		{"partition", "(Ljava/util/List;II)I", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;II)I", $PRIVATE | $STATIC, $staticMethod(Whitespace, partition, int32_t, $List*, int32_t, int32_t)},
		{"prioritizeRules", "(Ljava/util/List;)I", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;)I", $PRIVATE | $STATIC, $staticMethod(Whitespace, prioritizeRules, int32_t, $List*)},
		{"quicksort", "(Ljava/util/List;II)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;II)V", $PRIVATE | $STATIC, $staticMethod(Whitespace, quicksort, void, $List*, int32_t, int32_t)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Whitespace, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"translateRules", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)I", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)I", $PUBLIC | $STATIC, $staticMethod(Whitespace, translateRules, int32_t, $List*, $ClassGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Whitespace, typeCheck, $1Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace$WhitespaceRule", "com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace", "WhitespaceRule", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace$WhitespaceRule"
	};
	$loadClass(Whitespace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Whitespace);
	});
	return class$;
}

$Class* Whitespace::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com