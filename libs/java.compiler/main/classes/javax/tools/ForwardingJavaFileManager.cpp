#include <javax/tools/ForwardingJavaFileManager.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/OptionChecker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $OptionChecker = ::javax::tools::OptionChecker;

namespace javax {
	namespace tools {

$FieldInfo _ForwardingJavaFileManager_FieldInfo_[] = {
	{"fileManager", "Ljavax/tools/JavaFileManager;", "TM;", $PROTECTED | $FINAL, $field(ForwardingJavaFileManager, fileManager)},
	{}
};

$MethodInfo _ForwardingJavaFileManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager;)V", "(TM;)V", $PROTECTED, $method(static_cast<void(ForwardingJavaFileManager::*)($JavaFileManager*)>(&ForwardingJavaFileManager::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getClassLoader", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getServiceLoader", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class;)Ljava/util/ServiceLoader;", "<S:Ljava/lang/Object;>(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class<TS;>;)Ljava/util/ServiceLoader<TS;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", "(Ljava/lang/String;Ljava/util/Iterator<Ljava/lang/String;>;)Z", $PUBLIC},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ForwardingJavaFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.tools.ForwardingJavaFileManager",
	"java.lang.Object",
	"javax.tools.JavaFileManager",
	_ForwardingJavaFileManager_FieldInfo_,
	_ForwardingJavaFileManager_MethodInfo_,
	"<M::Ljavax/tools/JavaFileManager;>Ljava/lang/Object;Ljavax/tools/JavaFileManager;"
};

$Object* allocate$ForwardingJavaFileManager($Class* clazz) {
	return $of($alloc(ForwardingJavaFileManager));
}

void ForwardingJavaFileManager::init$($JavaFileManager* fileManager) {
	$set(this, fileManager, $cast($JavaFileManager, $Objects::requireNonNull(fileManager)));
}

$ClassLoader* ForwardingJavaFileManager::getClassLoader($JavaFileManager$Location* location) {
	return $nc(this->fileManager)->getClassLoader(location);
}

$Iterable* ForwardingJavaFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	return $nc(this->fileManager)->list(location, packageName, kinds, recurse);
}

$String* ForwardingJavaFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	return $nc(this->fileManager)->inferBinaryName(location, file);
}

bool ForwardingJavaFileManager::isSameFile($FileObject* a, $FileObject* b) {
	return $nc(this->fileManager)->isSameFile(a, b);
}

bool ForwardingJavaFileManager::handleOption($String* current, $Iterator* remaining) {
	return $nc(this->fileManager)->handleOption(current, remaining);
}

bool ForwardingJavaFileManager::hasLocation($JavaFileManager$Location* location) {
	return $nc(this->fileManager)->hasLocation(location);
}

int32_t ForwardingJavaFileManager::isSupportedOption($String* option) {
	return $nc(this->fileManager)->isSupportedOption(option);
}

$JavaFileObject* ForwardingJavaFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	return $nc(this->fileManager)->getJavaFileForInput(location, className, kind);
}

$JavaFileObject* ForwardingJavaFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	return $nc(this->fileManager)->getJavaFileForOutput(location, className, kind, sibling);
}

$FileObject* ForwardingJavaFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	return $nc(this->fileManager)->getFileForInput(location, packageName, relativeName);
}

$FileObject* ForwardingJavaFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	return $nc(this->fileManager)->getFileForOutput(location, packageName, relativeName, sibling);
}

void ForwardingJavaFileManager::flush() {
	$nc(this->fileManager)->flush();
}

void ForwardingJavaFileManager::close() {
	$nc(this->fileManager)->close();
}

$JavaFileManager$Location* ForwardingJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $String* moduleName) {
	return $nc(this->fileManager)->getLocationForModule(location, moduleName);
}

$JavaFileManager$Location* ForwardingJavaFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	return $nc(this->fileManager)->getLocationForModule(location, fo);
}

$ServiceLoader* ForwardingJavaFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	return $nc(this->fileManager)->getServiceLoader(location, service);
}

$String* ForwardingJavaFileManager::inferModuleName($JavaFileManager$Location* location) {
	return $nc(this->fileManager)->inferModuleName(location);
}

$Iterable* ForwardingJavaFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	return $nc(this->fileManager)->listLocationsForModules(location);
}

bool ForwardingJavaFileManager::contains($JavaFileManager$Location* location, $FileObject* fo) {
	return $nc(this->fileManager)->contains(location, fo);
}

ForwardingJavaFileManager::ForwardingJavaFileManager() {
}

$Class* ForwardingJavaFileManager::load$($String* name, bool initialize) {
	$loadClass(ForwardingJavaFileManager, name, initialize, &_ForwardingJavaFileManager_ClassInfo_, allocate$ForwardingJavaFileManager);
	return class$;
}

$Class* ForwardingJavaFileManager::class$ = nullptr;

	} // tools
} // javax