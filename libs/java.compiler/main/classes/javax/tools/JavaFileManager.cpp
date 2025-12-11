#include <javax/tools/JavaFileManager.h>

#include <java/io/Closeable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ServiceLoader = ::java::util::ServiceLoader;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace javax {
	namespace tools {

$MethodInfo _JavaFileManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoader", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getServiceLoader", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class;)Ljava/util/ServiceLoader;", "<S:Ljava/lang/Object;>(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class<TS;>;)Ljava/util/ServiceLoader<TS;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", "(Ljava/lang/String;Ljava/util/Iterator<Ljava/lang/String;>;)Z", $PUBLIC | $ABSTRACT},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavaFileManager_InnerClassesInfo_[] = {
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaFileManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.JavaFileManager",
	nullptr,
	"java.io.Closeable,java.io.Flushable,javax.tools.OptionChecker",
	nullptr,
	_JavaFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_JavaFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.tools.JavaFileManager$Location"
};

$Object* allocate$JavaFileManager($Class* clazz) {
	return $of($alloc(JavaFileManager));
}

int32_t JavaFileManager::hashCode() {
	 return this->$Closeable::hashCode();
}

bool JavaFileManager::equals(Object$* arg0) {
	 return this->$Closeable::equals(arg0);
}

$Object* JavaFileManager::clone() {
	 return this->$Closeable::clone();
}

$String* JavaFileManager::toString() {
	 return this->$Closeable::toString();
}

void JavaFileManager::finalize() {
	this->$Closeable::finalize();
}

$JavaFileManager$Location* JavaFileManager::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$JavaFileManager$Location* JavaFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$ServiceLoader* JavaFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* JavaFileManager::inferModuleName($JavaFileManager$Location* location) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Iterable* JavaFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool JavaFileManager::contains($JavaFileManager$Location* location, $FileObject* fo) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* JavaFileManager::load$($String* name, bool initialize) {
	$loadClass(JavaFileManager, name, initialize, &_JavaFileManager_ClassInfo_, allocate$JavaFileManager);
	return class$;
}

$Class* JavaFileManager::class$ = nullptr;

	} // tools
} // javax