#include <com/apple/eio/FileManager.h>
#include <com/apple/eio/FileManager$1.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $FileManager$1 = ::com::apple::eio::FileManager$1;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;

namespace com {
	namespace apple {
		namespace eio {

void FileManager::init$() {
}

int32_t FileManager::OSTypeToInt($String* type) {
	$init(FileManager);
	int32_t result = 0;
	$var($bytes, b, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	int32_t len = $nc(type)->length();
	if (len > 0) {
		if (len > 4) {
			len = 4;
		}
		type->getBytes(0, len, b, 4 - len);
	}
	for (int32_t i = 0; i < len; ++i) {
		if (i > 0) {
			result <<= 8;
		}
		result |= (b->get(i) & 0xff);
	}
	return result;
}

void FileManager::setFileTypeAndCreator($String* filename, int32_t type, int32_t creator) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileTypeAndCreator(filename, type, creator);
}

void FileManager::_setFileTypeAndCreator($String* filename, int32_t type, int32_t creator) {
	$init(FileManager);
	$prepareNativeStatic(_setFileTypeAndCreator, void, $String* filename, int32_t type, int32_t creator);
	$invokeNativeStatic(filename, type, creator);
	$finishNativeStatic();
}

void FileManager::setFileType($String* filename, int32_t type) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileType(filename, type);
}

void FileManager::_setFileType($String* filename, int32_t type) {
	$init(FileManager);
	$prepareNativeStatic(_setFileType, void, $String* filename, int32_t type);
	$invokeNativeStatic(filename, type);
	$finishNativeStatic();
}

void FileManager::setFileCreator($String* filename, int32_t creator) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileCreator(filename, creator);
}

void FileManager::_setFileCreator($String* filename, int32_t creator) {
	$init(FileManager);
	$prepareNativeStatic(_setFileCreator, void, $String* filename, int32_t creator);
	$invokeNativeStatic(filename, creator);
	$finishNativeStatic();
}

int32_t FileManager::getFileType($String* filename) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	return _getFileType(filename);
}

int32_t FileManager::_getFileType($String* filename) {
	$init(FileManager);
	$prepareNativeStatic(_getFileType, int32_t, $String* filename);
	int32_t $ret = $invokeNativeStatic(filename);
	$finishNativeStatic();
	return $ret;
}

int32_t FileManager::getFileCreator($String* filename) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	return _getFileCreator(filename);
}

int32_t FileManager::_getFileCreator($String* filename) {
	$init(FileManager);
	$prepareNativeStatic(_getFileCreator, int32_t, $String* filename);
	int32_t $ret = $invokeNativeStatic(filename);
	$finishNativeStatic();
	return $ret;
}

$String* FileManager::findFolder(int32_t folderType) {
	$init(FileManager);
	return findFolder(FileManager::kOnAppropriateDisk, folderType);
}

$String* FileManager::findFolder(int16_t domain, int32_t folderType) {
	$init(FileManager);
	return findFolder(domain, folderType, false);
}

$String* FileManager::findFolder(int16_t domain, int32_t folderType, bool createIfNeeded) {
	$init(FileManager);
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canExamineFileSystem"_s));
	}
	$var($String, foundFolder, _findFolder(domain, folderType, createIfNeeded));
	if (foundFolder == nullptr) {
		$throwNew($FileNotFoundException, $$str({"Can\'t find folder: "_s, $($Integer::toHexString(folderType))}));
	}
	return foundFolder;
}

$String* FileManager::_findFolder(int16_t domain, int32_t folderType, bool createIfNeeded) {
	$init(FileManager);
	$prepareNativeStatic(_findFolder, $String*, int16_t domain, int32_t folderType, bool createIfNeeded);
	$var($String, $ret, $invokeNativeStaticObject(domain, folderType, createIfNeeded));
	$finishNativeStatic();
	return $ret;
}

void FileManager::openURL($String* url) {
	$init(FileManager);
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canOpenURLs"_s));
	}
	_openURL(url);
}

void FileManager::_openURL($String* url) {
	$init(FileManager);
	$prepareNativeStatic(_openURL, void, $String* url);
	$invokeNativeStatic(url);
	$finishNativeStatic();
}

$String* FileManager::getResource($String* resourceName) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, nullptr, nullptr);
}

$String* FileManager::getResource($String* resourceName, $String* subDirName) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, subDirName, nullptr);
}

$String* FileManager::getResource($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, subDirName, type);
}

$String* FileManager::getNativeResourceFromBundle($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	$prepareNativeStatic(getNativeResourceFromBundle, $String*, $String* resourceName, $String* subDirName, $String* type);
	$var($String, $ret, $invokeNativeStaticObject(resourceName, subDirName, type));
	$finishNativeStatic();
	return $ret;
}

$String* FileManager::getResourceFromBundle($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canReadBundle"_s));
	}
	$var($String, resourceFromBundle, getNativeResourceFromBundle(resourceName, subDirName, type));
	if (resourceFromBundle == nullptr) {
		$throwNew($FileNotFoundException, resourceName);
	}
	return resourceFromBundle;
}

$String* FileManager::getPathToApplicationBundle() {
	$init(FileManager);
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canReadBundle"_s));
	}
	return getNativePathToApplicationBundle();
}

$String* FileManager::getNativePathToApplicationBundle() {
	$init(FileManager);
	$prepareNativeStatic(getNativePathToApplicationBundle, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool FileManager::moveToTrash($File* file) {
	$init(FileManager);
	$useLocalObjectStack();
	if (file == nullptr) {
		$throwNew($FileNotFoundException);
	}
	$var($String, fileName, $nc(file)->getAbsolutePath());
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkDelete(fileName);
	}
	return _moveToTrash(fileName);
}

bool FileManager::_moveToTrash($String* fileName) {
	$init(FileManager);
	$prepareNativeStatic(_moveToTrash, bool, $String* fileName);
	bool $ret = $invokeNativeStatic(fileName);
	$finishNativeStatic();
	return $ret;
}

bool FileManager::revealInFinder($File* file) {
	$init(FileManager);
	$useLocalObjectStack();
	if (file == nullptr || !file->exists()) {
		$throwNew($FileNotFoundException);
	}
	$var($String, fileName, $nc(file)->getAbsolutePath());
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(fileName);
	}
	return _revealInFinder(fileName);
}

bool FileManager::_revealInFinder($String* fileName) {
	$init(FileManager);
	$prepareNativeStatic(_revealInFinder, bool, $String* fileName);
	bool $ret = $invokeNativeStatic(fileName);
	$finishNativeStatic();
	return $ret;
}

void FileManager::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($FileManager$1));
	}
}

FileManager::FileManager() {
}

$Class* FileManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kOnAppropriateDisk", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kOnAppropriateDisk)},
		{"kSystemDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kSystemDomain)},
		{"kLocalDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kLocalDomain)},
		{"kNetworkDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kNetworkDomain)},
		{"kUserDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kUserDomain)},
		{}
	};
	$CompoundAttribute openURLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileManager, init$, void)},
		{"OSTypeToInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, OSTypeToInt, int32_t, $String*)},
		{"_findFolder", "(SIZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _findFolder, $String*, int16_t, int32_t, bool)},
		{"_getFileCreator", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _getFileCreator, int32_t, $String*), "java.io.IOException"},
		{"_getFileType", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _getFileType, int32_t, $String*), "java.io.IOException"},
		{"_moveToTrash", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _moveToTrash, bool, $String*)},
		{"_openURL", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _openURL, void, $String*), "java.io.IOException"},
		{"_revealInFinder", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _revealInFinder, bool, $String*)},
		{"_setFileCreator", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _setFileCreator, void, $String*, int32_t), "java.io.IOException"},
		{"_setFileType", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _setFileType, void, $String*, int32_t), "java.io.IOException"},
		{"_setFileTypeAndCreator", "(Ljava/lang/String;II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, _setFileTypeAndCreator, void, $String*, int32_t, int32_t), "java.io.IOException"},
		{"findFolder", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, findFolder, $String*, int32_t), "java.io.FileNotFoundException"},
		{"findFolder", "(SI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, findFolder, $String*, int16_t, int32_t), "java.io.FileNotFoundException"},
		{"findFolder", "(SIZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, findFolder, $String*, int16_t, int32_t, bool), "java.io.FileNotFoundException"},
		{"getFileCreator", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getFileCreator, int32_t, $String*), "java.io.IOException"},
		{"getFileType", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getFileType, int32_t, $String*), "java.io.IOException"},
		{"getNativePathToApplicationBundle", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, getNativePathToApplicationBundle, $String*)},
		{"getNativeResourceFromBundle", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileManager, getNativeResourceFromBundle, $String*, $String*, $String*, $String*), "java.io.FileNotFoundException"},
		{"getPathToApplicationBundle", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getPathToApplicationBundle, $String*)},
		{"getResource", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getResource, $String*, $String*), "java.io.FileNotFoundException"},
		{"getResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getResource, $String*, $String*, $String*), "java.io.FileNotFoundException"},
		{"getResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, getResource, $String*, $String*, $String*, $String*), "java.io.FileNotFoundException"},
		{"getResourceFromBundle", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(FileManager, getResourceFromBundle, $String*, $String*, $String*, $String*), "java.io.FileNotFoundException"},
		{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, moveToTrash, bool, $File*), "java.io.FileNotFoundException"},
		{"openURL", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(FileManager, openURL, void, $String*), "java.io.IOException", nullptr, openURLmethodAnnotations$$},
		{"revealInFinder", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, revealInFinder, bool, $File*), "java.io.FileNotFoundException"},
		{"setFileCreator", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, setFileCreator, void, $String*, int32_t), "java.io.IOException"},
		{"setFileType", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, setFileType, void, $String*, int32_t), "java.io.IOException"},
		{"setFileTypeAndCreator", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileManager, setFileTypeAndCreator, void, $String*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eio.FileManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eio.FileManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.eio.FileManager$1"
	};
	$loadClass(FileManager, name, initialize, &classInfo$$, FileManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileManager);
	});
	return class$;
}

$Class* FileManager::class$ = nullptr;

		} // eio
	} // apple
} // com