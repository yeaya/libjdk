#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints$1.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <jcpp.h>

using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
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

$MethodInfo _XSConstraints$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XSConstraints$1, init$, void)},
	{"compare", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)I", nullptr, $PUBLIC, $virtualMethod(XSConstraints$1, compare, int32_t, $XSParticleDecl*, $XSParticleDecl*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSConstraints$1, compare, int32_t, Object$*, Object$*)},
	{}
};

$EnclosingMethodInfo _XSConstraints$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints",
	nullptr,
	nullptr
};

$InnerClassInfo _XSConstraints$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSConstraints$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_XSConstraints$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;",
	&_XSConstraints$1_EnclosingMethodInfo_,
	_XSConstraints$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints"
};

$Object* allocate$XSConstraints$1($Class* clazz) {
	return $of($alloc(XSConstraints$1));
}

void XSConstraints$1::init$() {
}

int32_t XSConstraints$1::compare($XSParticleDecl* o1, $XSParticleDecl* o2) {
	$useLocalCurrentObjectStackCache();
	$var($XSParticleDecl, pDecl1, o1);
	$var($XSParticleDecl, pDecl2, o2);
	$var($XSElementDecl, decl1, $cast($XSElementDecl, $nc(pDecl1)->fValue));
	$var($XSElementDecl, decl2, $cast($XSElementDecl, $nc(pDecl2)->fValue));
	$var($String, namespace1, $nc(decl1)->getNamespace());
	$var($String, namespace2, $nc(decl2)->getNamespace());
	$var($String, name1, decl1->getName());
	$var($String, name2, decl2->getName());
	bool sameNamespace = (namespace1 == namespace2);
	int32_t namespaceComparison = 0;
	if (!sameNamespace) {
		if (namespace1 != nullptr) {
			if (namespace2 != nullptr) {
				namespaceComparison = namespace1->compareTo(namespace2);
			} else {
				namespaceComparison = 1;
			}
		} else {
			namespaceComparison = -1;
		}
	}
	return namespaceComparison != 0 ? namespaceComparison : $nc(name1)->compareTo(name2);
}

int32_t XSConstraints$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($XSParticleDecl, o1), $cast($XSParticleDecl, o2));
}

XSConstraints$1::XSConstraints$1() {
}

$Class* XSConstraints$1::load$($String* name, bool initialize) {
	$loadClass(XSConstraints$1, name, initialize, &_XSConstraints$1_ClassInfo_, allocate$XSConstraints$1);
	return class$;
}

$Class* XSConstraints$1::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com