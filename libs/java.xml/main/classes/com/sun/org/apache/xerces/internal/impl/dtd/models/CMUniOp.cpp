#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMUniOp.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE

using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

void CMUniOp::init$(int32_t type, $CMNode* childNode) {
	$CMNode::init$(type);
	bool var$1 = this->type() != $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE;
	bool var$0 = var$1 && (this->type() != $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE);
	if (var$0 && (this->type() != $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE)) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_UST"_s);
	}
	$set(this, fChild, childNode);
}

$CMNode* CMUniOp::getChild() {
	return this->fChild;
}

bool CMUniOp::isNullable() {
	if (type() == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE) {
		return $nc(this->fChild)->isNullable();
	} else {
		return true;
	}
}

void CMUniOp::calcFirstPos($CMStateSet* toSet) {
	$nc(toSet)->setTo($($nc(this->fChild)->firstPos()));
}

void CMUniOp::calcLastPos($CMStateSet* toSet) {
	$nc(toSet)->setTo($($nc(this->fChild)->lastPos()));
}

CMUniOp::CMUniOp() {
}

$Class* CMUniOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(CMUniOp, fChild)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PUBLIC, $method(CMUniOp, init$, void, int32_t, $CMNode*)},
		{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(CMUniOp, calcFirstPos, void, $CMStateSet*)},
		{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(CMUniOp, calcLastPos, void, $CMStateSet*)},
		{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(CMUniOp, getChild, $CMNode*)},
		{"isNullable", "()Z", nullptr, $PUBLIC, $virtualMethod(CMUniOp, isNullable, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dtd.models.CMUniOp",
		"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CMUniOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMUniOp);
	});
	return class$;
}

$Class* CMUniOp::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com