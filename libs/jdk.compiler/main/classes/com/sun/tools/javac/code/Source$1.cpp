#include <com/sun/tools/javac/code/Source$1.h>
#include <com/sun/tools/javac/code/Source.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef JDK10
#undef JDK11
#undef JDK12
#undef JDK13
#undef JDK14
#undef JDK15
#undef JDK16
#undef JDK17
#undef JDK1_2
#undef JDK1_3
#undef JDK1_4
#undef JDK5
#undef JDK6
#undef JDK7
#undef JDK8
#undef JDK9

using $Source = ::com::sun::tools::javac::code::Source;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$ints* Source$1::$SwitchMap$com$sun$tools$javac$code$Source = nullptr;

void Source$1::clinit$($Class* clazz) {
	$assignStatic(Source$1::$SwitchMap$com$sun$tools$javac$code$Source, $new($ints, $($Source::values())->length));
	{
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK17->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK16->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK15->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK14->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK13->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK12->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK11->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK10->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK9->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK8->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK7->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK6->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK5->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK1_4->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK1_2->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Source$1::$SwitchMap$com$sun$tools$javac$code$Source->set($Source::JDK1_3->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Source$1::Source$1() {
}

$Class* Source$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$Source", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Source$1, $SwitchMap$com$sun$tools$javac$code$Source)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Source",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Source$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.code.Source$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Source"
	};
	$loadClass(Source$1, name, initialize, &classInfo$$, Source$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Source$1);
	});
	return class$;
}

$Class* Source$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com