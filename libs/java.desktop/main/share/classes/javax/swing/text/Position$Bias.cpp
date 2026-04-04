#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

Position$Bias* Position$Bias::Forward = nullptr;
Position$Bias* Position$Bias::Backward = nullptr;

$String* Position$Bias::toString() {
	return this->name;
}

void Position$Bias::init$($String* name) {
	$set(this, name, name);
}

void Position$Bias::clinit$($Class* clazz) {
	$assignStatic(Position$Bias::Forward, $new(Position$Bias, "Forward"_s));
	$assignStatic(Position$Bias::Backward, $new(Position$Bias, "Backward"_s));
}

Position$Bias::Position$Bias() {
}

$Class* Position$Bias::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Forward", "Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Position$Bias, Forward)},
		{"Backward", "Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Position$Bias, Backward)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Position$Bias, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Position$Bias, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Position$Bias, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.text.Position$Bias",
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
		"javax.swing.text.Position"
	};
	$loadClass(Position$Bias, name, initialize, &classInfo$$, Position$Bias::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Position$Bias);
	});
	return class$;
}

$Class* Position$Bias::class$ = nullptr;

		} // text
	} // swing
} // javax