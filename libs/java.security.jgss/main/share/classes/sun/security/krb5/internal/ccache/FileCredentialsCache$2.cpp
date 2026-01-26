#include <sun/security/krb5/internal/ccache/FileCredentialsCache$2.h>

#include <java/io/IOException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <sun/security/krb5/internal/ccache/FileCredentialsCache.h>
#include <jcpp.h>

#undef DEBUG

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $FileCredentialsCache = ::sun::security::krb5::internal::ccache::FileCredentialsCache;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ccache {

$FieldInfo _FileCredentialsCache$2_FieldInfo_[] = {
	{"val$command", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FileCredentialsCache$2, val$command)},
	{}
};

$MethodInfo _FileCredentialsCache$2_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(FileCredentialsCache$2, init$, void, $StringArray*)},
	{"run", "()Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(FileCredentialsCache$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _FileCredentialsCache$2_EnclosingMethodInfo_ = {
	"sun.security.krb5.internal.ccache.FileCredentialsCache",
	"exec",
	"(Ljava/lang/String;)Ljava/lang/String;"
};

$InnerClassInfo _FileCredentialsCache$2_InnerClassesInfo_[] = {
	{"sun.security.krb5.internal.ccache.FileCredentialsCache$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileCredentialsCache$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.krb5.internal.ccache.FileCredentialsCache$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileCredentialsCache$2_FieldInfo_,
	_FileCredentialsCache$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Process;>;",
	&_FileCredentialsCache$2_EnclosingMethodInfo_,
	_FileCredentialsCache$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.krb5.internal.ccache.FileCredentialsCache"
};

$Object* allocate$FileCredentialsCache$2($Class* clazz) {
	return $of($alloc(FileCredentialsCache$2));
}

void FileCredentialsCache$2::init$($StringArray* val$command) {
	$set(this, val$command, val$command);
}

$Object* FileCredentialsCache$2::run() {
	try {
		return $of(($nc($($Runtime::getRuntime()))->exec(this->val$command)));
	} catch ($IOException& e) {
		$init($FileCredentialsCache);
		if ($FileCredentialsCache::DEBUG) {
			e->printStackTrace();
		}
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

FileCredentialsCache$2::FileCredentialsCache$2() {
}

$Class* FileCredentialsCache$2::load$($String* name, bool initialize) {
	$loadClass(FileCredentialsCache$2, name, initialize, &_FileCredentialsCache$2_ClassInfo_, allocate$FileCredentialsCache$2);
	return class$;
}

$Class* FileCredentialsCache$2::class$ = nullptr;

				} // ccache
			} // internal
		} // krb5
	} // security
} // sun