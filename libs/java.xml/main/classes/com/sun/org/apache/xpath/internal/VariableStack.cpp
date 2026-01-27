#include <com/sun/org/apache/xpath/internal/VariableStack.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Cloneable.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CLASS_UNRESOLVEDVARIABLE
#undef CLEARLIMITATION
#undef ER_VARIABLE_ACCESSED_BEFORE_BIND
#undef ER_VAR_NOT_RESOLVABLE
#undef RECURSIONLIMIT

using $XObjectArray = $Array<::com::sun::org::apache::xpath::internal::objects::XObject>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _VariableStack_FieldInfo_[] = {
	{"CLEARLIMITATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VariableStack, CLEARLIMITATION)},
	{"_stackFrames", "[Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, 0, $field(VariableStack, _stackFrames)},
	{"_frameTop", "I", nullptr, 0, $field(VariableStack, _frameTop)},
	{"_currentFrameBottom", "I", nullptr, $PRIVATE, $field(VariableStack, _currentFrameBottom)},
	{"_links", "[I", nullptr, 0, $field(VariableStack, _links)},
	{"_linksTop", "I", nullptr, 0, $field(VariableStack, _linksTop)},
	{"m_nulls", "[Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PRIVATE | $STATIC, $staticField(VariableStack, m_nulls)},
	{}
};

$MethodInfo _VariableStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VariableStack, init$, void)},
	{"clearLocalSlots", "(II)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, clearLocalSlots, void, int32_t, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(VariableStack, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"elementAt", "(I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, elementAt, $XObject*, int32_t)},
	{"getGlobalVariable", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getGlobalVariable, $XObject*, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"getGlobalVariable", "(Lcom/sun/org/apache/xpath/internal/XPathContext;IZ)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getGlobalVariable, $XObject*, $XPathContext*, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"getLocalVariable", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getLocalVariable, $XObject*, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"getLocalVariable", "(II)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getLocalVariable, $XObject*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"getLocalVariable", "(Lcom/sun/org/apache/xpath/internal/XPathContext;IZ)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getLocalVariable, $XObject*, $XPathContext*, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"getStackFrame", "()I", nullptr, $PUBLIC, $virtualMethod(VariableStack, getStackFrame, int32_t)},
	{"getVariableOrParam", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xml/internal/utils/QName;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableStack, getVariableOrParam, $XObject*, $XPathContext*, $QName*), "javax.xml.transform.TransformerException"},
	{"isLocalSet", "(I)Z", nullptr, $PUBLIC, $virtualMethod(VariableStack, isLocalSet, bool, int32_t), "javax.xml.transform.TransformerException"},
	{"link", "(I)I", nullptr, $PUBLIC, $virtualMethod(VariableStack, link, int32_t, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(VariableStack, reset, void)},
	{"setGlobalVariable", "(ILcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, setGlobalVariable, void, int32_t, $XObject*)},
	{"setLocalVariable", "(ILcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, setLocalVariable, void, int32_t, $XObject*)},
	{"setLocalVariable", "(ILcom/sun/org/apache/xpath/internal/objects/XObject;I)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, setLocalVariable, void, int32_t, $XObject*, int32_t)},
	{"setStackFrame", "(I)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, setStackFrame, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(VariableStack, size, int32_t)},
	{"unlink", "()V", nullptr, $PUBLIC, $virtualMethod(VariableStack, unlink, void)},
	{"unlink", "(I)V", nullptr, $PUBLIC, $virtualMethod(VariableStack, unlink, void, int32_t)},
	{}
};

$ClassInfo _VariableStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.VariableStack",
	"java.lang.Object",
	"java.lang.Cloneable",
	_VariableStack_FieldInfo_,
	_VariableStack_MethodInfo_
};

$Object* allocate$VariableStack($Class* clazz) {
	return $of($alloc(VariableStack));
}

$XObjectArray* VariableStack::m_nulls = nullptr;

void VariableStack::init$() {
	$set(this, _stackFrames, $new($XObjectArray, $XPathContext::RECURSIONLIMIT * 2));
	$set(this, _links, $new($ints, $XPathContext::RECURSIONLIMIT));
	reset();
}

$Object* VariableStack::clone() {
	$synchronized(this) {
		$var(VariableStack, vs, $cast(VariableStack, $Cloneable::clone()));
		$set($nc(vs), _stackFrames, $cast($XObjectArray, $nc(this->_stackFrames)->clone()));
		$set(vs, _links, $cast($ints, $nc(this->_links)->clone()));
		return $of(vs);
	}
}

$XObject* VariableStack::elementAt(int32_t i) {
	return $nc(this->_stackFrames)->get(i);
}

int32_t VariableStack::size() {
	return this->_frameTop;
}

void VariableStack::reset() {
	this->_frameTop = 0;
	this->_linksTop = 0;
	$nc(this->_links)->set(this->_linksTop++, 0);
	$set(this, _stackFrames, $new($XObjectArray, $nc(this->_stackFrames)->length));
}

void VariableStack::setStackFrame(int32_t sf) {
	this->_currentFrameBottom = sf;
}

int32_t VariableStack::getStackFrame() {
	return this->_currentFrameBottom;
}

int32_t VariableStack::link(int32_t size) {
	$useLocalCurrentObjectStackCache();
	this->_currentFrameBottom = this->_frameTop;
	this->_frameTop += size;
	if (this->_frameTop >= $nc(this->_stackFrames)->length) {
		$var($XObjectArray, newsf, $new($XObjectArray, $nc(this->_stackFrames)->length + $XPathContext::RECURSIONLIMIT + size));
		$System::arraycopy(this->_stackFrames, 0, newsf, 0, $nc(this->_stackFrames)->length);
		$set(this, _stackFrames, newsf);
	}
	if (this->_linksTop + 1 >= $nc(this->_links)->length) {
		$var($ints, newlinks, $new($ints, $nc(this->_links)->length + (VariableStack::CLEARLIMITATION * 2)));
		$System::arraycopy(this->_links, 0, newlinks, 0, $nc(this->_links)->length);
		$set(this, _links, newlinks);
	}
	$nc(this->_links)->set(this->_linksTop++, this->_currentFrameBottom);
	return this->_currentFrameBottom;
}

void VariableStack::unlink() {
	this->_frameTop = $nc(this->_links)->get(--this->_linksTop);
	this->_currentFrameBottom = $nc(this->_links)->get(this->_linksTop - 1);
}

void VariableStack::unlink(int32_t currentFrame) {
	this->_frameTop = $nc(this->_links)->get(--this->_linksTop);
	this->_currentFrameBottom = currentFrame;
}

void VariableStack::setLocalVariable(int32_t index, $XObject* val) {
	$nc(this->_stackFrames)->set(index + this->_currentFrameBottom, val);
}

void VariableStack::setLocalVariable(int32_t index, $XObject* val, int32_t stackFrame) {
	$nc(this->_stackFrames)->set(index + stackFrame, val);
}

$XObject* VariableStack::getLocalVariable($XPathContext* xctxt, int32_t index) {
	$useLocalCurrentObjectStackCache();
	index += this->_currentFrameBottom;
	$var($XObject, val, $nc(this->_stackFrames)->get(index));
	if (nullptr == val) {
		$init($XPATHErrorResources);
		$var($String, var$0, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_VARIABLE_ACCESSED_BEFORE_BIND, nullptr));
		$throwNew($TransformerException, var$0, $($nc(xctxt)->getSAXLocator()));
	}
	if ($nc(val)->getType() == $XObject::CLASS_UNRESOLVEDVARIABLE) {
		return ($nc(this->_stackFrames)->set(index, $(val->execute(xctxt))));
	}
	return val;
}

$XObject* VariableStack::getLocalVariable(int32_t index, int32_t frame) {
	index += frame;
	$var($XObject, val, $nc(this->_stackFrames)->get(index));
	return val;
}

$XObject* VariableStack::getLocalVariable($XPathContext* xctxt, int32_t index, bool destructiveOK) {
	$useLocalCurrentObjectStackCache();
	index += this->_currentFrameBottom;
	$var($XObject, val, $nc(this->_stackFrames)->get(index));
	if (nullptr == val) {
		$init($XPATHErrorResources);
		$var($String, var$0, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_VARIABLE_ACCESSED_BEFORE_BIND, nullptr));
		$throwNew($TransformerException, var$0, $($nc(xctxt)->getSAXLocator()));
	}
	if ($nc(val)->getType() == $XObject::CLASS_UNRESOLVEDVARIABLE) {
		return ($nc(this->_stackFrames)->set(index, $(val->execute(xctxt))));
	}
	return destructiveOK ? val : $nc(val)->getFresh();
}

bool VariableStack::isLocalSet(int32_t index) {
	return ($nc(this->_stackFrames)->get(index + this->_currentFrameBottom) != nullptr);
}

void VariableStack::clearLocalSlots(int32_t start, int32_t len) {
	start += this->_currentFrameBottom;
	$System::arraycopy(VariableStack::m_nulls, 0, this->_stackFrames, start, len);
}

void VariableStack::setGlobalVariable(int32_t index, $XObject* val) {
	$nc(this->_stackFrames)->set(index, val);
}

$XObject* VariableStack::getGlobalVariable($XPathContext* xctxt, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, val, $nc(this->_stackFrames)->get(index));
	if ($nc(val)->getType() == $XObject::CLASS_UNRESOLVEDVARIABLE) {
		return ($nc(this->_stackFrames)->set(index, $(val->execute(xctxt))));
	}
	return val;
}

$XObject* VariableStack::getGlobalVariable($XPathContext* xctxt, int32_t index, bool destructiveOK) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, val, $nc(this->_stackFrames)->get(index));
	if ($nc(val)->getType() == $XObject::CLASS_UNRESOLVEDVARIABLE) {
		return ($nc(this->_stackFrames)->set(index, $(val->execute(xctxt))));
	}
	return destructiveOK ? val : $nc(val)->getFresh();
}

$XObject* VariableStack::getVariableOrParam($XPathContext* xctxt, $QName* qname) {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	$throwNew($TransformerException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_VAR_NOT_RESOLVABLE, $$new($ObjectArray, {$($of($nc(qname)->toString()))}))));
	$shouldNotReachHere();
}

void clinit$VariableStack($Class* class$) {
	$assignStatic(VariableStack::m_nulls, $new($XObjectArray, VariableStack::CLEARLIMITATION));
}

VariableStack::VariableStack() {
}

$Class* VariableStack::load$($String* name, bool initialize) {
	$loadClass(VariableStack, name, initialize, &_VariableStack_ClassInfo_, clinit$VariableStack, allocate$VariableStack);
	return class$;
}

$Class* VariableStack::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com