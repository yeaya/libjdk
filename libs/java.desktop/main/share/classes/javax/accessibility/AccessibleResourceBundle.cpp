#include <javax/accessibility/AccessibleResourceBundle.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace javax {
	namespace accessibility {

void AccessibleResourceBundle::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AccessibleResourceBundle::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"alert"_s,
			"alert"_s
		}),
		$$new($ObjectArray, {
			"awtcomponent"_s,
			"AWT component"_s
		}),
		$$new($ObjectArray, {
			"checkbox"_s,
			"check box"_s
		}),
		$$new($ObjectArray, {
			"colorchooser"_s,
			"color chooser"_s
		}),
		$$new($ObjectArray, {
			"columnheader"_s,
			"column header"_s
		}),
		$$new($ObjectArray, {
			"combobox"_s,
			"combo box"_s
		}),
		$$new($ObjectArray, {
			"canvas"_s,
			"canvas"_s
		}),
		$$new($ObjectArray, {
			"desktopicon"_s,
			"desktop icon"_s
		}),
		$$new($ObjectArray, {
			"desktoppane"_s,
			"desktop pane"_s
		}),
		$$new($ObjectArray, {
			"dialog"_s,
			"dialog"_s
		}),
		$$new($ObjectArray, {
			"directorypane"_s,
			"directory pane"_s
		}),
		$$new($ObjectArray, {
			"glasspane"_s,
			"glass pane"_s
		}),
		$$new($ObjectArray, {
			"filechooser"_s,
			"file chooser"_s
		}),
		$$new($ObjectArray, {
			"filler"_s,
			"filler"_s
		}),
		$$new($ObjectArray, {
			"frame"_s,
			"frame"_s
		}),
		$$new($ObjectArray, {
			"internalframe"_s,
			"internal frame"_s
		}),
		$$new($ObjectArray, {
			"label"_s,
			"label"_s
		}),
		$$new($ObjectArray, {
			"layeredpane"_s,
			"layered pane"_s
		}),
		$$new($ObjectArray, {
			"list"_s,
			"list"_s
		}),
		$$new($ObjectArray, {
			"listitem"_s,
			"list item"_s
		}),
		$$new($ObjectArray, {
			"menubar"_s,
			"menu bar"_s
		}),
		$$new($ObjectArray, {
			"menu"_s,
			"menu"_s
		}),
		$$new($ObjectArray, {
			"menuitem"_s,
			"menu item"_s
		}),
		$$new($ObjectArray, {
			"optionpane"_s,
			"option pane"_s
		}),
		$$new($ObjectArray, {
			"pagetab"_s,
			"page tab"_s
		}),
		$$new($ObjectArray, {
			"pagetablist"_s,
			"page tab list"_s
		}),
		$$new($ObjectArray, {
			"panel"_s,
			"panel"_s
		}),
		$$new($ObjectArray, {
			"passwordtext"_s,
			"password text"_s
		}),
		$$new($ObjectArray, {
			"popupmenu"_s,
			"popup menu"_s
		}),
		$$new($ObjectArray, {
			"progressbar"_s,
			"progress bar"_s
		}),
		$$new($ObjectArray, {
			"pushbutton"_s,
			"push button"_s
		}),
		$$new($ObjectArray, {
			"radiobutton"_s,
			"radio button"_s
		}),
		$$new($ObjectArray, {
			"rootpane"_s,
			"root pane"_s
		}),
		$$new($ObjectArray, {
			"rowheader"_s,
			"row header"_s
		}),
		$$new($ObjectArray, {
			"scrollbar"_s,
			"scroll bar"_s
		}),
		$$new($ObjectArray, {
			"scrollpane"_s,
			"scroll pane"_s
		}),
		$$new($ObjectArray, {
			"separator"_s,
			"separator"_s
		}),
		$$new($ObjectArray, {
			"slider"_s,
			"slider"_s
		}),
		$$new($ObjectArray, {
			"splitpane"_s,
			"split pane"_s
		}),
		$$new($ObjectArray, {
			"swingcomponent"_s,
			"swing component"_s
		}),
		$$new($ObjectArray, {
			"table"_s,
			"table"_s
		}),
		$$new($ObjectArray, {
			"text"_s,
			"text"_s
		}),
		$$new($ObjectArray, {
			"tree"_s,
			"tree"_s
		}),
		$$new($ObjectArray, {
			"togglebutton"_s,
			"toggle button"_s
		}),
		$$new($ObjectArray, {
			"toolbar"_s,
			"tool bar"_s
		}),
		$$new($ObjectArray, {
			"tooltip"_s,
			"tool tip"_s
		}),
		$$new($ObjectArray, {
			"unknown"_s,
			"unknown"_s
		}),
		$$new($ObjectArray, {
			"viewport"_s,
			"viewport"_s
		}),
		$$new($ObjectArray, {
			"window"_s,
			"window"_s
		}),
		$$new($ObjectArray, {
			"labelFor"_s,
			"label for"_s
		}),
		$$new($ObjectArray, {
			"labeledBy"_s,
			"labeled by"_s
		}),
		$$new($ObjectArray, {
			"memberOf"_s,
			"member of"_s
		}),
		$$new($ObjectArray, {
			"controlledBy"_s,
			"controlledBy"_s
		}),
		$$new($ObjectArray, {
			"controllerFor"_s,
			"controllerFor"_s
		}),
		$$new($ObjectArray, {
			"active"_s,
			"active"_s
		}),
		$$new($ObjectArray, {
			"armed"_s,
			"armed"_s
		}),
		$$new($ObjectArray, {
			"busy"_s,
			"busy"_s
		}),
		$$new($ObjectArray, {
			"checked"_s,
			"checked"_s
		}),
		$$new($ObjectArray, {
			"collapsed"_s,
			"collapsed"_s
		}),
		$$new($ObjectArray, {
			"editable"_s,
			"editable"_s
		}),
		$$new($ObjectArray, {
			"expandable"_s,
			"expandable"_s
		}),
		$$new($ObjectArray, {
			"expanded"_s,
			"expanded"_s
		}),
		$$new($ObjectArray, {
			"enabled"_s,
			"enabled"_s
		}),
		$$new($ObjectArray, {
			"focusable"_s,
			"focusable"_s
		}),
		$$new($ObjectArray, {
			"focused"_s,
			"focused"_s
		}),
		$$new($ObjectArray, {
			"iconified"_s,
			"iconified"_s
		}),
		$$new($ObjectArray, {
			"modal"_s,
			"modal"_s
		}),
		$$new($ObjectArray, {
			"multiline"_s,
			"multiple line"_s
		}),
		$$new($ObjectArray, {
			"multiselectable"_s,
			"multiselectable"_s
		}),
		$$new($ObjectArray, {
			"opaque"_s,
			"opaque"_s
		}),
		$$new($ObjectArray, {
			"pressed"_s,
			"pressed"_s
		}),
		$$new($ObjectArray, {
			"resizable"_s,
			"resizable"_s
		}),
		$$new($ObjectArray, {
			"selectable"_s,
			"selectable"_s
		}),
		$$new($ObjectArray, {
			"selected"_s,
			"selected"_s
		}),
		$$new($ObjectArray, {
			"showing"_s,
			"showing"_s
		}),
		$$new($ObjectArray, {
			"singleline"_s,
			"single line"_s
		}),
		$$new($ObjectArray, {
			"transient"_s,
			"transient"_s
		}),
		$$new($ObjectArray, {
			"visible"_s,
			"visible"_s
		}),
		$$new($ObjectArray, {
			"vertical"_s,
			"vertical"_s
		}),
		$$new($ObjectArray, {
			"horizontal"_s,
			"horizontal"_s
		})
	});
}

AccessibleResourceBundle::AccessibleResourceBundle() {
}

$Class* AccessibleResourceBundle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccessibleResourceBundle, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AccessibleResourceBundle, getContents, $ObjectArray2*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.accessibility.AccessibleResourceBundle",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AccessibleResourceBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleResourceBundle);
	});
	return class$;
}

$Class* AccessibleResourceBundle::class$ = nullptr;

	} // accessibility
} // javax