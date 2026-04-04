#include <javax/sound/sampled/Line$Info.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Package.h>
#include <javax/sound/sampled/Line.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Line = ::javax::sound::sampled::Line;

namespace javax {
	namespace sound {
		namespace sampled {

void Line$Info::init$($Class* lineClass) {
	if (lineClass == nullptr) {
		$load($Line);
		$set(this, lineClass, $Line::class$);
	} else {
		$set(this, lineClass, lineClass);
	}
}

$Class* Line$Info::getLineClass() {
	return this->lineClass;
}

bool Line$Info::matches(Line$Info* info) {
	if (!(this->getClass()->isInstance(info))) {
		return false;
	}
	if (!($nc(getLineClass())->isAssignableFrom($nc(info)->getLineClass()))) {
		return false;
	}
	return true;
}

$String* Line$Info::toString() {
	$var($String, str, $nc(getLineClass())->toString());
	$load($Line);
	if ($nc(getLineClass())->getPackage() == $Line::class$->getPackage()) {
		return $nc(str)->replace("javax.sound.sampled."_s, ""_s);
	}
	return str;
}

Line$Info::Line$Info() {
}

$Class* Line$Info::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lineClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Line$Info, lineClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(Line$Info, init$, void, $Class*)},
		{"getLineClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(Line$Info, getLineClass, $Class*)},
		{"matches", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC, $virtualMethod(Line$Info, matches, bool, Line$Info*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Line$Info, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.Line$Info",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.Line"
	};
	$loadClass(Line$Info, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Line$Info);
	});
	return class$;
}

$Class* Line$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax