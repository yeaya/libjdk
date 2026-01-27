#include <javax/xml/xpath/XPathFactoryFinder$2.h>

#include <java/security/AccessControlContext.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryFinder.h>
#include <jcpp.h>

#undef SERVICE_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryFinder = ::javax::xml::xpath::XPathFactoryFinder;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathFactoryFinder$2_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/xpath/XPathFactoryFinder;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$2, this$0)},
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$2, val$acc)},
	{"val$objectModel", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$2, val$objectModel)},
	{}
};

$MethodInfo _XPathFactoryFinder$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;Ljava/lang/String;Ljava/security/AccessControlContext;)V", "()V", 0, $method(XPathFactoryFinder$2, init$, void, $XPathFactoryFinder*, $String*, $AccessControlContext*)},
	{"run", "()Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _XPathFactoryFinder$2_EnclosingMethodInfo_ = {
	"javax.xml.xpath.XPathFactoryFinder",
	"findServiceProvider",
	"(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;"
};

$InnerClassInfo _XPathFactoryFinder$2_InnerClassesInfo_[] = {
	{"javax.xml.xpath.XPathFactoryFinder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XPathFactoryFinder$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.xpath.XPathFactoryFinder$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XPathFactoryFinder$2_FieldInfo_,
	_XPathFactoryFinder$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/xml/xpath/XPathFactory;>;",
	&_XPathFactoryFinder$2_EnclosingMethodInfo_,
	_XPathFactoryFinder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.xpath.XPathFactoryFinder"
};

$Object* allocate$XPathFactoryFinder$2($Class* clazz) {
	return $of($alloc(XPathFactoryFinder$2));
}

void XPathFactoryFinder$2::init$($XPathFactoryFinder* this$0, $String* val$objectModel, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$objectModel, val$objectModel);
	$set(this, val$acc, val$acc);
}

$Object* XPathFactoryFinder$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($XPathFactoryFinder);
	$var($ServiceLoader, loader, $ServiceLoader::load($XPathFactoryFinder::SERVICE_CLASS));
	{
		$var($Iterator, i$, $nc(loader)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XPathFactory, factory, $cast($XPathFactory, i$->next()));
			{
				if (this->this$0->isObjectModelSupportedBy(factory, this->val$objectModel, this->val$acc)) {
					return $of(factory);
				}
			}
		}
	}
	return $of(nullptr);
}

XPathFactoryFinder$2::XPathFactoryFinder$2() {
}

$Class* XPathFactoryFinder$2::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$2, name, initialize, &_XPathFactoryFinder$2_ClassInfo_, allocate$XPathFactoryFinder$2);
	return class$;
}

$Class* XPathFactoryFinder$2::class$ = nullptr;

		} // xpath
	} // xml
} // javax