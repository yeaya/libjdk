#include <sun/swing/SwingUtilities2$Section.h>
#include <java/lang/Enum.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef LEADING
#undef MIDDLE
#undef TRAILING

using $SwingUtilities2$SectionArray = $Array<::sun::swing::SwingUtilities2$Section>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

SwingUtilities2$Section* SwingUtilities2$Section::LEADING = nullptr;
SwingUtilities2$Section* SwingUtilities2$Section::MIDDLE = nullptr;
SwingUtilities2$Section* SwingUtilities2$Section::TRAILING = nullptr;
$SwingUtilities2$SectionArray* SwingUtilities2$Section::$VALUES = nullptr;

$SwingUtilities2$SectionArray* SwingUtilities2$Section::$values() {
	$init(SwingUtilities2$Section);
	return $new($SwingUtilities2$SectionArray, {
		SwingUtilities2$Section::LEADING,
		SwingUtilities2$Section::MIDDLE,
		SwingUtilities2$Section::TRAILING
	});
}

$SwingUtilities2$SectionArray* SwingUtilities2$Section::values() {
	$init(SwingUtilities2$Section);
	return $cast($SwingUtilities2$SectionArray, SwingUtilities2$Section::$VALUES->clone());
}

SwingUtilities2$Section* SwingUtilities2$Section::valueOf($String* name) {
	$init(SwingUtilities2$Section);
	return $cast(SwingUtilities2$Section, $Enum::valueOf(SwingUtilities2$Section::class$, name));
}

void SwingUtilities2$Section::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void SwingUtilities2$Section::clinit$($Class* clazz) {
	$assignStatic(SwingUtilities2$Section::LEADING, $new(SwingUtilities2$Section, "LEADING"_s, 0));
	$assignStatic(SwingUtilities2$Section::MIDDLE, $new(SwingUtilities2$Section, "MIDDLE"_s, 1));
	$assignStatic(SwingUtilities2$Section::TRAILING, $new(SwingUtilities2$Section, "TRAILING"_s, 2));
	$assignStatic(SwingUtilities2$Section::$VALUES, SwingUtilities2$Section::$values());
}

SwingUtilities2$Section::SwingUtilities2$Section() {
}

$Class* SwingUtilities2$Section::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LEADING", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, LEADING)},
		{"MIDDLE", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, MIDDLE)},
		{"TRAILING", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, TRAILING)},
		{"$VALUES", "[Lsun/swing/SwingUtilities2$Section;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities2$Section, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/swing/SwingUtilities2$Section;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SwingUtilities2$Section, $values, $SwingUtilities2$SectionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(SwingUtilities2$Section, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities2$Section, valueOf, SwingUtilities2$Section*, $String*)},
		{"values", "()[Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities2$Section, values, $SwingUtilities2$SectionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingUtilities2$Section", "sun.swing.SwingUtilities2", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"sun.swing.SwingUtilities2$Section",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/swing/SwingUtilities2$Section;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.SwingUtilities2"
	};
	$loadClass(SwingUtilities2$Section, name, initialize, &classInfo$$, SwingUtilities2$Section::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SwingUtilities2$Section));
	});
	return class$;
}

$Class* SwingUtilities2$Section::class$ = nullptr;

	} // swing
} // sun