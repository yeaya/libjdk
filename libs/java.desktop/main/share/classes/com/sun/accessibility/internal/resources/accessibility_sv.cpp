#include <com/sun/accessibility/internal/resources/accessibility_sv.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

void accessibility_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"active"_s,
			"aktiv"_s
		}),
		$$new($ObjectArray, {
			"alert"_s,
			"avisering"_s
		}),
		$$new($ObjectArray, {
			"armed"_s,
			"redo"_s
		}),
		$$new($ObjectArray, {
			"awtcomponent"_s,
			"AWT-komponent"_s
		}),
		$$new($ObjectArray, {
			"busy"_s,
			"upptagen"_s
		}),
		$$new($ObjectArray, {
			"canvas"_s,
			"rityta"_s
		}),
		$$new($ObjectArray, {
			"checkbox"_s,
			"kryssruta"_s
		}),
		$$new($ObjectArray, {
			"checked"_s,
			"markerad"_s
		}),
		$$new($ObjectArray, {
			"childNodeOf"_s,
			u"underordnad nod för"_s
		}),
		$$new($ObjectArray, {
			"collapsed"_s,
			"komprimerad"_s
		}),
		$$new($ObjectArray, {
			"colorchooser"_s,
			u"färgväljare"_s
		}),
		$$new($ObjectArray, {
			"columnheader"_s,
			"kolumnrubrik"_s
		}),
		$$new($ObjectArray, {
			"combobox"_s,
			"kombinationsruta"_s
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
			"desktopicon"_s,
			"skrivbordsikon"_s
		}),
		$$new($ObjectArray, {
			"desktoppane"_s,
			"skrivbordsruta"_s
		}),
		$$new($ObjectArray, {
			"dialog"_s,
			"dialogruta"_s
		}),
		$$new($ObjectArray, {
			"directorypane"_s,
			"katalogruta"_s
		}),
		$$new($ObjectArray, {
			"editable"_s,
			"redigerbar"_s
		}),
		$$new($ObjectArray, {
			"editbar"_s,
			"redigeringslist"_s
		}),
		$$new($ObjectArray, {
			"embeddedBy"_s,
			u"bäddas in av"_s
		}),
		$$new($ObjectArray, {
			"embeds"_s,
			u"bäddar in"_s
		}),
		$$new($ObjectArray, {
			"enabled"_s,
			"aktiverad"_s
		}),
		$$new($ObjectArray, {
			"expandable"_s,
			u"utökningsbar"_s
		}),
		$$new($ObjectArray, {
			"expanded"_s,
			u"utökad"_s
		}),
		$$new($ObjectArray, {
			"filechooser"_s,
			u"filväljare"_s
		}),
		$$new($ObjectArray, {
			"filler"_s,
			"utfyllnad"_s
		}),
		$$new($ObjectArray, {
			"flowsFrom"_s,
			u"flödar från"_s
		}),
		$$new($ObjectArray, {
			"flowsTo"_s,
			u"flödar till"_s
		}),
		$$new($ObjectArray, {
			"focusable"_s,
			"fokuseringsbar"_s
		}),
		$$new($ObjectArray, {
			"focused"_s,
			"fokuserad"_s
		}),
		$$new($ObjectArray, {
			"footer"_s,
			"sidfot"_s
		}),
		$$new($ObjectArray, {
			"frame"_s,
			"ram"_s
		}),
		$$new($ObjectArray, {
			"glasspane"_s,
			"glasruta"_s
		}),
		$$new($ObjectArray, {
			"header"_s,
			"sidhuvud"_s
		}),
		$$new($ObjectArray, {
			"horizontal"_s,
			"horisontell"_s
		}),
		$$new($ObjectArray, {
			"htmlcontainer"_s,
			"HTML-container"_s
		}),
		$$new($ObjectArray, {
			"iconified"_s,
			"minimerad"_s
		}),
		$$new($ObjectArray, {
			"indeterminate"_s,
			u"obestämt"_s
		}),
		$$new($ObjectArray, {
			"internalframe"_s,
			"intern ram"_s
		}),
		$$new($ObjectArray, {
			"label"_s,
			"etikett"_s
		}),
		$$new($ObjectArray, {
			"labelFor"_s,
			u"etikett för"_s
		}),
		$$new($ObjectArray, {
			"labeledBy"_s,
			"etikett av"_s
		}),
		$$new($ObjectArray, {
			"layeredpane"_s,
			"staplad ruta"_s
		}),
		$$new($ObjectArray, {
			"list"_s,
			"lista"_s
		}),
		$$new($ObjectArray, {
			"listitem"_s,
			"listobjekt"_s
		}),
		$$new($ObjectArray, {
			"managesDescendants"_s,
			"hanterar underordnade"_s
		}),
		$$new($ObjectArray, {
			"memberOf"_s,
			"medlem i"_s
		}),
		$$new($ObjectArray, {
			"menu"_s,
			"meny"_s
		}),
		$$new($ObjectArray, {
			"menubar"_s,
			"menyrad"_s
		}),
		$$new($ObjectArray, {
			"menuitem"_s,
			"menyalternativ"_s
		}),
		$$new($ObjectArray, {
			"modal"_s,
			"modal"_s
		}),
		$$new($ObjectArray, {
			"multiline"_s,
			"flera rader"_s
		}),
		$$new($ObjectArray, {
			"multiselectable"_s,
			"flerval"_s
		}),
		$$new($ObjectArray, {
			"opaque"_s,
			"ogenomskinlig"_s
		}),
		$$new($ObjectArray, {
			"optionpane"_s,
			"alternativruta"_s
		}),
		$$new($ObjectArray, {
			"pagetab"_s,
			"sidflik"_s
		}),
		$$new($ObjectArray, {
			"pagetablist"_s,
			"sidflikslista"_s
		}),
		$$new($ObjectArray, {
			"panel"_s,
			"panel"_s
		}),
		$$new($ObjectArray, {
			"paragraph"_s,
			"stycke"_s
		}),
		$$new($ObjectArray, {
			"parentWindowOf"_s,
			u"överordnat fönster för"_s
		}),
		$$new($ObjectArray, {
			"passwordtext"_s,
			u"lösenordstext"_s
		}),
		$$new($ObjectArray, {
			"popupmenu"_s,
			"snabbmeny"_s
		}),
		$$new($ObjectArray, {
			"pressed"_s,
			"nedtryckt"_s
		}),
		$$new($ObjectArray, {
			"progressMonitor"_s,
			u"förloppsövervakare"_s
		}),
		$$new($ObjectArray, {
			"progressbar"_s,
			"statusrad"_s
		}),
		$$new($ObjectArray, {
			"pushbutton"_s,
			"knapp"_s
		}),
		$$new($ObjectArray, {
			"radiobutton"_s,
			"alternativknapp"_s
		}),
		$$new($ObjectArray, {
			"resizable"_s,
			u"storleksändringsbar"_s
		}),
		$$new($ObjectArray, {
			"rootpane"_s,
			"grundruta"_s
		}),
		$$new($ObjectArray, {
			"rowheader"_s,
			"radrubrik"_s
		}),
		$$new($ObjectArray, {
			"ruler"_s,
			"linjal"_s
		}),
		$$new($ObjectArray, {
			"scrollbar"_s,
			"rullningslist"_s
		}),
		$$new($ObjectArray, {
			"scrollpane"_s,
			"rullningsruta"_s
		}),
		$$new($ObjectArray, {
			"selectable"_s,
			"valbar"_s
		}),
		$$new($ObjectArray, {
			"selected"_s,
			"vald"_s
		}),
		$$new($ObjectArray, {
			"separator"_s,
			"avskiljare"_s
		}),
		$$new($ObjectArray, {
			"showing"_s,
			"visar"_s
		}),
		$$new($ObjectArray, {
			"singleline"_s,
			"en rad"_s
		}),
		$$new($ObjectArray, {
			"slider"_s,
			"skjutreglage"_s
		}),
		$$new($ObjectArray, {
			"splitpane"_s,
			"delad ruta"_s
		}),
		$$new($ObjectArray, {
			"subwindowOf"_s,
			u"delfönster av"_s
		}),
		$$new($ObjectArray, {
			"swingcomponent"_s,
			"swing-komponent"_s
		}),
		$$new($ObjectArray, {
			"table"_s,
			"tabell"_s
		}),
		$$new($ObjectArray, {
			"text"_s,
			"text"_s
		}),
		$$new($ObjectArray, {
			"togglebutton"_s,
			u"växlingsknapp"_s
		}),
		$$new($ObjectArray, {
			"toggleexpand"_s,
			u"växla expandering"_s
		}),
		$$new($ObjectArray, {
			"toolbar"_s,
			"verktygsrad"_s
		}),
		$$new($ObjectArray, {
			"tooltip"_s,
			"knappbeskrivning"_s
		}),
		$$new($ObjectArray, {
			"transient"_s,
			u"tillfällig"_s
		}),
		$$new($ObjectArray, {
			"tree"_s,
			u"träd"_s
		}),
		$$new($ObjectArray, {
			"truncated"_s,
			"kapad"_s
		}),
		$$new($ObjectArray, {
			"unknown"_s,
			u"okänd"_s
		}),
		$$new($ObjectArray, {
			"vertical"_s,
			"vertikal"_s
		}),
		$$new($ObjectArray, {
			"viewport"_s,
			"vyport"_s
		}),
		$$new($ObjectArray, {
			"visible"_s,
			"synlig"_s
		}),
		$$new($ObjectArray, {
			"window"_s,
			u"fönster"_s
		})
	});
}

accessibility_sv::accessibility_sv() {
}

$Class* accessibility_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(accessibility_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(accessibility_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.accessibility.internal.resources.accessibility_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(accessibility_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(accessibility_sv);
	});
	return class$;
}

$Class* accessibility_sv::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com