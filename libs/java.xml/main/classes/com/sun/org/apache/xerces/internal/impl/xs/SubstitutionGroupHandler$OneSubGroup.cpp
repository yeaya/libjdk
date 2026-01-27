#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <jcpp.h>

using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
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

$FieldInfo _SubstitutionGroupHandler$OneSubGroup_FieldInfo_[] = {
	{"sub", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, 0, $field(SubstitutionGroupHandler$OneSubGroup, sub)},
	{"dMethod", "S", nullptr, 0, $field(SubstitutionGroupHandler$OneSubGroup, dMethod)},
	{"bMethod", "S", nullptr, 0, $field(SubstitutionGroupHandler$OneSubGroup, bMethod)},
	{}
};

$MethodInfo _SubstitutionGroupHandler$OneSubGroup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SubstitutionGroupHandler$OneSubGroup, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;SS)V", nullptr, 0, $method(SubstitutionGroupHandler$OneSubGroup, init$, void, $XSElementDecl*, int16_t, int16_t)},
	{}
};

$InnerClassInfo _SubstitutionGroupHandler$OneSubGroup_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler$OneSubGroup", "com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler", "OneSubGroup", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SubstitutionGroupHandler$OneSubGroup_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler$OneSubGroup",
	"java.lang.Object",
	nullptr,
	_SubstitutionGroupHandler$OneSubGroup_FieldInfo_,
	_SubstitutionGroupHandler$OneSubGroup_MethodInfo_,
	nullptr,
	nullptr,
	_SubstitutionGroupHandler$OneSubGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler"
};

$Object* allocate$SubstitutionGroupHandler$OneSubGroup($Class* clazz) {
	return $of($alloc(SubstitutionGroupHandler$OneSubGroup));
}

void SubstitutionGroupHandler$OneSubGroup::init$() {
}

void SubstitutionGroupHandler$OneSubGroup::init$($XSElementDecl* sub, int16_t dMethod, int16_t bMethod) {
	$set(this, sub, sub);
	this->dMethod = dMethod;
	this->bMethod = bMethod;
}

SubstitutionGroupHandler$OneSubGroup::SubstitutionGroupHandler$OneSubGroup() {
}

$Class* SubstitutionGroupHandler$OneSubGroup::load$($String* name, bool initialize) {
	$loadClass(SubstitutionGroupHandler$OneSubGroup, name, initialize, &_SubstitutionGroupHandler$OneSubGroup_ClassInfo_, allocate$SubstitutionGroupHandler$OneSubGroup);
	return class$;
}

$Class* SubstitutionGroupHandler$OneSubGroup::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com