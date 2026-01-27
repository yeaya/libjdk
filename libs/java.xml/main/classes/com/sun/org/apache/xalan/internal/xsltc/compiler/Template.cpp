#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NamedMethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOM_INTF_SIG
#undef ERROR
#undef INVALID_QNAME_ERR
#undef NODE_ITERATOR_SIG
#undef TEMPLATE_REDEF_ERR
#undef TRANSLET_OUTPUT_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NamedMethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NamedMethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Template_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Template, _name)},
	{"_mode", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Template, _mode)},
	{"_pattern", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE, $field(Template, _pattern)},
	{"_priority", "D", nullptr, $PRIVATE, $field(Template, _priority)},
	{"_position", "I", nullptr, $PRIVATE, $field(Template, _position)},
	{"_disabled", "Z", nullptr, $PRIVATE, $field(Template, _disabled)},
	{"_compiled", "Z", nullptr, $PRIVATE, $field(Template, _compiled)},
	{"_simplified", "Z", nullptr, $PRIVATE, $field(Template, _simplified)},
	{"_isSimpleNamedTemplate", "Z", nullptr, $PRIVATE, $field(Template, _isSimpleNamedTemplate)},
	{"_parameters", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;>;", $PRIVATE, $field(Template, _parameters)},
	{"_stylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(Template, _stylesheet)},
	{}
};

$MethodInfo _Template_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Template, init$, void)},
	{"addDependency", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Template, addDependency, void, $TopLevelElement*)},
	{"addParameter", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;)V", nullptr, $PUBLIC, $method(Template, addParameter, void, $Param*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $method(Template, compareTo, int32_t, Object$*)},
	{"compile", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Template, compile, $InstructionList*, $ClassGenerator*, $MethodGenerator*)},
	{"disable", "()V", nullptr, $PUBLIC, $method(Template, disable, void)},
	{"disabled", "()Z", nullptr, $PUBLIC, $method(Template, disabled, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Template, display, void, int32_t)},
	{"getDependencies", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Template, getDependencies, $List*)},
	{"getModeName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(Template, getModeName, $QName*)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(Template, getName, $QName*)},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;>;", $PUBLIC, $method(Template, getParameters, $List*)},
	{"getPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PUBLIC, $method(Template, getPattern, $Pattern*)},
	{"getPosition", "()I", nullptr, $PUBLIC, $method(Template, getPosition, int32_t)},
	{"getPriority", "()D", nullptr, $PUBLIC, $method(Template, getPriority, double)},
	{"getStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $virtualMethod(Template, getStylesheet, $Stylesheet*)},
	{"hasParams", "()Z", nullptr, $PUBLIC, $method(Template, hasParams, bool)},
	{"isNamed", "()Z", nullptr, $PUBLIC, $method(Template, isNamed, bool)},
	{"isSimpleNamedTemplate", "()Z", nullptr, $PUBLIC, $method(Template, isSimpleNamedTemplate, bool)},
	{"isSimplified", "()Z", nullptr, $PUBLIC, $method(Template, isSimplified, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Template, parseContents, void, $Parser*)},
	{"parseSimplified", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $method(Template, parseSimplified, void, $Stylesheet*, $Parser*)},
	{"resolveNamedTemplates", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)Z", nullptr, $PRIVATE, $method(Template, resolveNamedTemplates, bool, Template*, $Parser*)},
	{"setName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(Template, setName, void, $QName*)},
	{"setSimplified", "()V", nullptr, $PUBLIC, $method(Template, setSimplified, void)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Template, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Template, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Template_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Template",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_Template_FieldInfo_,
	_Template_MethodInfo_
};

$Object* allocate$Template($Class* clazz) {
	return $of($alloc(Template));
}

void Template::init$() {
	$TopLevelElement::init$();
	this->_disabled = false;
	this->_compiled = false;
	this->_simplified = false;
	this->_isSimpleNamedTemplate = false;
	$set(this, _parameters, $new($ArrayList));
	$set(this, _stylesheet, nullptr);
}

bool Template::hasParams() {
	return $nc(this->_parameters)->size() > 0;
}

bool Template::isSimplified() {
	return (this->_simplified);
}

void Template::setSimplified() {
	this->_simplified = true;
}

bool Template::isSimpleNamedTemplate() {
	return this->_isSimpleNamedTemplate;
}

void Template::addParameter($Param* param) {
	$nc(this->_parameters)->add(param);
}

$List* Template::getParameters() {
	return this->_parameters;
}

void Template::disable() {
	this->_disabled = true;
}

bool Template::disabled() {
	return (this->_disabled);
}

double Template::getPriority() {
	return this->_priority;
}

int32_t Template::getPosition() {
	return (this->_position);
}

bool Template::isNamed() {
	return this->_name != nullptr;
}

$Pattern* Template::getPattern() {
	return this->_pattern;
}

$QName* Template::getName() {
	return this->_name;
}

void Template::setName($QName* qname) {
	if (this->_name == nullptr) {
		$set(this, _name, qname);
	}
}

$QName* Template::getModeName() {
	return this->_mode;
}

int32_t Template::compareTo(Object$* template$) {
	$var(Template, other, $cast(Template, template$));
	if (this->_priority > $nc(other)->_priority) {
		return 1;
	} else if (this->_priority < other->_priority) {
		return -1;
	} else if (this->_position > other->_position) {
		return 1;
	} else if (this->_position < other->_position) {
		return -1;
	} else {
		return 0;
	}
}

void Template::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	$Util::println(u'\n');
	this->indent(indent);
	if (this->_name != nullptr) {
		this->indent(indent);
		$Util::println($$str({"name = "_s, this->_name}));
	} else if (this->_pattern != nullptr) {
		this->indent(indent);
		$Util::println($$str({"match = "_s, $($nc(this->_pattern)->toString())}));
	}
	if (this->_mode != nullptr) {
		this->indent(indent);
		$Util::println($$str({"mode = "_s, this->_mode}));
	}
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

bool Template::resolveNamedTemplates(Template* other, $Parser* parser) {
	if (other == nullptr) {
		return true;
	}
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	int32_t us = this->getImportPrecedence();
	int32_t them = $nc(other)->getImportPrecedence();
	if (us > them) {
		other->disable();
		return true;
	} else if (us < them) {
		$nc(stable)->addTemplate(other);
		this->disable();
		return true;
	} else {
		return false;
	}
}

$Stylesheet* Template::getStylesheet() {
	return this->_stylesheet;
}

void Template::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	$var($String, mode, getAttribute("mode"_s));
	$var($String, match, getAttribute("match"_s));
	$var($String, priority, getAttribute("priority"_s));
	$set(this, _stylesheet, $TopLevelElement::getStylesheet());
	if ($nc(name)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		$set(this, _name, $nc(parser)->getQNameIgnoreDefaultNs(name));
	}
	if ($nc(mode)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(mode)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(mode), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		$set(this, _mode, $nc(parser)->getQNameIgnoreDefaultNs(mode));
	}
	if ($nc(match)->length() > 0) {
		$set(this, _pattern, $nc(parser)->parsePattern(this, "match"_s, nullptr));
	}
	if ($nc(priority)->length() > 0) {
		this->_priority = $Double::parseDouble(priority);
	} else if (this->_pattern != nullptr) {
		this->_priority = $nc(this->_pattern)->getPriority();
	} else {
		$init($Double);
		this->_priority = $Double::NaN;
	}
	this->_position = $nc(parser)->getTemplateIndex();
	if (this->_name != nullptr) {
		$var(Template, other, $nc($(parser->getSymbolTable()))->addTemplate(this));
		if (!resolveNamedTemplates(other, parser)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TEMPLATE_REDEF_ERR, $of(this->_name), static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::ERROR, err);
		}
		if (this->_pattern == nullptr && this->_mode == nullptr) {
			this->_isSimpleNamedTemplate = true;
		}
	}
	if ($instanceOf($Stylesheet, this->_parent)) {
		$nc(($cast($Stylesheet, this->_parent)))->addTemplate(this);
	}
	parser->setTemplate(this);
	parseChildren(parser);
	parser->setTemplate(nullptr);
}

void Template::parseSimplified($Stylesheet* stylesheet, $Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$set(this, _stylesheet, stylesheet);
	setParent(stylesheet);
	$set(this, _name, nullptr);
	$set(this, _mode, nullptr);
	$init($Double);
	this->_priority = $Double::NaN;
	$set(this, _pattern, $nc(parser)->parsePattern(this, "/"_s));
	$var($List, contents, $nc(this->_stylesheet)->getContents());
	$var($SyntaxTreeNode, root, $cast($SyntaxTreeNode, $nc(contents)->get(0)));
	if ($instanceOf($LiteralElement, root)) {
		addElement(root);
		$nc(root)->setParent(this);
		contents->set(0, this);
		parser->setTemplate(this);
		root->parseContents(parser);
		parser->setTemplate(nullptr);
	}
}

$Type* Template::typeCheck($SymbolTable* stable) {
	if (this->_pattern != nullptr) {
		$nc(this->_pattern)->typeCheck(stable);
	}
	return typeCheckContents(stable);
}

void Template::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_disabled) {
		return;
	}
	$var($String, className, classGen->getClassName());
	if (this->_compiled && isNamed()) {
		$var($String, methodName, $Util::escape($($nc(this->_name)->toString())));
		$nc(il)->append($(classGen->loadTranslet()));
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadIterator()));
		il->append($(methodGen->loadHandler()));
		il->append($(methodGen->loadCurrentNode()));
		$init($Constants);
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref(className, methodName, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, "I)V"_s})))));
		return;
	}
	if (this->_compiled) {
		return;
	}
	this->_compiled = true;
	if (this->_isSimpleNamedTemplate && $instanceOf($NamedMethodGenerator, methodGen)) {
		int32_t numParams = $nc(this->_parameters)->size();
		$var($NamedMethodGenerator, namedMethodGen, $cast($NamedMethodGenerator, methodGen));
		for (int32_t i = 0; i < numParams; ++i) {
			$var($Param, param, $cast($Param, $nc(this->_parameters)->get(i)));
			$nc(param)->setLoadInstruction($(namedMethodGen->loadParameter(i)));
			param->setStoreInstruction($(namedMethodGen->storeParameter(i)));
		}
	}
	translateContents(classGen, methodGen);
	$nc(il)->setPositions(true);
}

$List* Template::getDependencies() {
	return $TopLevelElement::getDependencies();
}

void Template::addDependency($TopLevelElement* other) {
	$TopLevelElement::addDependency(other);
}

$InstructionList* Template::compile($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	return $TopLevelElement::compile(classGen, methodGen);
}

Template::Template() {
}

$Class* Template::load$($String* name, bool initialize) {
	$loadClass(Template, name, initialize, &_Template_ClassInfo_, allocate$Template);
	return class$;
}

$Class* Template::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com