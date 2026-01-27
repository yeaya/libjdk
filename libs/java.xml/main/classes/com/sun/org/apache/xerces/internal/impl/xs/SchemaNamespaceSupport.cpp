#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <jcpp.h>

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$MethodInfo _SchemaNamespaceSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaNamespaceSupport, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;)V", nullptr, $PUBLIC, $method(SchemaNamespaceSupport, init$, void, SchemaNamespaceSupport*)},
	{"getEffectiveLocalContext", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SchemaNamespaceSupport, getEffectiveLocalContext, $StringArray*)},
	{"makeGlobal", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaNamespaceSupport, makeGlobal, void)},
	{"setEffectiveContext", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaNamespaceSupport, setEffectiveContext, void, $StringArray*)},
	{}
};

$ClassInfo _SchemaNamespaceSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaNamespaceSupport",
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport",
	nullptr,
	nullptr,
	_SchemaNamespaceSupport_MethodInfo_
};

$Object* allocate$SchemaNamespaceSupport($Class* clazz) {
	return $of($alloc(SchemaNamespaceSupport));
}

void SchemaNamespaceSupport::init$() {
	$NamespaceSupport::init$();
}

void SchemaNamespaceSupport::init$(SchemaNamespaceSupport* nSupport) {
	$NamespaceSupport::init$();
	this->fNamespaceSize = $nc(nSupport)->fNamespaceSize;
	if ($nc(this->fNamespace)->length < this->fNamespaceSize) {
		$set(this, fNamespace, $new($StringArray, this->fNamespaceSize));
	}
	$System::arraycopy(nSupport->fNamespace, 0, this->fNamespace, 0, this->fNamespaceSize);
	this->fCurrentContext = nSupport->fCurrentContext;
	if ($nc(this->fContext)->length <= this->fCurrentContext) {
		$set(this, fContext, $new($ints, this->fCurrentContext + 1));
	}
	$System::arraycopy(nSupport->fContext, 0, this->fContext, 0, this->fCurrentContext + 1);
}

void SchemaNamespaceSupport::setEffectiveContext($StringArray* namespaceDecls) {
	if (namespaceDecls == nullptr || $nc(namespaceDecls)->length == 0) {
		return;
	}
	pushContext();
	int32_t newSize = this->fNamespaceSize + $nc(namespaceDecls)->length;
	if ($nc(this->fNamespace)->length < newSize) {
		$var($StringArray, tempNSArray, $new($StringArray, newSize));
		$System::arraycopy(this->fNamespace, 0, tempNSArray, 0, $nc(this->fNamespace)->length);
		$set(this, fNamespace, tempNSArray);
	}
	$System::arraycopy(namespaceDecls, 0, this->fNamespace, this->fNamespaceSize, namespaceDecls->length);
	this->fNamespaceSize = newSize;
}

$StringArray* SchemaNamespaceSupport::getEffectiveLocalContext() {
	$var($StringArray, returnVal, nullptr);
	if (this->fCurrentContext >= 3) {
		int32_t bottomLocalContext = $nc(this->fContext)->get(3);
		int32_t copyCount = this->fNamespaceSize - bottomLocalContext;
		if (copyCount > 0) {
			$assign(returnVal, $new($StringArray, copyCount));
			$System::arraycopy(this->fNamespace, bottomLocalContext, returnVal, 0, copyCount);
		}
	}
	return returnVal;
}

void SchemaNamespaceSupport::makeGlobal() {
	if (this->fCurrentContext >= 3) {
		this->fCurrentContext = 3;
		this->fNamespaceSize = $nc(this->fContext)->get(3);
	}
}

SchemaNamespaceSupport::SchemaNamespaceSupport() {
}

$Class* SchemaNamespaceSupport::load$($String* name, bool initialize) {
	$loadClass(SchemaNamespaceSupport, name, initialize, &_SchemaNamespaceSupport_ClassInfo_, allocate$SchemaNamespaceSupport);
	return class$;
}

$Class* SchemaNamespaceSupport::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com