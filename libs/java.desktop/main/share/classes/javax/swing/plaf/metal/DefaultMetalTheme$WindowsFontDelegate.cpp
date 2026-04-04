#include <javax/swing/plaf/metal/DefaultMetalTheme$WindowsFontDelegate.h>
#include <java/awt/Font.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalFontDesktopProperty.h>
#include <jcpp.h>

using $MetalFontDesktopPropertyArray = $Array<::javax::swing::plaf::metal::MetalFontDesktopProperty>;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme$FontDelegate = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate;
using $MetalFontDesktopProperty = ::javax::swing::plaf::metal::MetalFontDesktopProperty;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void DefaultMetalTheme$WindowsFontDelegate::init$() {
	$DefaultMetalTheme$FontDelegate::init$();
	$set(this, props, $new($MetalFontDesktopPropertyArray, 6));
	$set(this, checkedPriviledged, $new($booleans, 6));
}

$FontUIResource* DefaultMetalTheme$WindowsFontDelegate::getFont(int32_t type) {
	$useLocalObjectStack();
	if ($nc(this->fonts)->get(type) != nullptr) {
		return this->fonts->get(type);
	}
	if (!$nc(this->checkedPriviledged)->get(type)) {
		$var($Font, f, getPrivilegedFont(type));
		$nc(this->checkedPriviledged)->set(type, true);
		if (f != nullptr) {
			$nc(this->fonts)->set(type, $$new($FontUIResource, f));
			return this->fonts->get(type);
		}
	}
	if ($nc(this->props)->get(type) == nullptr) {
		this->props->set(type, $$new($MetalFontDesktopProperty, type));
	}
	return $cast($FontUIResource, $nc(this->props->get(type))->createValue(nullptr));
}

DefaultMetalTheme$WindowsFontDelegate::DefaultMetalTheme$WindowsFontDelegate() {
}

$Class* DefaultMetalTheme$WindowsFontDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"props", "[Ljavax/swing/plaf/metal/MetalFontDesktopProperty;", nullptr, $PRIVATE, $field(DefaultMetalTheme$WindowsFontDelegate, props)},
		{"checkedPriviledged", "[Z", nullptr, $PRIVATE, $field(DefaultMetalTheme$WindowsFontDelegate, checkedPriviledged)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultMetalTheme$WindowsFontDelegate, init$, void)},
		{"getFont", "(I)Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC, $virtualMethod(DefaultMetalTheme$WindowsFontDelegate, getFont, $FontUIResource*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.DefaultMetalTheme$WindowsFontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "WindowsFontDelegate", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.DefaultMetalTheme$WindowsFontDelegate",
		"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.DefaultMetalTheme"
	};
	$loadClass(DefaultMetalTheme$WindowsFontDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMetalTheme$WindowsFontDelegate);
	});
	return class$;
}

$Class* DefaultMetalTheme$WindowsFontDelegate::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax