#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef ABSENT
#undef ATTVAL_TWOPOUNDANY
#undef ATTVAL_TWOPOUNDOTHER
#undef EMPTY_LIST
#undef NSCONSTRAINT_ANY
#undef NSCONSTRAINT_LIST
#undef NSCONSTRAINT_NOT
#undef PC_LAX
#undef PC_SKIP
#undef PC_STRICT
#undef WILDCARD

using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSWildcardDecl_FieldInfo_[] = {
	{"ABSENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSWildcardDecl, ABSENT)},
	{"fType", "S", nullptr, $PUBLIC, $field(XSWildcardDecl, fType)},
	{"fProcessContents", "S", nullptr, $PUBLIC, $field(XSWildcardDecl, fProcessContents)},
	{"fNamespaceList", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(XSWildcardDecl, fNamespaceList)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSWildcardDecl, fAnnotations)},
	{"fDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSWildcardDecl, fDescription)},
	{}
};

$MethodInfo _XSWildcardDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSWildcardDecl, init$, void)},
	{"allowNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, allowNamespace, bool, $String*)},
	{"areSame", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;)Z", nullptr, $PRIVATE, $method(XSWildcardDecl, areSame, bool, XSWildcardDecl*)},
	{"elementInSet", "(Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(XSWildcardDecl, elementInSet, bool, $String*, $StringArray*)},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getAnnotations, $XSObjectList*)},
	{"getConstraintType", "()S", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getConstraintType, int16_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getNsConstraintList", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getNsConstraintList, $StringList*)},
	{"getProcessContents", "()S", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getProcessContents, int16_t)},
	{"getProcessContentsAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getProcessContentsAsString, $String*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, getType, int16_t)},
	{"intersect2sets", "([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0, $virtualMethod(XSWildcardDecl, intersect2sets, $StringArray*, $StringArray*, $StringArray*)},
	{"isSubsetOf", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;)Z", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, isSubsetOf, bool, XSWildcardDecl*)},
	{"performIntersectionWith", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;S)Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, performIntersectionWith, XSWildcardDecl*, XSWildcardDecl*, int16_t)},
	{"performUnionWith", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;S)Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, performUnionWith, XSWildcardDecl*, XSWildcardDecl*, int16_t)},
	{"subset2sets", "([Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(XSWildcardDecl, subset2sets, bool, $StringArray*, $StringArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, toString, $String*)},
	{"union2sets", "([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0, $virtualMethod(XSWildcardDecl, union2sets, $StringArray*, $StringArray*, $StringArray*)},
	{"weakerProcessContents", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;)Z", nullptr, $PUBLIC, $virtualMethod(XSWildcardDecl, weakerProcessContents, bool, XSWildcardDecl*)},
	{}
};

$ClassInfo _XSWildcardDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSWildcardDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSWildcard",
	_XSWildcardDecl_FieldInfo_,
	_XSWildcardDecl_MethodInfo_
};

$Object* allocate$XSWildcardDecl($Class* clazz) {
	return $of($alloc(XSWildcardDecl));
}

$String* XSWildcardDecl::ABSENT = nullptr;

void XSWildcardDecl::init$() {
	this->fType = $XSWildcard::NSCONSTRAINT_ANY;
	this->fProcessContents = $XSWildcard::PC_STRICT;
	$set(this, fAnnotations, nullptr);
	$set(this, fDescription, nullptr);
}

bool XSWildcardDecl::allowNamespace($String* namespace$) {
	if (this->fType == $XSWildcard::NSCONSTRAINT_ANY) {
		return true;
	}
	if (this->fType == $XSWildcard::NSCONSTRAINT_NOT) {
		bool found = false;
		int32_t listNum = $nc(this->fNamespaceList)->length;
		for (int32_t i = 0; i < listNum && !found; ++i) {
			if (namespace$ == $nc(this->fNamespaceList)->get(i)) {
				found = true;
			}
		}
		if (!found) {
			return true;
		}
	}
	if (this->fType == $XSWildcard::NSCONSTRAINT_LIST) {
		int32_t listNum = $nc(this->fNamespaceList)->length;
		for (int32_t i = 0; i < listNum; ++i) {
			if (namespace$ == $nc(this->fNamespaceList)->get(i)) {
				return true;
			}
		}
	}
	return false;
}

bool XSWildcardDecl::isSubsetOf(XSWildcardDecl* superWildcard) {
	if (superWildcard == nullptr) {
		return false;
	}
	if ($nc(superWildcard)->fType == $XSWildcard::NSCONSTRAINT_ANY) {
		return true;
	}
	if (this->fType == $XSWildcard::NSCONSTRAINT_NOT) {
		if ($nc(superWildcard)->fType == $XSWildcard::NSCONSTRAINT_NOT && $nc(this->fNamespaceList)->get(0) == $nc(superWildcard->fNamespaceList)->get(0)) {
			return true;
		}
	}
	if (this->fType == $XSWildcard::NSCONSTRAINT_LIST) {
		if ($nc(superWildcard)->fType == $XSWildcard::NSCONSTRAINT_LIST && subset2sets(this->fNamespaceList, superWildcard->fNamespaceList)) {
			return true;
		}
		bool var$0 = $nc(superWildcard)->fType == $XSWildcard::NSCONSTRAINT_NOT && !elementInSet($nc(superWildcard->fNamespaceList)->get(0), this->fNamespaceList);
		if (var$0 && !elementInSet(XSWildcardDecl::ABSENT, this->fNamespaceList)) {
			return true;
		}
	}
	return false;
}

bool XSWildcardDecl::weakerProcessContents(XSWildcardDecl* superWildcard) {
	return this->fProcessContents == XSWildcardDecl::PC_LAX && $nc(superWildcard)->fProcessContents == XSWildcardDecl::PC_STRICT || this->fProcessContents == XSWildcardDecl::PC_SKIP && $nc(superWildcard)->fProcessContents != XSWildcardDecl::PC_SKIP;
}

XSWildcardDecl* XSWildcardDecl::performUnionWith(XSWildcardDecl* wildcard, int16_t processContents) {
	$useLocalCurrentObjectStackCache();
	if (wildcard == nullptr) {
		return nullptr;
	}
	$var(XSWildcardDecl, unionWildcard, $new(XSWildcardDecl));
	unionWildcard->fProcessContents = processContents;
	if (areSame(wildcard)) {
		unionWildcard->fType = this->fType;
		$set(unionWildcard, fNamespaceList, this->fNamespaceList);
	} else if ((this->fType == $XSWildcard::NSCONSTRAINT_ANY) || ($nc(wildcard)->fType == $XSWildcard::NSCONSTRAINT_ANY)) {
		unionWildcard->fType = $XSWildcard::NSCONSTRAINT_ANY;
	} else if ((this->fType == $XSWildcard::NSCONSTRAINT_LIST) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_LIST)) {
		unionWildcard->fType = $XSWildcard::NSCONSTRAINT_LIST;
		$set(unionWildcard, fNamespaceList, union2sets(this->fNamespaceList, wildcard->fNamespaceList));
	} else if (this->fType == $XSWildcard::NSCONSTRAINT_NOT && wildcard->fType == $XSWildcard::NSCONSTRAINT_NOT) {
		unionWildcard->fType = $XSWildcard::NSCONSTRAINT_NOT;
		$set(unionWildcard, fNamespaceList, $new($StringArray, 2));
		$nc(unionWildcard->fNamespaceList)->set(0, XSWildcardDecl::ABSENT);
		$nc(unionWildcard->fNamespaceList)->set(1, XSWildcardDecl::ABSENT);
	} else if (((this->fType == $XSWildcard::NSCONSTRAINT_NOT) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_LIST)) || ((this->fType == $XSWildcard::NSCONSTRAINT_LIST) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_NOT))) {
		$var($StringArray, other, nullptr);
		$var($StringArray, list, nullptr);
		if (this->fType == $XSWildcard::NSCONSTRAINT_NOT) {
			$assign(other, this->fNamespaceList);
			$assign(list, wildcard->fNamespaceList);
		} else {
			$assign(other, wildcard->fNamespaceList);
			$assign(list, this->fNamespaceList);
		}
		bool foundAbsent = elementInSet(XSWildcardDecl::ABSENT, list);
		if ($nc(other)->get(0) != XSWildcardDecl::ABSENT) {
			bool foundNS = elementInSet(other->get(0), list);
			if (foundNS && foundAbsent) {
				unionWildcard->fType = $XSWildcard::NSCONSTRAINT_ANY;
			} else if (foundNS && !foundAbsent) {
				unionWildcard->fType = $XSWildcard::NSCONSTRAINT_NOT;
				$set(unionWildcard, fNamespaceList, $new($StringArray, 2));
				$nc(unionWildcard->fNamespaceList)->set(0, XSWildcardDecl::ABSENT);
				$nc(unionWildcard->fNamespaceList)->set(1, XSWildcardDecl::ABSENT);
			} else if (!foundNS && foundAbsent) {
				return nullptr;
			} else {
				unionWildcard->fType = $XSWildcard::NSCONSTRAINT_NOT;
				$set(unionWildcard, fNamespaceList, other);
			}
		} else if (foundAbsent) {
			unionWildcard->fType = $XSWildcard::NSCONSTRAINT_ANY;
		} else {
			unionWildcard->fType = $XSWildcard::NSCONSTRAINT_NOT;
			$set(unionWildcard, fNamespaceList, other);
		}
	}
	return unionWildcard;
}

XSWildcardDecl* XSWildcardDecl::performIntersectionWith(XSWildcardDecl* wildcard, int16_t processContents) {
	$useLocalCurrentObjectStackCache();
	if (wildcard == nullptr) {
		return nullptr;
	}
	$var(XSWildcardDecl, intersectWildcard, $new(XSWildcardDecl));
	intersectWildcard->fProcessContents = processContents;
	if (areSame(wildcard)) {
		intersectWildcard->fType = this->fType;
		$set(intersectWildcard, fNamespaceList, this->fNamespaceList);
	} else if ((this->fType == $XSWildcard::NSCONSTRAINT_ANY) || ($nc(wildcard)->fType == $XSWildcard::NSCONSTRAINT_ANY)) {
		$var(XSWildcardDecl, other, this);
		if (this->fType == $XSWildcard::NSCONSTRAINT_ANY) {
			$assign(other, wildcard);
		}
		intersectWildcard->fType = other->fType;
		$set(intersectWildcard, fNamespaceList, other->fNamespaceList);
	} else if (((this->fType == $XSWildcard::NSCONSTRAINT_NOT) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_LIST)) || ((this->fType == $XSWildcard::NSCONSTRAINT_LIST) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_NOT))) {
		$var($StringArray, list, nullptr);
		$var($StringArray, other, nullptr);
		if (this->fType == $XSWildcard::NSCONSTRAINT_NOT) {
			$assign(other, this->fNamespaceList);
			$assign(list, wildcard->fNamespaceList);
		} else {
			$assign(other, wildcard->fNamespaceList);
			$assign(list, this->fNamespaceList);
		}
		int32_t listSize = $nc(list)->length;
		$var($StringArray, intersect, $new($StringArray, listSize));
		int32_t newSize = 0;
		for (int32_t i = 0; i < listSize; ++i) {
			if (list->get(i) != $nc(other)->get(0) && list->get(i) != XSWildcardDecl::ABSENT) {
				intersect->set(newSize++, list->get(i));
			}
		}
		intersectWildcard->fType = $XSWildcard::NSCONSTRAINT_LIST;
		$set(intersectWildcard, fNamespaceList, $new($StringArray, newSize));
		$System::arraycopy(intersect, 0, intersectWildcard->fNamespaceList, 0, newSize);
	} else if ((this->fType == $XSWildcard::NSCONSTRAINT_LIST) && (wildcard->fType == $XSWildcard::NSCONSTRAINT_LIST)) {
		intersectWildcard->fType = $XSWildcard::NSCONSTRAINT_LIST;
		$set(intersectWildcard, fNamespaceList, intersect2sets(this->fNamespaceList, wildcard->fNamespaceList));
	} else if (this->fType == $XSWildcard::NSCONSTRAINT_NOT && wildcard->fType == $XSWildcard::NSCONSTRAINT_NOT) {
		if ($nc(this->fNamespaceList)->get(0) != XSWildcardDecl::ABSENT && $nc(wildcard->fNamespaceList)->get(0) != XSWildcardDecl::ABSENT) {
			return nullptr;
		}
		$var(XSWildcardDecl, other, this);
		if ($nc(this->fNamespaceList)->get(0) == XSWildcardDecl::ABSENT) {
			$assign(other, wildcard);
		}
		intersectWildcard->fType = other->fType;
		$set(intersectWildcard, fNamespaceList, other->fNamespaceList);
	}
	return intersectWildcard;
}

bool XSWildcardDecl::areSame(XSWildcardDecl* wildcard) {
	if (this->fType == $nc(wildcard)->fType) {
		if (this->fType == $XSWildcard::NSCONSTRAINT_ANY) {
			return true;
		}
		if (this->fType == $XSWildcard::NSCONSTRAINT_NOT) {
			return $nc(this->fNamespaceList)->get(0) == $nc(wildcard->fNamespaceList)->get(0);
		}
		if ($nc(this->fNamespaceList)->length == $nc(wildcard->fNamespaceList)->length) {
			for (int32_t i = 0; i < $nc(this->fNamespaceList)->length; ++i) {
				if (!elementInSet($nc(this->fNamespaceList)->get(i), wildcard->fNamespaceList)) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

$StringArray* XSWildcardDecl::intersect2sets($StringArray* one, $StringArray* theOther) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, $new($StringArray, $Math::min($nc(one)->length, $nc(theOther)->length)));
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(one)->length; ++i) {
		if (elementInSet(one->get(i), theOther)) {
			result->set(count++, one->get(i));
		}
	}
	$var($StringArray, result2, $new($StringArray, count));
	$System::arraycopy(result, 0, result2, 0, count);
	return result2;
}

$StringArray* XSWildcardDecl::union2sets($StringArray* one, $StringArray* theOther) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result1, $new($StringArray, $nc(one)->length));
	int32_t count = 0;
	for (int32_t i = 0; i < one->length; ++i) {
		if (!elementInSet(one->get(i), theOther)) {
			result1->set(count++, one->get(i));
		}
	}
	$var($StringArray, result2, $new($StringArray, count + $nc(theOther)->length));
	$System::arraycopy(result1, 0, result2, 0, count);
	$System::arraycopy(theOther, 0, result2, count, theOther->length);
	return result2;
}

bool XSWildcardDecl::subset2sets($StringArray* subSet, $StringArray* superSet) {
	for (int32_t i = 0; i < $nc(subSet)->length; ++i) {
		if (!elementInSet(subSet->get(i), superSet)) {
			return false;
		}
	}
	return true;
}

bool XSWildcardDecl::elementInSet($String* ele, $StringArray* set) {
	bool found = false;
	for (int32_t i = 0; i < $nc(set)->length && !found; ++i) {
		if (ele == set->get(i)) {
			found = true;
		}
	}
	return found;
}

$String* XSWildcardDecl::toString() {
	if (this->fDescription == nullptr) {
		$var($StringBuffer, buffer, $new($StringBuffer));
		buffer->append("WC["_s);
		switch (this->fType) {
		case $XSWildcard::NSCONSTRAINT_ANY:
			{
				$init($SchemaSymbols);
				buffer->append($SchemaSymbols::ATTVAL_TWOPOUNDANY);
				break;
			}
		case $XSWildcard::NSCONSTRAINT_NOT:
			{
				$init($SchemaSymbols);
				buffer->append($SchemaSymbols::ATTVAL_TWOPOUNDOTHER);
				buffer->append(":\""_s);
				if ($nc(this->fNamespaceList)->get(0) != nullptr) {
					buffer->append($nc(this->fNamespaceList)->get(0));
				}
				buffer->append("\""_s);
				break;
			}
		case $XSWildcard::NSCONSTRAINT_LIST:
			{
				if ($nc(this->fNamespaceList)->length == 0) {
					break;
				}
				buffer->append("\""_s);
				if ($nc(this->fNamespaceList)->get(0) != nullptr) {
					buffer->append($nc(this->fNamespaceList)->get(0));
				}
				buffer->append("\""_s);
				for (int32_t i = 1; i < $nc(this->fNamespaceList)->length; ++i) {
					buffer->append(",\""_s);
					if ($nc(this->fNamespaceList)->get(i) != nullptr) {
						buffer->append($nc(this->fNamespaceList)->get(i));
					}
					buffer->append("\""_s);
				}
				break;
			}
		}
		buffer->append(u']');
		$set(this, fDescription, buffer->toString());
	}
	return this->fDescription;
}

int16_t XSWildcardDecl::getType() {
	return $XSConstants::WILDCARD;
}

$String* XSWildcardDecl::getName() {
	return nullptr;
}

$String* XSWildcardDecl::getNamespace() {
	return nullptr;
}

int16_t XSWildcardDecl::getConstraintType() {
	return this->fType;
}

$StringList* XSWildcardDecl::getNsConstraintList() {
	return $new($StringListImpl, this->fNamespaceList, this->fNamespaceList == nullptr ? 0 : $nc(this->fNamespaceList)->length);
}

int16_t XSWildcardDecl::getProcessContents() {
	return this->fProcessContents;
}

$String* XSWildcardDecl::getProcessContentsAsString() {
	switch (this->fProcessContents) {
	case XSWildcardDecl::PC_SKIP:
		{
			return "skip"_s;
		}
	case XSWildcardDecl::PC_LAX:
		{
			return "lax"_s;
		}
	case XSWildcardDecl::PC_STRICT:
		{
			return "strict"_s;
		}
	default:
		{
			return "invalid value"_s;
		}
	}
}

$XSAnnotation* XSWildcardDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSWildcardDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSWildcardDecl::getNamespaceItem() {
	return nullptr;
}

void clinit$XSWildcardDecl($Class* class$) {
	$assignStatic(XSWildcardDecl::ABSENT, nullptr);
}

XSWildcardDecl::XSWildcardDecl() {
}

$Class* XSWildcardDecl::load$($String* name, bool initialize) {
	$loadClass(XSWildcardDecl, name, initialize, &_XSWildcardDecl_ClassInfo_, clinit$XSWildcardDecl, allocate$XSWildcardDecl);
	return class$;
}

$Class* XSWildcardDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com