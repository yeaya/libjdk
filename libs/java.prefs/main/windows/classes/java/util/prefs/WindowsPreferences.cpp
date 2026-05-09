#include <java/util/prefs/WindowsPreferences.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/StringTokenizer.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Base64.h>
#include <java/util/prefs/Preferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DELETE
#undef DISPOSITION
#undef ERROR_ACCESS_DENIED
#undef ERROR_CODE
#undef ERROR_FILE_NOT_FOUND
#undef ERROR_SUCCESS
#undef HKEY_CURRENT_USER
#undef HKEY_LOCAL_MACHINE
#undef INIT_SLEEP_TIME
#undef KEY_ALL_ACCESS
#undef KEY_CREATE_SUB_KEY
#undef KEY_ENUMERATE_SUB_KEYS
#undef KEY_QUERY_VALUE
#undef KEY_READ
#undef KEY_SET_VALUE
#undef KEY_WRITE
#undef MAX_ATTEMPTS
#undef MAX_KEY_LENGTH
#undef MAX_VALUE_NAME_LENGTH
#undef MAX_WINDOWS_PATH_LENGTH
#undef NATIVE_HANDLE
#undef NULL_NATIVE_HANDLE
#undef REG_CREATED_NEW_KEY
#undef REG_OPENED_EXISTING_KEY
#undef SUBKEYS_NUMBER
#undef SYSTEM_ROOT_NATIVE_HANDLE
#undef USER_ROOT_NATIVE_HANDLE
#undef VALUES_NUMBER
#undef WINDOWS_ROOT_PATH

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $StringTokenizer = ::java::util::StringTokenizer;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Base64 = ::java::util::prefs::Base64;
using $Preferences = ::java::util::prefs::Preferences;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace prefs {

class WindowsPreferences$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(WindowsPreferences$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return WindowsPreferences::lambda$static$0();
	}
};
$Class* WindowsPreferences$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsPreferences$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsPreferences$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.prefs.WindowsPreferences$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsPreferences$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsPreferences$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* WindowsPreferences$$Lambda$lambda$static$0::class$ = nullptr;

$PlatformLogger* WindowsPreferences::logger$ = nullptr;
$bytes* WindowsPreferences::WINDOWS_ROOT_PATH = nullptr;
$volatile($Preferences*) WindowsPreferences::userRoot = nullptr;
$volatile($Preferences*) WindowsPreferences::systemRoot = nullptr;
int32_t WindowsPreferences::INIT_SLEEP_TIME = 0;
int32_t WindowsPreferences::MAX_ATTEMPTS = 0;

$Preferences* WindowsPreferences::getUserRoot() {
	$init(WindowsPreferences);
	$var($Preferences, root, WindowsPreferences::userRoot);
	if (root == nullptr) {
		$synchronized(WindowsPreferences::class$) {
			$assign(root, WindowsPreferences::userRoot);
			if (root == nullptr) {
				$assign(root, $new(WindowsPreferences, WindowsPreferences::USER_ROOT_NATIVE_HANDLE, WindowsPreferences::WINDOWS_ROOT_PATH));
				$assignStatic(WindowsPreferences::userRoot, root);
			}
		}
	}
	return root;
}

$Preferences* WindowsPreferences::getSystemRoot() {
	$init(WindowsPreferences);
	$var($Preferences, root, WindowsPreferences::systemRoot);
	if (root == nullptr) {
		$synchronized(WindowsPreferences::class$) {
			$assign(root, WindowsPreferences::systemRoot);
			if (root == nullptr) {
				$assign(root, $new(WindowsPreferences, WindowsPreferences::SYSTEM_ROOT_NATIVE_HANDLE, WindowsPreferences::WINDOWS_ROOT_PATH));
				$assignStatic(WindowsPreferences::systemRoot, root);
			}
		}
	}
	return root;
}

$longs* WindowsPreferences::WindowsRegOpenKey(int64_t hKey, $bytes* subKey, int32_t securityMask) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegOpenKey, $longs*, int64_t hKey, $bytes* subKey, int32_t securityMask);
	$var($longs, $ret, $invokeNativeStaticObject(hKey, subKey, securityMask));
	$finishNativeStatic();
	return $ret;
}

$longs* WindowsPreferences::WindowsRegOpenKey1(int64_t hKey, $bytes* subKey, int32_t securityMask) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($longs, result, WindowsRegOpenKey(hKey, subKey, securityMask));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
		return result;
	} else if (result->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_FILE_NOT_FOUND) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Trying to recreate Windows registry node "_s);
		var$0->append($(byteArrayToString(subKey)));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(hKey)));
		var$0->append("."_s);
		$$nc(logger())->warning($$str(var$0));
		int64_t handle = $nc($(WindowsRegCreateKeyEx(hKey, subKey)))->get(WindowsPreferences::NATIVE_HANDLE);
		WindowsRegCloseKey(handle);
		return WindowsRegOpenKey(hKey, subKey, securityMask);
	} else if (result->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_ACCESS_DENIED) {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			$assign(result, WindowsRegOpenKey(hKey, subKey, securityMask));
			if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
				return result;
			}
		}
	}
	return result;
}

int32_t WindowsPreferences::WindowsRegCloseKey(int64_t hKey) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegCloseKey, int32_t, int64_t hKey);
	int32_t $ret = $invokeNativeStatic(hKey);
	$finishNativeStatic();
	return $ret;
}

$longs* WindowsPreferences::WindowsRegCreateKeyEx(int64_t hKey, $bytes* subKey) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegCreateKeyEx, $longs*, int64_t hKey, $bytes* subKey);
	$var($longs, $ret, $invokeNativeStaticObject(hKey, subKey));
	$finishNativeStatic();
	return $ret;
}

$longs* WindowsPreferences::WindowsRegCreateKeyEx1(int64_t hKey, $bytes* subKey) {
	$init(WindowsPreferences);
	$var($longs, result, WindowsRegCreateKeyEx(hKey, subKey));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			$assign(result, WindowsRegCreateKeyEx(hKey, subKey));
			if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
				return result;
			}
		}
	}
	return result;
}

int32_t WindowsPreferences::WindowsRegDeleteKey(int64_t hKey, $bytes* subKey) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegDeleteKey, int32_t, int64_t hKey, $bytes* subKey);
	int32_t $ret = $invokeNativeStatic(hKey, subKey);
	$finishNativeStatic();
	return $ret;
}

int32_t WindowsPreferences::WindowsRegFlushKey(int64_t hKey) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegFlushKey, int32_t, int64_t hKey);
	int32_t $ret = $invokeNativeStatic(hKey);
	$finishNativeStatic();
	return $ret;
}

int32_t WindowsPreferences::WindowsRegFlushKey1(int64_t hKey) {
	$init(WindowsPreferences);
	int32_t result = WindowsRegFlushKey(hKey);
	if (result == WindowsPreferences::ERROR_SUCCESS) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			result = WindowsRegFlushKey(hKey);
			if (result == WindowsPreferences::ERROR_SUCCESS) {
				return result;
			}
		}
	}
	return result;
}

$bytes* WindowsPreferences::WindowsRegQueryValueEx(int64_t hKey, $bytes* valueName) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegQueryValueEx, $bytes*, int64_t hKey, $bytes* valueName);
	$var($bytes, $ret, $invokeNativeStaticObject(hKey, valueName));
	$finishNativeStatic();
	return $ret;
}

int32_t WindowsPreferences::WindowsRegSetValueEx(int64_t hKey, $bytes* valueName, $bytes* value) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegSetValueEx, int32_t, int64_t hKey, $bytes* valueName, $bytes* value);
	int32_t $ret = $invokeNativeStatic(hKey, valueName, value);
	$finishNativeStatic();
	return $ret;
}

int32_t WindowsPreferences::WindowsRegSetValueEx1(int64_t hKey, $bytes* valueName, $bytes* value) {
	$init(WindowsPreferences);
	int32_t result = WindowsRegSetValueEx(hKey, valueName, value);
	if (result == WindowsPreferences::ERROR_SUCCESS) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			result = WindowsRegSetValueEx(hKey, valueName, value);
			if (result == WindowsPreferences::ERROR_SUCCESS) {
				return result;
			}
		}
	}
	return result;
}

int32_t WindowsPreferences::WindowsRegDeleteValue(int64_t hKey, $bytes* valueName) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegDeleteValue, int32_t, int64_t hKey, $bytes* valueName);
	int32_t $ret = $invokeNativeStatic(hKey, valueName);
	$finishNativeStatic();
	return $ret;
}

$longs* WindowsPreferences::WindowsRegQueryInfoKey(int64_t hKey) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegQueryInfoKey, $longs*, int64_t hKey);
	$var($longs, $ret, $invokeNativeStaticObject(hKey));
	$finishNativeStatic();
	return $ret;
}

$longs* WindowsPreferences::WindowsRegQueryInfoKey1(int64_t hKey) {
	$init(WindowsPreferences);
	$var($longs, result, WindowsRegQueryInfoKey(hKey));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			$assign(result, WindowsRegQueryInfoKey(hKey));
			if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_SUCCESS) {
				return result;
			}
		}
	}
	return result;
}

$bytes* WindowsPreferences::WindowsRegEnumKeyEx(int64_t hKey, int32_t subKeyIndex, int32_t maxKeyLength) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegEnumKeyEx, $bytes*, int64_t hKey, int32_t subKeyIndex, int32_t maxKeyLength);
	$var($bytes, $ret, $invokeNativeStaticObject(hKey, subKeyIndex, maxKeyLength));
	$finishNativeStatic();
	return $ret;
}

$bytes* WindowsPreferences::WindowsRegEnumKeyEx1(int64_t hKey, int32_t subKeyIndex, int32_t maxKeyLength) {
	$init(WindowsPreferences);
	$var($bytes, result, WindowsRegEnumKeyEx(hKey, subKeyIndex, maxKeyLength));
	if (result != nullptr) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			$assign(result, WindowsRegEnumKeyEx(hKey, subKeyIndex, maxKeyLength));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return result;
}

$bytes* WindowsPreferences::WindowsRegEnumValue(int64_t hKey, int32_t valueIndex, int32_t maxValueNameLength) {
	$init(WindowsPreferences);
	$prepareNativeStatic(WindowsRegEnumValue, $bytes*, int64_t hKey, int32_t valueIndex, int32_t maxValueNameLength);
	$var($bytes, $ret, $invokeNativeStaticObject(hKey, valueIndex, maxValueNameLength));
	$finishNativeStatic();
	return $ret;
}

$bytes* WindowsPreferences::WindowsRegEnumValue1(int64_t hKey, int32_t valueIndex, int32_t maxValueNameLength) {
	$init(WindowsPreferences);
	$var($bytes, result, WindowsRegEnumValue(hKey, valueIndex, maxValueNameLength));
	if (result != nullptr) {
		return result;
	} else {
		int64_t sleepTime = WindowsPreferences::INIT_SLEEP_TIME;
		for (int32_t i = 0; i < WindowsPreferences::MAX_ATTEMPTS; ++i) {
			try {
				$Thread::sleep(sleepTime);
			} catch ($InterruptedException& e) {
				return result;
			}
			sleepTime *= 2;
			$assign(result, WindowsRegEnumValue(hKey, valueIndex, maxValueNameLength));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return result;
}

void WindowsPreferences::init$(WindowsPreferences* parent, $String* name) {
	$useLocalObjectStack();
	$AbstractPreferences::init$(parent, name);
	this->isBackingStoreAvailable = true;
	int64_t parentNativeHandle = $nc(parent)->openKey(WindowsPreferences::KEY_CREATE_SUB_KEY, WindowsPreferences::KEY_READ);
	if (parentNativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		this->isBackingStoreAvailable = false;
		return;
	}
	$var($longs, result, WindowsRegCreateKeyEx1(parentNativeHandle, $(toWindowsName(name))));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not create windows registry node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(parentNativeHandle)));
		var$0->append(". Windows RegCreateKeyEx(...) returned error code "_s);
		var$0->append(result->get(WindowsPreferences::ERROR_CODE));
		var$0->append("."_s);
		$$nc(logger())->warning($$str(var$0));
		this->isBackingStoreAvailable = false;
		return;
	}
	this->newNode = (result->get(WindowsPreferences::DISPOSITION) == WindowsPreferences::REG_CREATED_NEW_KEY);
	closeKey(parentNativeHandle);
	closeKey(result->get(WindowsPreferences::NATIVE_HANDLE));
}

void WindowsPreferences::init$(int64_t rootNativeHandle, $bytes* rootDirectory) {
	$useLocalObjectStack();
	$AbstractPreferences::init$(nullptr, ""_s);
	this->isBackingStoreAvailable = true;
	$var($longs, result, WindowsRegCreateKeyEx1(rootNativeHandle, rootDirectory));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not open/create prefs root node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle)));
		var$0->append(". Windows RegCreateKeyEx(...) returned error code "_s);
		var$0->append(result->get(WindowsPreferences::ERROR_CODE));
		var$0->append("."_s);
		$$nc(logger())->warning($$str(var$0));
		this->isBackingStoreAvailable = false;
		return;
	}
	this->newNode = (result->get(WindowsPreferences::DISPOSITION) == WindowsPreferences::REG_CREATED_NEW_KEY);
	closeKey(result->get(WindowsPreferences::NATIVE_HANDLE));
}

$bytes* WindowsPreferences::windowsAbsolutePath() {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bstream, $new($ByteArrayOutputStream));
	bstream->write(WindowsPreferences::WINDOWS_ROOT_PATH, 0, $nc(WindowsPreferences::WINDOWS_ROOT_PATH)->length - 1);
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, $(absolutePath()), "/"_s));
	while (tokenizer->hasMoreTokens()) {
		bstream->write((int8_t)u'\\');
		$var($String, nextName, tokenizer->nextToken());
		$var($bytes, windowsNextName, toWindowsName(nextName));
		bstream->write(windowsNextName, 0, $nc(windowsNextName)->length - 1);
	}
	bstream->write(0);
	return bstream->toByteArray();
}

int64_t WindowsPreferences::openKey(int32_t securityMask) {
	return openKey(securityMask, securityMask);
}

int64_t WindowsPreferences::openKey(int32_t mask1, int32_t mask2) {
	return openKey($(windowsAbsolutePath()), mask1, mask2);
}

int64_t WindowsPreferences::openKey($bytes* windowsAbsolutePath, int32_t mask1, int32_t mask2) {
	$useLocalObjectStack();
	if ($nc(windowsAbsolutePath)->length <= WindowsPreferences::MAX_WINDOWS_PATH_LENGTH + 1) {
		$var($longs, result, WindowsRegOpenKey1(rootNativeHandle(), windowsAbsolutePath, mask1));
		if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_ACCESS_DENIED && mask2 != mask1) {
			$assign(result, WindowsRegOpenKey1(rootNativeHandle(), windowsAbsolutePath, mask2));
		}
		if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Could not open windows registry node "_s);
			var$0->append($(byteArrayToString($(this->windowsAbsolutePath()))));
			var$0->append(" at root 0x"_s);
			var$0->append($($Long::toHexString(rootNativeHandle())));
			var$0->append(". Windows RegOpenKey(...) returned error code "_s);
			var$0->append(result->get(WindowsPreferences::ERROR_CODE));
			var$0->append("."_s);
			$$nc(logger())->warning($$str(var$0));
			result->set(WindowsPreferences::NATIVE_HANDLE, WindowsPreferences::NULL_NATIVE_HANDLE);
			if (result->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_ACCESS_DENIED) {
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append("Could not open windows registry node "_s);
				var$1->append($(byteArrayToString($(this->windowsAbsolutePath()))));
				var$1->append(" at root 0x"_s);
				var$1->append($($Long::toHexString(rootNativeHandle())));
				var$1->append(": Access denied"_s);
				$throwNew($SecurityException, $$str(var$1));
			}
		}
		return result->get(WindowsPreferences::NATIVE_HANDLE);
	} else {
		return openKey(rootNativeHandle(), windowsAbsolutePath, mask1, mask2);
	}
}

int64_t WindowsPreferences::openKey(int64_t nativeHandle, $bytes* windowsRelativePath, int32_t mask1, int32_t mask2) {
	$useLocalObjectStack();
	if ($nc(windowsRelativePath)->length <= WindowsPreferences::MAX_WINDOWS_PATH_LENGTH + 1) {
		$var($longs, result, WindowsRegOpenKey1(nativeHandle, windowsRelativePath, mask1));
		if ($nc(result)->get(WindowsPreferences::ERROR_CODE) == WindowsPreferences::ERROR_ACCESS_DENIED && mask2 != mask1) {
			$assign(result, WindowsRegOpenKey1(nativeHandle, windowsRelativePath, mask2));
		}
		if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Could not open windows registry node "_s);
			var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
			var$0->append(" at root 0x"_s);
			var$0->append($($Long::toHexString(nativeHandle)));
			var$0->append(". Windows RegOpenKey(...) returned error code "_s);
			var$0->append(result->get(WindowsPreferences::ERROR_CODE));
			var$0->append("."_s);
			$$nc(logger())->warning($$str(var$0));
			result->set(WindowsPreferences::NATIVE_HANDLE, WindowsPreferences::NULL_NATIVE_HANDLE);
		}
		return result->get(WindowsPreferences::NATIVE_HANDLE);
	} else {
		int32_t separatorPosition = -1;
		for (int32_t i = WindowsPreferences::MAX_WINDOWS_PATH_LENGTH; i > 0; --i) {
			if (windowsRelativePath->get(i) == ((int8_t)u'\\')) {
				separatorPosition = i;
				break;
			}
		}
		$var($bytes, nextRelativeRoot, $new($bytes, separatorPosition + 1));
		$System::arraycopy(windowsRelativePath, 0, nextRelativeRoot, 0, separatorPosition);
		nextRelativeRoot->set(separatorPosition, 0);
		$var($bytes, nextRelativePath, $new($bytes, windowsRelativePath->length - separatorPosition - 1));
		$System::arraycopy(windowsRelativePath, separatorPosition + 1, nextRelativePath, 0, nextRelativePath->length);
		int64_t nextNativeHandle = openKey(nativeHandle, nextRelativeRoot, mask1, mask2);
		if (nextNativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
			return WindowsPreferences::NULL_NATIVE_HANDLE;
		}
		int64_t result = openKey(nextNativeHandle, nextRelativePath, mask1, mask2);
		closeKey(nextNativeHandle);
		return result;
	}
}

void WindowsPreferences::closeKey(int64_t nativeHandle) {
	$useLocalObjectStack();
	int32_t result = WindowsRegCloseKey(nativeHandle);
	if (result != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not close windows registry node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append(". Windows RegCloseKey(...) returned error code "_s);
		var$0->append(result);
		var$0->append("."_s);
		$$nc(logger())->warning($$str(var$0));
	}
}

void WindowsPreferences::putSpi($String* javaName, $String* value) {
	$useLocalObjectStack();
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_SET_VALUE);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		this->isBackingStoreAvailable = false;
		return;
	}
	$var($bytes, var$0, toWindowsName(javaName));
	int32_t result = WindowsRegSetValueEx1(nativeHandle, var$0, $(toWindowsValueString(value)));
	if (result != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Could not assign value to key "_s);
		var$1->append($(byteArrayToString($(toWindowsName(javaName)))));
		var$1->append(" at Windows registry node "_s);
		var$1->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$1->append(" at root 0x"_s);
		var$1->append($($Long::toHexString(rootNativeHandle())));
		var$1->append(". Windows RegSetValueEx(...) returned error code "_s);
		var$1->append(result);
		var$1->append("."_s);
		$$nc(logger())->warning($$str(var$1));
		this->isBackingStoreAvailable = false;
	}
	closeKey(nativeHandle);
}

$String* WindowsPreferences::getSpi($String* javaName) {
	$useLocalObjectStack();
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_QUERY_VALUE);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		return nullptr;
	}
	$var($Object, resultObject, WindowsRegQueryValueEx(nativeHandle, $(toWindowsName(javaName))));
	if (resultObject == nullptr) {
		closeKey(nativeHandle);
		return nullptr;
	}
	closeKey(nativeHandle);
	return toJavaValueString($cast($bytes, resultObject));
}

void WindowsPreferences::removeSpi($String* key) {
	$useLocalObjectStack();
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_SET_VALUE);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		return;
	}
	int32_t result = WindowsRegDeleteValue(nativeHandle, $(toWindowsName(key)));
	if (result != WindowsPreferences::ERROR_SUCCESS && result != WindowsPreferences::ERROR_FILE_NOT_FOUND) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not delete windows registry value "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append("\\"_s);
		var$0->append($(toWindowsName(key)));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append(". Windows RegDeleteValue(...) returned error code "_s);
		var$0->append(result);
		var$0->append("."_s);
		$$nc(logger())->warning($$str(var$0));
		this->isBackingStoreAvailable = false;
	}
	closeKey(nativeHandle);
}

$StringArray* WindowsPreferences::keysSpi() {
	$useLocalObjectStack();
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_QUERY_VALUE);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not open windows registry node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append("."_s);
		$throwNew($BackingStoreException, $$str(var$0));
	}
	$var($longs, result, WindowsRegQueryInfoKey1(nativeHandle));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Could not query windows registry node "_s);
		var$1->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$1->append(" at root 0x"_s);
		var$1->append($($Long::toHexString(rootNativeHandle())));
		var$1->append(". Windows RegQueryInfoKeyEx(...) returned error code "_s);
		var$1->append(result->get(WindowsPreferences::ERROR_CODE));
		var$1->append("."_s);
		$var($String, info, $str(var$1));
		$$nc(logger())->warning(info);
		$throwNew($BackingStoreException, info);
	}
	int32_t maxValueNameLength = (int32_t)result->get(WindowsPreferences::MAX_VALUE_NAME_LENGTH);
	int32_t valuesNumber = (int32_t)result->get(WindowsPreferences::VALUES_NUMBER);
	if (valuesNumber == 0) {
		closeKey(nativeHandle);
		return $new($StringArray, 0);
	}
	$var($StringArray, valueNames, $new($StringArray, valuesNumber));
	for (int32_t i = 0; i < valuesNumber; ++i) {
		$var($bytes, windowsName, WindowsRegEnumValue1(nativeHandle, i, maxValueNameLength + 1));
		if (windowsName == nullptr) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("Could not enumerate value #"_s);
			var$2->append(i);
			var$2->append("  of windows node "_s);
			var$2->append($(byteArrayToString($(windowsAbsolutePath()))));
			var$2->append(" at root 0x"_s);
			var$2->append($($Long::toHexString(rootNativeHandle())));
			var$2->append("."_s);
			$var($String, info, $str(var$2));
			$$nc(logger())->warning(info);
			$throwNew($BackingStoreException, info);
		}
		valueNames->set(i, $(toJavaName(windowsName)));
	}
	closeKey(nativeHandle);
	return valueNames;
}

$StringArray* WindowsPreferences::childrenNamesSpi() {
	$useLocalObjectStack();
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_ENUMERATE_SUB_KEYS | WindowsPreferences::KEY_QUERY_VALUE);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not open windows registry node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append("."_s);
		$throwNew($BackingStoreException, $$str(var$0));
	}
	$var($longs, result, WindowsRegQueryInfoKey1(nativeHandle));
	if ($nc(result)->get(WindowsPreferences::ERROR_CODE) != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Could not query windows registry node "_s);
		var$1->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$1->append(" at root 0x"_s);
		var$1->append($($Long::toHexString(rootNativeHandle())));
		var$1->append(". Windows RegQueryInfoKeyEx(...) returned error code "_s);
		var$1->append(result->get(WindowsPreferences::ERROR_CODE));
		var$1->append("."_s);
		$var($String, info, $str(var$1));
		$$nc(logger())->warning(info);
		$throwNew($BackingStoreException, info);
	}
	int32_t maxKeyLength = (int32_t)result->get(WindowsPreferences::MAX_KEY_LENGTH);
	int32_t subKeysNumber = (int32_t)result->get(WindowsPreferences::SUBKEYS_NUMBER);
	if (subKeysNumber == 0) {
		closeKey(nativeHandle);
		return $new($StringArray, 0);
	}
	$var($StringArray, subkeys, $new($StringArray, subKeysNumber));
	$var($StringArray, children, $new($StringArray, subKeysNumber));
	for (int32_t i = 0; i < subKeysNumber; ++i) {
		$var($bytes, windowsName, WindowsRegEnumKeyEx1(nativeHandle, i, maxKeyLength + 1));
		if (windowsName == nullptr) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("Could not enumerate key #"_s);
			var$2->append(i);
			var$2->append("  of windows node "_s);
			var$2->append($(byteArrayToString($(windowsAbsolutePath()))));
			var$2->append(" at root 0x"_s);
			var$2->append($($Long::toHexString(rootNativeHandle())));
			var$2->append(". "_s);
			$var($String, info, $str(var$2));
			$$nc(logger())->warning(info);
			$throwNew($BackingStoreException, info);
		}
		$var($String, javaName, toJavaName(windowsName));
		children->set(i, javaName);
	}
	closeKey(nativeHandle);
	return children;
}

void WindowsPreferences::flush() {
	$useLocalObjectStack();
	if (isRemoved()) {
		$nc(this->parent$)->flush();
		return;
	}
	if (!this->isBackingStoreAvailable) {
		$throwNew($BackingStoreException, "flush(): Backing store not available."_s);
	}
	int64_t nativeHandle = openKey(WindowsPreferences::KEY_READ);
	if (nativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not open windows registry node "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append("."_s);
		$throwNew($BackingStoreException, $$str(var$0));
	}
	int32_t result = WindowsRegFlushKey1(nativeHandle);
	if (result != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Could not flush windows registry node "_s);
		var$1->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$1->append(" at root 0x"_s);
		var$1->append($($Long::toHexString(rootNativeHandle())));
		var$1->append(". Windows RegFlushKey(...) returned error code "_s);
		var$1->append(result);
		var$1->append("."_s);
		$var($String, info, $str(var$1));
		$$nc(logger())->warning(info);
		$throwNew($BackingStoreException, info);
	}
	closeKey(nativeHandle);
}

void WindowsPreferences::sync() {
	if (isRemoved()) {
		$throwNew($IllegalStateException, "Node has been removed"_s);
	}
	flush();
}

$AbstractPreferences* WindowsPreferences::childSpi($String* name) {
	return $new(WindowsPreferences, this, name);
}

void WindowsPreferences::removeNodeSpi() {
	$useLocalObjectStack();
	int64_t parentNativeHandle = $$sure(WindowsPreferences, parent())->openKey(WindowsPreferences::DELETE);
	if (parentNativeHandle == WindowsPreferences::NULL_NATIVE_HANDLE) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Could not open parent windows registry node of "_s);
		var$0->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$0->append(" at root 0x"_s);
		var$0->append($($Long::toHexString(rootNativeHandle())));
		var$0->append("."_s);
		$throwNew($BackingStoreException, $$str(var$0));
	}
	int32_t result = WindowsRegDeleteKey(parentNativeHandle, $(toWindowsName($(name()))));
	if (result != WindowsPreferences::ERROR_SUCCESS) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Could not delete windows registry node "_s);
		var$1->append($(byteArrayToString($(windowsAbsolutePath()))));
		var$1->append(" at root 0x"_s);
		var$1->append($($Long::toHexString(rootNativeHandle())));
		var$1->append(". Windows RegDeleteKeyEx(...) returned error code "_s);
		var$1->append(result);
		var$1->append("."_s);
		$var($String, info, $str(var$1));
		$$nc(logger())->warning(info);
		$throwNew($BackingStoreException, info);
	}
	closeKey(parentNativeHandle);
}

$String* WindowsPreferences::toJavaName($bytes* windowsNameArray) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($String, windowsName, byteArrayToString(windowsNameArray));
	bool var$0 = $nc(windowsName)->length() > 1;
	if (var$0 && ($(windowsName->substring(0, 2))->equals("/!"_s))) {
		return toJavaAlt64Name(windowsName);
	}
	$var($StringBuilder, javaName, $new($StringBuilder));
	char16_t ch = 0;
	for (int32_t i = 0; i < windowsName->length(); ++i) {
		if ((ch = windowsName->charAt(i)) == u'/') {
			char16_t next = u' ';
			bool var$1 = windowsName->length() > i + 1;
			if (var$1 && ((next = windowsName->charAt(i + 1)) >= u'A') && (next <= u'Z')) {
				ch = next;
				++i;
			} else if ((windowsName->length() > i + 1) && (next == u'/')) {
				ch = u'\\';
				++i;
			}
		} else if (ch == u'\\') {
			ch = u'/';
		}
		javaName->append(ch);
	}
	return javaName->toString();
}

$String* WindowsPreferences::toJavaAlt64Name($String* windowsName) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($bytes, byteBuffer, $Base64::altBase64ToByteArray($($nc(windowsName)->substring(2))));
	$var($StringBuilder, result, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(byteBuffer)->length; ++i) {
		int32_t firstbyte = (byteBuffer->get(i++) & 0xff);
		int32_t secondbyte = (byteBuffer->get(i) & 0xff);
		result->append((char16_t)((firstbyte << 8) + secondbyte));
	}
	return result->toString();
}

$bytes* WindowsPreferences::toWindowsName($String* javaName) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($StringBuilder, windowsName, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(javaName)->length(); ++i) {
		char16_t ch = javaName->charAt(i);
		if ((ch < 32) || (ch > 127)) {
			return toWindowsAlt64Name(javaName);
		}
		if (ch == u'\\') {
			windowsName->append("//"_s);
		} else if (ch == u'/') {
			windowsName->append(u'\\');
		} else if ((ch >= u'A') && (ch <= u'Z')) {
			windowsName->append(u'/')->append(ch);
		} else {
			windowsName->append(ch);
		}
	}
	return stringToByteArray($(windowsName->toString()));
}

$bytes* WindowsPreferences::toWindowsAlt64Name($String* javaName) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($bytes, javaNameArray, $new($bytes, 2 * $nc(javaName)->length()));
	int32_t counter = 0;
	for (int32_t i = 0; i < javaName->length(); ++i) {
		int32_t ch = javaName->charAt(i);
		javaNameArray->set(counter++, (int8_t)((int32_t)((uint32_t)ch >> 8)));
		javaNameArray->set(counter++, (int8_t)ch);
	}
	return stringToByteArray($$str({"/!"_s, $($Base64::byteArrayToAltBase64(javaNameArray))}));
}

$String* WindowsPreferences::toJavaValueString($bytes* windowsNameArray) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($String, windowsName, byteArrayToString(windowsNameArray));
	$var($StringBuilder, javaName, $new($StringBuilder));
	char16_t ch = 0;
	for (int32_t i = 0; i < $nc(windowsName)->length(); ++i) {
		if ((ch = windowsName->charAt(i)) == u'/') {
			char16_t next = u' ';
			bool var$0 = windowsName->length() > i + 1;
			if (var$0 && (next = windowsName->charAt(i + 1)) == u'u') {
				if (windowsName->length() < i + 6) {
					break;
				} else {
					ch = (char16_t)$Integer::parseInt($(windowsName->substring(i + 2, i + 6)), 16);
					i += 5;
				}
			} else {
				bool var$1 = windowsName->length() > i + 1;
				if (var$1 && ((windowsName->charAt(i + 1)) >= u'A') && (next <= u'Z')) {
					ch = next;
					++i;
				} else if ((windowsName->length() > i + 1) && (next == u'/')) {
					ch = u'\\';
					++i;
				}
			}
		} else if (ch == u'\\') {
			ch = u'/';
		}
		javaName->append(ch);
	}
	return javaName->toString();
}

$bytes* WindowsPreferences::toWindowsValueString($String* javaName) {
	$init(WindowsPreferences);
	$useLocalObjectStack();
	$var($StringBuilder, windowsName, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(javaName)->length(); ++i) {
		char16_t ch = javaName->charAt(i);
		if ((ch < 32) || (ch > 127)) {
			windowsName->append("/u"_s);
			$var($String, hex, $Long::toHexString(javaName->charAt(i)));
			$var($StringBuilder, hex4, $new($StringBuilder, hex));
			hex4->reverse();
			int32_t len = 4 - hex4->length();
			for (int32_t j = 0; j < len; ++j) {
				hex4->append(u'0');
			}
			for (int32_t j = 0; j < 4; ++j) {
				windowsName->append(hex4->charAt(3 - j));
			}
		} else if (ch == u'\\') {
			windowsName->append("//"_s);
		} else if (ch == u'/') {
			windowsName->append(u'\\');
		} else if ((ch >= u'A') && (ch <= u'Z')) {
			windowsName->append(u'/')->append(ch);
		} else {
			windowsName->append(ch);
		}
	}
	return stringToByteArray($(windowsName->toString()));
}

int64_t WindowsPreferences::rootNativeHandle() {
	return (isUserNode() ? WindowsPreferences::USER_ROOT_NATIVE_HANDLE : WindowsPreferences::SYSTEM_ROOT_NATIVE_HANDLE);
}

$bytes* WindowsPreferences::stringToByteArray($String* str) {
	$init(WindowsPreferences);
	$var($bytes, result, $new($bytes, $nc(str)->length() + 1));
	for (int32_t i = 0; i < str->length(); ++i) {
		result->set(i, (int8_t)str->charAt(i));
	}
	result->set(str->length(), 0);
	return result;
}

$String* WindowsPreferences::byteArrayToString($bytes* array) {
	$init(WindowsPreferences);
	$var($StringBuilder, result, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(array)->length - 1; ++i) {
		result->append((char16_t)array->get(i));
	}
	return result->toString();
}

void WindowsPreferences::flushSpi() {
}

void WindowsPreferences::syncSpi() {
}

$PlatformLogger* WindowsPreferences::logger() {
	$init(WindowsPreferences);
	$synchronized(class$) {
		if (WindowsPreferences::logger$ == nullptr) {
			$assignStatic(WindowsPreferences::logger$, $PlatformLogger::getLogger("java.util.prefs"_s));
		}
		return WindowsPreferences::logger$;
	}
}

$Void* WindowsPreferences::lambda$static$0() {
	$init(WindowsPreferences);
	$beforeCallerSensitive();
	$System::loadLibrary("prefs"_s);
	return nullptr;
}

void WindowsPreferences::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, load, $new(WindowsPreferences$$Lambda$lambda$static$0));
		$AccessController::doPrivileged(load);
	}
	$assignStatic(WindowsPreferences::WINDOWS_ROOT_PATH, WindowsPreferences::stringToByteArray("Software\\JavaSoft\\Prefs"_s));
	WindowsPreferences::INIT_SLEEP_TIME = 50;
	WindowsPreferences::MAX_ATTEMPTS = 5;
}

WindowsPreferences::WindowsPreferences() {
}

$Class* WindowsPreferences::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.prefs.WindowsPreferences$$Lambda$lambda$static$0")) {
			return WindowsPreferences$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsPreferences, logger$)},
		{"WINDOWS_ROOT_PATH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsPreferences, WINDOWS_ROOT_PATH)},
		{"HKEY_CURRENT_USER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, HKEY_CURRENT_USER)},
		{"HKEY_LOCAL_MACHINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, HKEY_LOCAL_MACHINE)},
		{"USER_ROOT_NATIVE_HANDLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, USER_ROOT_NATIVE_HANDLE)},
		{"SYSTEM_ROOT_NATIVE_HANDLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, SYSTEM_ROOT_NATIVE_HANDLE)},
		{"MAX_WINDOWS_PATH_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, MAX_WINDOWS_PATH_LENGTH)},
		{"userRoot", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(WindowsPreferences, userRoot)},
		{"systemRoot", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(WindowsPreferences, systemRoot)},
		{"ERROR_SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, ERROR_SUCCESS)},
		{"ERROR_FILE_NOT_FOUND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, ERROR_FILE_NOT_FOUND)},
		{"ERROR_ACCESS_DENIED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, ERROR_ACCESS_DENIED)},
		{"NATIVE_HANDLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, NATIVE_HANDLE)},
		{"ERROR_CODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, ERROR_CODE)},
		{"SUBKEYS_NUMBER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, SUBKEYS_NUMBER)},
		{"VALUES_NUMBER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, VALUES_NUMBER)},
		{"MAX_KEY_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, MAX_KEY_LENGTH)},
		{"MAX_VALUE_NAME_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, MAX_VALUE_NAME_LENGTH)},
		{"DISPOSITION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, DISPOSITION)},
		{"REG_CREATED_NEW_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, REG_CREATED_NEW_KEY)},
		{"REG_OPENED_EXISTING_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, REG_OPENED_EXISTING_KEY)},
		{"NULL_NATIVE_HANDLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, NULL_NATIVE_HANDLE)},
		{"DELETE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, DELETE)},
		{"KEY_QUERY_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_QUERY_VALUE)},
		{"KEY_SET_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_SET_VALUE)},
		{"KEY_CREATE_SUB_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_CREATE_SUB_KEY)},
		{"KEY_ENUMERATE_SUB_KEYS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_ENUMERATE_SUB_KEYS)},
		{"KEY_READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_READ)},
		{"KEY_WRITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_WRITE)},
		{"KEY_ALL_ACCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsPreferences, KEY_ALL_ACCESS)},
		{"INIT_SLEEP_TIME", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsPreferences, INIT_SLEEP_TIME)},
		{"MAX_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsPreferences, MAX_ATTEMPTS)},
		{"isBackingStoreAvailable", "Z", nullptr, $PRIVATE, $field(WindowsPreferences, isBackingStoreAvailable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/WindowsPreferences;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(WindowsPreferences, init$, void, WindowsPreferences*, $String*)},
		{"<init>", "(J[B)V", nullptr, $PRIVATE, $method(WindowsPreferences, init$, void, int64_t, $bytes*)},
		{"WindowsRegCloseKey", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegCloseKey, int32_t, int64_t)},
		{"WindowsRegCreateKeyEx", "(J[B)[J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegCreateKeyEx, $longs*, int64_t, $bytes*)},
		{"WindowsRegCreateKeyEx1", "(J[B)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegCreateKeyEx1, $longs*, int64_t, $bytes*)},
		{"WindowsRegDeleteKey", "(J[B)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegDeleteKey, int32_t, int64_t, $bytes*)},
		{"WindowsRegDeleteValue", "(J[B)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegDeleteValue, int32_t, int64_t, $bytes*)},
		{"WindowsRegEnumKeyEx", "(JII)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegEnumKeyEx, $bytes*, int64_t, int32_t, int32_t)},
		{"WindowsRegEnumKeyEx1", "(JII)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegEnumKeyEx1, $bytes*, int64_t, int32_t, int32_t)},
		{"WindowsRegEnumValue", "(JII)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegEnumValue, $bytes*, int64_t, int32_t, int32_t)},
		{"WindowsRegEnumValue1", "(JII)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegEnumValue1, $bytes*, int64_t, int32_t, int32_t)},
		{"WindowsRegFlushKey", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegFlushKey, int32_t, int64_t)},
		{"WindowsRegFlushKey1", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegFlushKey1, int32_t, int64_t)},
		{"WindowsRegOpenKey", "(J[BI)[J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegOpenKey, $longs*, int64_t, $bytes*, int32_t)},
		{"WindowsRegOpenKey1", "(J[BI)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegOpenKey1, $longs*, int64_t, $bytes*, int32_t)},
		{"WindowsRegQueryInfoKey", "(J)[J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegQueryInfoKey, $longs*, int64_t)},
		{"WindowsRegQueryInfoKey1", "(J)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegQueryInfoKey1, $longs*, int64_t)},
		{"WindowsRegQueryValueEx", "(J[B)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegQueryValueEx, $bytes*, int64_t, $bytes*)},
		{"WindowsRegSetValueEx", "(J[B[B)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WindowsPreferences, WindowsRegSetValueEx, int32_t, int64_t, $bytes*, $bytes*)},
		{"WindowsRegSetValueEx1", "(J[B[B)I", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, WindowsRegSetValueEx1, int32_t, int64_t, $bytes*, $bytes*)},
		{"byteArrayToString", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, byteArrayToString, $String*, $bytes*)},
		{"childSpi", "(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, childSpi, $AbstractPreferences*, $String*)},
		{"childrenNamesSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, childrenNamesSpi, $StringArray*), "java.util.prefs.BackingStoreException"},
		{"closeKey", "(J)V", nullptr, $PRIVATE, $method(WindowsPreferences, closeKey, void, int64_t)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsPreferences, flush, void), "java.util.prefs.BackingStoreException"},
		{"flushSpi", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, flushSpi, void), "java.util.prefs.BackingStoreException"},
		{"getSpi", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, getSpi, $String*, $String*)},
		{"getSystemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $staticMethod(WindowsPreferences, getSystemRoot, $Preferences*)},
		{"getUserRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $staticMethod(WindowsPreferences, getUserRoot, $Preferences*)},
		{"keysSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, keysSpi, $StringArray*), "java.util.prefs.BackingStoreException"},
		{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsPreferences, lambda$static$0, $Void*)},
		{"logger", "()Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(WindowsPreferences, logger, $PlatformLogger*)},
		{"openKey", "(I)J", nullptr, $PRIVATE, $method(WindowsPreferences, openKey, int64_t, int32_t)},
		{"openKey", "(II)J", nullptr, $PRIVATE, $method(WindowsPreferences, openKey, int64_t, int32_t, int32_t)},
		{"openKey", "([BII)J", nullptr, $PRIVATE, $method(WindowsPreferences, openKey, int64_t, $bytes*, int32_t, int32_t)},
		{"openKey", "(J[BII)J", nullptr, $PRIVATE, $method(WindowsPreferences, openKey, int64_t, int64_t, $bytes*, int32_t, int32_t)},
		{"putSpi", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, putSpi, void, $String*, $String*)},
		{"removeNodeSpi", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsPreferences, removeNodeSpi, void), "java.util.prefs.BackingStoreException"},
		{"removeSpi", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, removeSpi, void, $String*)},
		{"rootNativeHandle", "()J", nullptr, $PRIVATE, $method(WindowsPreferences, rootNativeHandle, int64_t)},
		{"stringToByteArray", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, stringToByteArray, $bytes*, $String*)},
		{"sync", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsPreferences, sync, void), "java.util.prefs.BackingStoreException"},
		{"syncSpi", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsPreferences, syncSpi, void), "java.util.prefs.BackingStoreException"},
		{"toJavaAlt64Name", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toJavaAlt64Name, $String*, $String*)},
		{"toJavaName", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toJavaName, $String*, $bytes*)},
		{"toJavaValueString", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toJavaValueString, $String*, $bytes*)},
		{"toWindowsAlt64Name", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toWindowsAlt64Name, $bytes*, $String*)},
		{"toWindowsName", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toWindowsName, $bytes*, $String*)},
		{"toWindowsValueString", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsPreferences, toWindowsValueString, $bytes*, $String*)},
		{"windowsAbsolutePath", "()[B", nullptr, $PRIVATE, $method(WindowsPreferences, windowsAbsolutePath, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.WindowsPreferences",
		"java.util.prefs.AbstractPreferences",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsPreferences, name, initialize, &classInfo$$, WindowsPreferences::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsPreferences);
	});
	return class$;
}

$Class* WindowsPreferences::class$ = nullptr;

		} // prefs
	} // util
} // java