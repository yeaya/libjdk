#include <com/sun/media/sound/Printer.h>
#include <java/lang/CharSequence.h>
#include <java/security/AccessController.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SHOW_THREADID
#undef SHOW_TIMESTAMP

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

bool Printer::err$ = false;
int64_t Printer::startTime = 0;

void Printer::init$() {
}

void Printer::err($String* str) {
	$init(Printer);
	if (Printer::err$) {
		println(str);
	}
}

bool Printer::isBuildInternal() {
	$init(Printer);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, javaVersion, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "java.version"_s))));
	return javaVersion != nullptr && javaVersion->contains("internal"_s);
}

void Printer::println($String* s) {
	$init(Printer);
	$useLocalObjectStack();
	$var($String, prepend, ""_s);
	{
		$assign(prepend, $str({"thread "_s, $$str($($Thread::currentThread())->getId()), " "_s, prepend}));
	}
	{
		if (Printer::startTime == 0) {
			Printer::startTime = $div($System::nanoTime(), (int64_t)1000000);
		}
		$assign(prepend, $str({prepend, $$str((($div($System::nanoTime(), (int64_t)1000000)) - Printer::startTime)), "millis: "_s}));
	}
	$nc($System::out)->println($$str({prepend, s}));
}

void Printer::clinit$($Class* clazz) {
	Printer::err$ = Printer::isBuildInternal();
	Printer::startTime = 0;
}

Printer::Printer() {
}

$Class* Printer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"err", "Z", nullptr, $STATIC | $FINAL, $staticField(Printer, err$)},
		{"SHOW_THREADID", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Printer, SHOW_THREADID)},
		{"SHOW_TIMESTAMP", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Printer, SHOW_TIMESTAMP)},
		{"startTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(Printer, startTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Printer, init$, void)},
		{"err", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Printer, err, void, $String*)},
		{"isBuildInternal", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Printer, isBuildInternal, bool)},
		{"println", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Printer, println, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.Printer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Printer, name, initialize, &classInfo$$, Printer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Printer);
	});
	return class$;
}

$Class* Printer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com