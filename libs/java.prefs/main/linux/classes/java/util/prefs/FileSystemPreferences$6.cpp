#include <java/util/prefs/FileSystemPreferences$6.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <java/util/prefs/XmlSupport.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $TreeMap = ::java::util::TreeMap;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $InvalidPreferencesFormatException = ::java::util::prefs::InvalidPreferencesFormatException;
using $XmlSupport = ::java::util::prefs::XmlSupport;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$6::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$6::run() {
	$useLocalObjectStack();
	$var($Map, m, $cast($AbstractMap, $new($TreeMap)));
	int64_t newLastSyncTime = 0;
	try {
		newLastSyncTime = $nc(this->this$0->prefsFile)->lastModified();
		{
			$var($FileInputStream, fis, $new($FileInputStream, this->this$0->prefsFile));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$XmlSupport::importMap(fis, m);
				} catch ($Throwable& t$) {
					try {
						fis->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception& e) {
		if ($instanceOf($InvalidPreferencesFormatException, e)) {
			$$nc($FileSystemPreferences::getLogger())->warning($$str({"Invalid preferences format in "_s, $($nc(this->this$0->prefsFile)->getPath())}));
			this->this$0->prefsFile->renameTo($$new($File, $(this->this$0->prefsFile->getParentFile()), "IncorrectFormatPrefs.xml"_s));
			$assign(m, $cast($AbstractMap, $new($TreeMap)));
		} else if ($instanceOf($FileNotFoundException, e)) {
			$$nc($FileSystemPreferences::getLogger())->warning($$str({"Prefs file removed in background "_s, $($nc(this->this$0->prefsFile)->getPath())}));
		} else {
			$throwNew($BackingStoreException, e);
		}
	}
	$set(this->this$0, prefsCache, m);
	this->this$0->lastSyncTime = newLastSyncTime;
	return nullptr;
}

FileSystemPreferences$6::FileSystemPreferences$6() {
}

$Class* FileSystemPreferences$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(FileSystemPreferences$6, init$, void, $FileSystemPreferences*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$6, run, $Object*), "java.util.prefs.BackingStoreException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		"loadCache",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$6",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$6);
	});
	return class$;
}

$Class* FileSystemPreferences$6::class$ = nullptr;

		} // prefs
	} // util
} // java