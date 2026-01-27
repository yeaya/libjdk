#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$Context.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Match.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharArrayTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharacterIteratorTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ClosureContext.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$StringTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

using $RegularExpression$ClosureContextArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ClosureContext>;
using $RegularExpression$CharArrayTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$CharArrayTarget;
using $RegularExpression$CharacterIteratorTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$CharacterIteratorTarget;
using $RegularExpression$ClosureContext = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ClosureContext;
using $RegularExpression$ExpressionTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget;
using $RegularExpression$StringTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$StringTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RegularExpression$Context_FieldInfo_[] = {
	{"start", "I", nullptr, 0, $field(RegularExpression$Context, start)},
	{"limit", "I", nullptr, 0, $field(RegularExpression$Context, limit)},
	{"length", "I", nullptr, 0, $field(RegularExpression$Context, length)},
	{"match", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;", nullptr, 0, $field(RegularExpression$Context, match)},
	{"inuse", "Z", nullptr, 0, $field(RegularExpression$Context, inuse)},
	{"closureContexts", "[Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ClosureContext;", nullptr, 0, $field(RegularExpression$Context, closureContexts)},
	{"stringTarget", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$StringTarget;", nullptr, $PRIVATE, $field(RegularExpression$Context, stringTarget)},
	{"charArrayTarget", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharArrayTarget;", nullptr, $PRIVATE, $field(RegularExpression$Context, charArrayTarget)},
	{"characterIteratorTarget", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharacterIteratorTarget;", nullptr, $PRIVATE, $field(RegularExpression$Context, characterIteratorTarget)},
	{"target", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget;", nullptr, 0, $field(RegularExpression$Context, target)},
	{}
};

$MethodInfo _RegularExpression$Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(RegularExpression$Context, init$, void)},
	{"reset", "(Ljava/text/CharacterIterator;III)V", nullptr, 0, $method(RegularExpression$Context, reset, void, $CharacterIterator*, int32_t, int32_t, int32_t)},
	{"reset", "(Ljava/lang/String;III)V", nullptr, 0, $method(RegularExpression$Context, reset, void, $String*, int32_t, int32_t, int32_t)},
	{"reset", "([CIII)V", nullptr, 0, $method(RegularExpression$Context, reset, void, $chars*, int32_t, int32_t, int32_t)},
	{"resetCommon", "(I)V", nullptr, $PRIVATE, $method(RegularExpression$Context, resetCommon, void, int32_t)},
	{"setInUse", "(Z)V", nullptr, $SYNCHRONIZED, $method(RegularExpression$Context, setInUse, void, bool)},
	{}
};

$InnerClassInfo _RegularExpression$Context_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$Context", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "Context", $STATIC | $FINAL},
	{}
};

$ClassInfo _RegularExpression$Context_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$Context",
	"java.lang.Object",
	nullptr,
	_RegularExpression$Context_FieldInfo_,
	_RegularExpression$Context_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$Context($Class* clazz) {
	return $of($alloc(RegularExpression$Context));
}

void RegularExpression$Context::init$() {
	this->inuse = false;
}

void RegularExpression$Context::resetCommon(int32_t nofclosures) {
	$useLocalCurrentObjectStackCache();
	this->length = this->limit - this->start;
	setInUse(true);
	$set(this, match, nullptr);
	if (this->closureContexts == nullptr || $nc(this->closureContexts)->length != nofclosures) {
		$set(this, closureContexts, $new($RegularExpression$ClosureContextArray, nofclosures));
	}
	for (int32_t i = 0; i < nofclosures; ++i) {
		if ($nc(this->closureContexts)->get(i) == nullptr) {
			$nc(this->closureContexts)->set(i, $$new($RegularExpression$ClosureContext));
		} else {
			$nc($nc(this->closureContexts)->get(i))->reset();
		}
	}
}

void RegularExpression$Context::reset($CharacterIterator* target, int32_t start, int32_t limit, int32_t nofclosures) {
	if (this->characterIteratorTarget == nullptr) {
		$set(this, characterIteratorTarget, $new($RegularExpression$CharacterIteratorTarget, target));
	} else {
		$nc(this->characterIteratorTarget)->resetTarget(target);
	}
	$set(this, target, this->characterIteratorTarget);
	this->start = start;
	this->limit = limit;
	this->resetCommon(nofclosures);
}

void RegularExpression$Context::reset($String* target, int32_t start, int32_t limit, int32_t nofclosures) {
	if (this->stringTarget == nullptr) {
		$set(this, stringTarget, $new($RegularExpression$StringTarget, target));
	} else {
		$nc(this->stringTarget)->resetTarget(target);
	}
	$set(this, target, this->stringTarget);
	this->start = start;
	this->limit = limit;
	this->resetCommon(nofclosures);
}

void RegularExpression$Context::reset($chars* target, int32_t start, int32_t limit, int32_t nofclosures) {
	if (this->charArrayTarget == nullptr) {
		$set(this, charArrayTarget, $new($RegularExpression$CharArrayTarget, target));
	} else {
		$nc(this->charArrayTarget)->resetTarget(target);
	}
	$set(this, target, this->charArrayTarget);
	this->start = start;
	this->limit = limit;
	this->resetCommon(nofclosures);
}

void RegularExpression$Context::setInUse(bool inUse) {
	$synchronized(this) {
		this->inuse = inUse;
	}
}

RegularExpression$Context::RegularExpression$Context() {
}

$Class* RegularExpression$Context::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$Context, name, initialize, &_RegularExpression$Context_ClassInfo_, allocate$RegularExpression$Context);
	return class$;
}

$Class* RegularExpression$Context::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com