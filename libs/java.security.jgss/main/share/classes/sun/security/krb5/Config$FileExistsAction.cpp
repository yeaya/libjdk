#include <sun/security/krb5/Config$FileExistsAction.h>
#include <java/io/File.h>
#include <sun/security/krb5/Config.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {

void Config$FileExistsAction::init$($String* fileName) {
	$set(this, fileName, fileName);
}

$Object* Config$FileExistsAction::run() {
	return $of($Boolean::valueOf($$new($File, this->fileName)->exists()));
}

Config$FileExistsAction::Config$FileExistsAction() {
}

$Class* Config$FileExistsAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Config$FileExistsAction, fileName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Config$FileExistsAction, init$, void, $String*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Config$FileExistsAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.Config$FileExistsAction", "sun.security.krb5.Config", "FileExistsAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.Config$FileExistsAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.Config"
	};
	$loadClass(Config$FileExistsAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Config$FileExistsAction);
	});
	return class$;
}

$Class* Config$FileExistsAction::class$ = nullptr;

		} // krb5
	} // security
} // sun