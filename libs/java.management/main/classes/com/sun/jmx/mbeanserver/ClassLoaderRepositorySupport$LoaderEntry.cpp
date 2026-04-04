#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry.h>
#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void ClassLoaderRepositorySupport$LoaderEntry::init$($ObjectName* name, $ClassLoader* loader) {
	$set(this, name, name);
	$set(this, loader, loader);
}

ClassLoaderRepositorySupport$LoaderEntry::ClassLoaderRepositorySupport$LoaderEntry() {
}

$Class* ClassLoaderRepositorySupport$LoaderEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljavax/management/ObjectName;", nullptr, 0, $field(ClassLoaderRepositorySupport$LoaderEntry, name)},
		{"loader", "Ljava/lang/ClassLoader;", nullptr, 0, $field(ClassLoaderRepositorySupport$LoaderEntry, loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(ClassLoaderRepositorySupport$LoaderEntry, init$, void, $ObjectName*, $ClassLoader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry", "com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport", "LoaderEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport"
	};
	$loadClass(ClassLoaderRepositorySupport$LoaderEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderRepositorySupport$LoaderEntry);
	});
	return class$;
}

$Class* ClassLoaderRepositorySupport$LoaderEntry::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com