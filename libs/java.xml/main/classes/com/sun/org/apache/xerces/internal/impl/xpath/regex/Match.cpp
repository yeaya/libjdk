#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Match.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <java/lang/IllegalStateException.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
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

void Match::init$() {
	$set(this, beginpos, nullptr);
	$set(this, endpos, nullptr);
	this->nofgroups = 0;
	$set(this, ciSource, nullptr);
	$set(this, strSource, nullptr);
	$set(this, charSource, nullptr);
}

$Object* Match::clone() {
	$synchronized(this) {
		$var(Match, ma, $new(Match));
		if (this->nofgroups > 0) {
			ma->setNumberOfGroups(this->nofgroups);
			if (this->ciSource != nullptr) {
				ma->setSource(this->ciSource);
			}
			if (this->strSource != nullptr) {
				ma->setSource(this->strSource);
			}
			for (int32_t i = 0; i < this->nofgroups; ++i) {
				ma->setBeginning(i, this->getBeginning(i));
				ma->setEnd(i, this->getEnd(i));
			}
		}
		return ma;
	}
}

void Match::setNumberOfGroups(int32_t n) {
	int32_t oldn = this->nofgroups;
	this->nofgroups = n;
	if (oldn <= 0 || oldn < n || n * 2 < oldn) {
		$set(this, beginpos, $new($ints, n));
		$set(this, endpos, $new($ints, n));
	}
	for (int32_t i = 0; i < n; ++i) {
		$nc(this->beginpos)->set(i, -1);
		$nc(this->endpos)->set(i, -1);
	}
}

void Match::setSource($CharacterIterator* ci) {
	$set(this, ciSource, ci);
	$set(this, strSource, nullptr);
	$set(this, charSource, nullptr);
}

void Match::setSource($String* str) {
	$set(this, ciSource, nullptr);
	$set(this, strSource, str);
	$set(this, charSource, nullptr);
}

void Match::setSource($chars* chars) {
	$set(this, ciSource, nullptr);
	$set(this, strSource, nullptr);
	$set(this, charSource, chars);
}

void Match::setBeginning(int32_t index, int32_t v) {
	$nc(this->beginpos)->set(index, v);
}

void Match::setEnd(int32_t index, int32_t v) {
	$nc(this->endpos)->set(index, v);
}

int32_t Match::getNumberOfGroups() {
	if (this->nofgroups <= 0) {
		$throwNew($IllegalStateException, "A result is not set."_s);
	}
	return this->nofgroups;
}

int32_t Match::getBeginning(int32_t index) {
	$useLocalObjectStack();
	if (this->beginpos == nullptr) {
		$throwNew($IllegalStateException, "A result is not set."_s);
	}
	if (index < 0 || this->nofgroups <= index) {
		$throwNew($IllegalArgumentException, $$str({"The parameter must be less than "_s, $$str(this->nofgroups), ": "_s, $$str(index)}));
	}
	return $nc(this->beginpos)->get(index);
}

int32_t Match::getEnd(int32_t index) {
	$useLocalObjectStack();
	if (this->endpos == nullptr) {
		$throwNew($IllegalStateException, "A result is not set."_s);
	}
	if (index < 0 || this->nofgroups <= index) {
		$throwNew($IllegalArgumentException, $$str({"The parameter must be less than "_s, $$str(this->nofgroups), ": "_s, $$str(index)}));
	}
	return $nc(this->endpos)->get(index);
}

$String* Match::getCapturedText(int32_t index) {
	$useLocalObjectStack();
	if (this->beginpos == nullptr) {
		$throwNew($IllegalStateException, "match() has never been called."_s);
	}
	if (index < 0 || this->nofgroups <= index) {
		$throwNew($IllegalArgumentException, $$str({"The parameter must be less than "_s, $$str(this->nofgroups), ": "_s, $$str(index)}));
	}
	$var($String, ret, nullptr);
	int32_t begin = $nc(this->beginpos)->get(index);
	int32_t end = $nc(this->endpos)->get(index);
	if (begin < 0 || end < 0) {
		return nullptr;
	}
	if (this->ciSource != nullptr) {
		$assign(ret, $REUtil::substring(this->ciSource, begin, end));
	} else if (this->strSource != nullptr) {
		$assign(ret, this->strSource->substring(begin, end));
	} else {
		$assign(ret, $new($String, this->charSource, begin, end - begin));
	}
	return ret;
}

Match::Match() {
}

$Class* Match::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"beginpos", "[I", nullptr, 0, $field(Match, beginpos)},
		{"endpos", "[I", nullptr, 0, $field(Match, endpos)},
		{"nofgroups", "I", nullptr, 0, $field(Match, nofgroups)},
		{"ciSource", "Ljava/text/CharacterIterator;", nullptr, 0, $field(Match, ciSource)},
		{"strSource", "Ljava/lang/String;", nullptr, 0, $field(Match, strSource)},
		{"charSource", "[C", nullptr, 0, $field(Match, charSource)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Match, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Match, clone, $Object*)},
		{"getBeginning", "(I)I", nullptr, $PUBLIC, $virtualMethod(Match, getBeginning, int32_t, int32_t)},
		{"getCapturedText", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Match, getCapturedText, $String*, int32_t)},
		{"getEnd", "(I)I", nullptr, $PUBLIC, $virtualMethod(Match, getEnd, int32_t, int32_t)},
		{"getNumberOfGroups", "()I", nullptr, $PUBLIC, $virtualMethod(Match, getNumberOfGroups, int32_t)},
		{"setBeginning", "(II)V", nullptr, $PROTECTED, $virtualMethod(Match, setBeginning, void, int32_t, int32_t)},
		{"setEnd", "(II)V", nullptr, $PROTECTED, $virtualMethod(Match, setEnd, void, int32_t, int32_t)},
		{"setNumberOfGroups", "(I)V", nullptr, $PROTECTED, $virtualMethod(Match, setNumberOfGroups, void, int32_t)},
		{"setSource", "(Ljava/text/CharacterIterator;)V", nullptr, $PROTECTED, $virtualMethod(Match, setSource, void, $CharacterIterator*)},
		{"setSource", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(Match, setSource, void, $String*)},
		{"setSource", "([C)V", nullptr, $PROTECTED, $virtualMethod(Match, setSource, void, $chars*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Match",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Match, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Match);
	});
	return class$;
}

$Class* Match::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com