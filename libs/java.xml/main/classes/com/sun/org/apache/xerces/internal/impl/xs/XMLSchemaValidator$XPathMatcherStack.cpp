#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XPathMatcherStack.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <com/sun/org/apache/xerces/internal/util/IntStack.h>
#include <jcpp.h>

using $XPathMatcherArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher>;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $IntStack = ::com::sun::org::apache::xerces::internal::util::IntStack;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$XPathMatcherStack_FieldInfo_[] = {
	{"fMatchers", "[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PROTECTED, $field(XMLSchemaValidator$XPathMatcherStack, fMatchers)},
	{"fMatchersCount", "I", nullptr, $PROTECTED, $field(XMLSchemaValidator$XPathMatcherStack, fMatchersCount)},
	{"fContextStack", "Lcom/sun/org/apache/xerces/internal/util/IntStack;", nullptr, $PROTECTED, $field(XMLSchemaValidator$XPathMatcherStack, fContextStack)},
	{}
};

$MethodInfo _XMLSchemaValidator$XPathMatcherStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator$XPathMatcherStack, init$, void)},
	{"addMatcher", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, addMatcher, void, $XPathMatcher*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, clear, void)},
	{"ensureMatcherCapacity", "()V", nullptr, $PRIVATE, $method(XMLSchemaValidator$XPathMatcherStack, ensureMatcherCapacity, void)},
	{"getMatcherAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, getMatcherAt, $XPathMatcher*, int32_t)},
	{"getMatcherCount", "()I", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, getMatcherCount, int32_t)},
	{"popContext", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, popContext, void)},
	{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, pushContext, void)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$XPathMatcherStack, size, int32_t)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$XPathMatcherStack_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XPathMatcherStack", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "XPathMatcherStack", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XMLSchemaValidator$XPathMatcherStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XPathMatcherStack",
	"java.lang.Object",
	nullptr,
	_XMLSchemaValidator$XPathMatcherStack_FieldInfo_,
	_XMLSchemaValidator$XPathMatcherStack_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$XPathMatcherStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$XPathMatcherStack($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$XPathMatcherStack));
}

void XMLSchemaValidator$XPathMatcherStack::init$() {
	$set(this, fMatchers, $new($XPathMatcherArray, 4));
	$set(this, fContextStack, $new($IntStack));
}

void XMLSchemaValidator$XPathMatcherStack::clear() {
	for (int32_t i = 0; i < this->fMatchersCount; ++i) {
		$nc(this->fMatchers)->set(i, nullptr);
	}
	this->fMatchersCount = 0;
	$nc(this->fContextStack)->clear();
}

int32_t XMLSchemaValidator$XPathMatcherStack::size() {
	return $nc(this->fContextStack)->size();
}

int32_t XMLSchemaValidator$XPathMatcherStack::getMatcherCount() {
	return this->fMatchersCount;
}

void XMLSchemaValidator$XPathMatcherStack::addMatcher($XPathMatcher* matcher) {
	ensureMatcherCapacity();
	$nc(this->fMatchers)->set(this->fMatchersCount++, matcher);
}

$XPathMatcher* XMLSchemaValidator$XPathMatcherStack::getMatcherAt(int32_t index) {
	return $nc(this->fMatchers)->get(index);
}

void XMLSchemaValidator$XPathMatcherStack::pushContext() {
	$nc(this->fContextStack)->push(this->fMatchersCount);
}

void XMLSchemaValidator$XPathMatcherStack::popContext() {
	this->fMatchersCount = $nc(this->fContextStack)->pop();
}

void XMLSchemaValidator$XPathMatcherStack::ensureMatcherCapacity() {
	if (this->fMatchersCount == $nc(this->fMatchers)->length) {
		$var($XPathMatcherArray, array, $new($XPathMatcherArray, $nc(this->fMatchers)->length * 2));
		$System::arraycopy(this->fMatchers, 0, array, 0, $nc(this->fMatchers)->length);
		$set(this, fMatchers, array);
	}
}

XMLSchemaValidator$XPathMatcherStack::XMLSchemaValidator$XPathMatcherStack() {
}

$Class* XMLSchemaValidator$XPathMatcherStack::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$XPathMatcherStack, name, initialize, &_XMLSchemaValidator$XPathMatcherStack_ClassInfo_, allocate$XMLSchemaValidator$XPathMatcherStack);
	return class$;
}

$Class* XMLSchemaValidator$XPathMatcherStack::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com