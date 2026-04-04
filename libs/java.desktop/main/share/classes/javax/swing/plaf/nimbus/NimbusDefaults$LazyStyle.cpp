#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle$Part.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef INTERNAL_FRAME_TITLE_PANE

using $NimbusDefaults$LazyStyle$PartArray = $Array<::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle$Part>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;
using $NimbusDefaults$LazyStyle$Part = ::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle$Part;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusDefaults$LazyStyle::init$($NimbusDefaults* this$0, $String* prefix) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	this->simple = true;
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException, "The prefix must not be null"_s);
	}
	$set(this, prefix, prefix);
	$var($String, temp, prefix);
	bool var$1 = $nc(temp)->endsWith("cellRenderer\""_s);
	bool var$0 = var$1 || temp->endsWith("renderer\""_s);
	if (var$0 || temp->endsWith("listRenderer\""_s)) {
		$assign(temp, temp->substring(temp->lastIndexOf(":\""_s) + 1));
	}
	$var($List, sparts, split(temp));
	$set(this, parts, $new($NimbusDefaults$LazyStyle$PartArray, $nc(sparts)->size()));
	for (int32_t i = 0; i < this->parts->length; ++i) {
		this->parts->set(i, $$new($NimbusDefaults$LazyStyle$Part, this, $$cast($String, sparts->get(i))));
		if ($nc(this->parts->get(i))->named) {
			this->simple = false;
		}
	}
}

$SynthStyle* NimbusDefaults$LazyStyle::getStyle($JComponent* c, $Region* r) {
	$useLocalObjectStack();
	if ($nc(c)->getClientProperty("Nimbus.Overrides"_s) != nullptr) {
		$var($Map, map, $cast($Map, $nc(this->this$0->overridesCache)->get(c)));
		$var($SynthStyle, s, nullptr);
		if (map == nullptr) {
			$assign(map, $new($HashMap));
			this->this$0->overridesCache->put(c, map);
		} else {
			$assign(s, $cast($SynthStyle, map->get(r)));
		}
		if (s == nullptr) {
			$assign(s, $new($NimbusStyle, this->prefix, c));
			$nc(map)->put(r, s);
		}
		return s;
	}
	if (this->style == nullptr) {
		$set(this, style, $new($NimbusStyle, this->prefix, nullptr));
	}
	return this->style;
}

bool NimbusDefaults$LazyStyle::matches($JComponent* c) {
	return matches(c, $nc(this->parts)->length - 1);
}

bool NimbusDefaults$LazyStyle::matches($Component* c, int32_t partIndex) {
	$useLocalObjectStack();
	if (partIndex < 0) {
		return true;
	}
	if (c == nullptr) {
		return false;
	}
	$var($String, name, $nc(c)->getName());
	if ($nc($nc(this->parts)->get(partIndex))->named && $nc($nc(this->parts->get(partIndex))->s)->equals(name)) {
		return matches($(c->getParent()), partIndex - 1);
	} else if (!$nc(this->parts->get(partIndex))->named) {
		$Class* clazz = $nc(this->parts->get(partIndex))->c;
		if (clazz != nullptr && clazz->isAssignableFrom($of(c)->getClass())) {
			return matches($(c->getParent()), partIndex - 1);
		} else if (clazz == nullptr && $nc(this->this$0->registeredRegions)->containsKey($nc(this->parts->get(partIndex))->s)) {
			$var($Region, r, $cast($Region, this->this$0->registeredRegions->get($nc(this->parts->get(partIndex))->s)));
			$var($Component, parent, $nc(r)->isSubregion() ? c : $cast($Component, c->getParent()));
			if (r == $Region::INTERNAL_FRAME_TITLE_PANE && parent != nullptr && $instanceOf($JInternalFrame$JDesktopIcon, parent)) {
				$var($JInternalFrame$JDesktopIcon, icon, $cast($JInternalFrame$JDesktopIcon, parent));
				$assign(parent, icon->getInternalFrame());
			}
			return matches(parent, partIndex - 1);
		}
	}
	return false;
}

$List* NimbusDefaults$LazyStyle::split($String* prefix) {
	$useLocalObjectStack();
	$var($List, parts, $new($ArrayList));
	int32_t bracketCount = 0;
	bool inquotes = false;
	int32_t lastIndex = 0;
	for (int32_t i = 0; i < $nc(prefix)->length(); ++i) {
		char16_t c = prefix->charAt(i);
		if (c == u'[') {
			++bracketCount;
			continue;
		} else if (c == u'\"') {
			inquotes = !inquotes;
			continue;
		} else if (c == u']') {
			--bracketCount;
			if (bracketCount < 0) {
				$throwNew($RuntimeException, $$str({"Malformed prefix: "_s, prefix}));
			}
			continue;
		}
		if (c == u':' && !inquotes && bracketCount == 0) {
			parts->add($(prefix->substring(lastIndex, i)));
			lastIndex = i + 1;
		}
	}
	if (lastIndex < prefix->length() - 1 && !inquotes && bracketCount == 0) {
		parts->add($(prefix->substring(lastIndex)));
	}
	return parts;
}

NimbusDefaults$LazyStyle::NimbusDefaults$LazyStyle() {
}

$Class* NimbusDefaults$LazyStyle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/nimbus/NimbusDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$LazyStyle, this$0)},
		{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle, prefix)},
		{"simple", "Z", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle, simple)},
		{"parts", "[Ljavax/swing/plaf/nimbus/NimbusDefaults$LazyStyle$Part;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle, parts)},
		{"style", "Ljavax/swing/plaf/nimbus/NimbusStyle;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(NimbusDefaults$LazyStyle, init$, void, $NimbusDefaults*, $String*)},
		{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, 0, $method(NimbusDefaults$LazyStyle, getStyle, $SynthStyle*, $JComponent*, $Region*)},
		{"matches", "(Ljavax/swing/JComponent;)Z", nullptr, 0, $method(NimbusDefaults$LazyStyle, matches, bool, $JComponent*)},
		{"matches", "(Ljava/awt/Component;I)Z", nullptr, $PRIVATE, $method(NimbusDefaults$LazyStyle, matches, bool, $Component*, int32_t)},
		{"split", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(NimbusDefaults$LazyStyle, split, $List*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyStyle", $PRIVATE | $FINAL},
		{"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle$Part", "javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle", "Part", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle",
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
		"javax.swing.plaf.nimbus.NimbusDefaults"
	};
	$loadClass(NimbusDefaults$LazyStyle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusDefaults$LazyStyle);
	});
	return class$;
}

$Class* NimbusDefaults$LazyStyle::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax