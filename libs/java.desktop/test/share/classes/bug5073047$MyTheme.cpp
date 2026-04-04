#include <bug5073047$MyTheme.h>
#include <bug5073047.h>
#include <java/awt/Font.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;

void bug5073047$MyTheme::init$() {
	$useLocalObjectStack();
	$DefaultMetalTheme::init$();
	$set(this, ctf, $new($FontUIResource, $($$nc($DefaultMetalTheme::getControlTextFont())->deriveFont(40.0f))));
}

$FontUIResource* bug5073047$MyTheme::getControlTextFont() {
	return this->ctf;
}

bug5073047$MyTheme::bug5073047$MyTheme() {
}

$Class* bug5073047$MyTheme::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ctf", "Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $FINAL, $field(bug5073047$MyTheme, ctf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug5073047$MyTheme, init$, void)},
		{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC, $virtualMethod(bug5073047$MyTheme, getControlTextFont, $FontUIResource*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5073047$MyTheme", "bug5073047", "MyTheme", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5073047$MyTheme",
		"javax.swing.plaf.metal.DefaultMetalTheme",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug5073047"
	};
	$loadClass(bug5073047$MyTheme, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5073047$MyTheme);
	});
	return class$;
}

$Class* bug5073047$MyTheme::class$ = nullptr;