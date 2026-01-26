#include <javax/management/loading/MLetMBean.h>

#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Set = ::java::util::Set;

namespace javax {
	namespace management {
		namespace loading {

$MethodInfo _MLetMBean_MethodInfo_[] = {
	{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, addURL, void, $URL*)},
	{"addURL", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, addURL, void, $String*), "javax.management.ServiceNotFoundException"},
	{"getLibraryDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getLibraryDirectory, $String*)},
	{"getMBeansFromURL", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getMBeansFromURL, $Set*, $String*), "javax.management.ServiceNotFoundException"},
	{"getMBeansFromURL", "(Ljava/net/URL;)Ljava/util/Set;", "(Ljava/net/URL;)Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getMBeansFromURL, $Set*, $URL*), "javax.management.ServiceNotFoundException"},
	{"getResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getResource, $URL*, $String*)},
	{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getResourceAsStream, $InputStream*, $String*)},
	{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getResources, $Enumeration*, $String*), "java.io.IOException"},
	{"getURLs", "()[Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, getURLs, $URLArray*)},
	{"setLibraryDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MLetMBean, setLibraryDirectory, void, $String*)},
	{}
};

$ClassInfo _MLetMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.loading.MLetMBean",
	nullptr,
	nullptr,
	nullptr,
	_MLetMBean_MethodInfo_
};

$Object* allocate$MLetMBean($Class* clazz) {
	return $of($alloc(MLetMBean));
}

$Class* MLetMBean::load$($String* name, bool initialize) {
	$loadClass(MLetMBean, name, initialize, &_MLetMBean_ClassInfo_, allocate$MLetMBean);
	return class$;
}

$Class* MLetMBean::class$ = nullptr;

		} // loading
	} // management
} // javax