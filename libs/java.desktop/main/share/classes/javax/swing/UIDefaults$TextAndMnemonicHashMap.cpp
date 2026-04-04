#include <javax/swing/UIDefaults$TextAndMnemonicHashMap.h>
#include <java/lang/CharSequence.h>
#include <java/util/HashMap.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef AND_MNEMONIC
#undef TEXT_SUFFIX
#undef TITLE_SUFFIX

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace javax {
	namespace swing {

$String* UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC = nullptr;
$String* UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX = nullptr;
$String* UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX = nullptr;

void UIDefaults$TextAndMnemonicHashMap::init$() {
	$HashMap::init$();
}

$Object* UIDefaults$TextAndMnemonicHashMap::get(Object$* key) {
	$useLocalObjectStack();
	$var($Object, value, $HashMap::get(key));
	if (value == nullptr) {
		bool checkTitle = false;
		$var($String, stringKey, $nc($of(key))->toString());
		$var($String, compositeKey, nullptr);
		if ($nc(stringKey)->endsWith(UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC)) {
			return nullptr;
		}
		if (stringKey->endsWith(".mnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 9, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("NameMnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 12, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Mnemonic"_s)) {
			$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
			checkTitle = true;
		}
		if (compositeKey != nullptr) {
			$assign(value, $HashMap::get(compositeKey));
			if (value == nullptr && checkTitle) {
				$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
				$assign(value, $HashMap::get(compositeKey));
			}
			return value == nullptr ? ($Object*)nullptr : $of(getMnemonicFromProperty($(value->toString())));
		}
		if (stringKey->endsWith("NameText"_s)) {
			$assign(compositeKey, composeKey(stringKey, 8, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith(".nameText"_s)) {
			$assign(compositeKey, composeKey(stringKey, 9, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Text"_s)) {
			$assign(compositeKey, composeKey(stringKey, 4, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
		} else if (stringKey->endsWith("Title"_s)) {
			$assign(compositeKey, composeKey(stringKey, 5, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
		}
		if (compositeKey != nullptr) {
			$assign(value, $HashMap::get(compositeKey));
			return value == nullptr ? ($Object*)nullptr : $of(getTextFromProperty($(value->toString())));
		}
		if (stringKey->endsWith("DisplayedMnemonicIndex"_s)) {
			$assign(compositeKey, composeKey(stringKey, 22, UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX));
			$assign(value, $HashMap::get(compositeKey));
			if (value == nullptr) {
				$assign(compositeKey, composeKey(stringKey, 22, UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX));
				$assign(value, $HashMap::get(compositeKey));
			}
			return value == nullptr ? ($Object*)nullptr : $of(getIndexFromProperty($(value->toString())));
		}
	}
	return value;
}

$String* UIDefaults$TextAndMnemonicHashMap::composeKey($String* key, int32_t reduce, $String* sufix) {
	return $str({$($nc(key)->substring(0, $nc(key)->length() - reduce)), sufix});
}

$String* UIDefaults$TextAndMnemonicHashMap::getTextFromProperty($String* text) {
	return $nc(text)->replace("&"_s, ""_s);
}

$String* UIDefaults$TextAndMnemonicHashMap::getMnemonicFromProperty($String* text) {
	int32_t index = $nc(text)->indexOf(u'&');
	if (0 <= index && index < text->length() - 1) {
		char16_t c = text->charAt(index + 1);
		return $Integer::toString((int32_t)$Character::toUpperCase(c));
	}
	return nullptr;
}

$String* UIDefaults$TextAndMnemonicHashMap::getIndexFromProperty($String* text) {
	int32_t index = $nc(text)->indexOf(u'&');
	return (index == -1) ? ($String*)nullptr : $Integer::toString(index);
}

UIDefaults$TextAndMnemonicHashMap::UIDefaults$TextAndMnemonicHashMap() {
}

void UIDefaults$TextAndMnemonicHashMap::clinit$($Class* clazz) {
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::AND_MNEMONIC, "AndMnemonic"_s);
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::TITLE_SUFFIX, ".titleAndMnemonic"_s);
	$assignStatic(UIDefaults$TextAndMnemonicHashMap::TEXT_SUFFIX, ".textAndMnemonic"_s);
}

$Class* UIDefaults$TextAndMnemonicHashMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"AND_MNEMONIC", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, AND_MNEMONIC)},
		{"TITLE_SUFFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, TITLE_SUFFIX)},
		{"TEXT_SUFFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(UIDefaults$TextAndMnemonicHashMap, TEXT_SUFFIX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UIDefaults$TextAndMnemonicHashMap, init$, void)},
		{"composeKey", "(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(UIDefaults$TextAndMnemonicHashMap, composeKey, $String*, $String*, int32_t, $String*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UIDefaults$TextAndMnemonicHashMap, get, $Object*, Object$*)},
		{"getIndexFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(UIDefaults$TextAndMnemonicHashMap, getIndexFromProperty, $String*, $String*)},
		{"getMnemonicFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(UIDefaults$TextAndMnemonicHashMap, getMnemonicFromProperty, $String*, $String*)},
		{"getTextFromProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(UIDefaults$TextAndMnemonicHashMap, getTextFromProperty, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIDefaults$TextAndMnemonicHashMap", "javax.swing.UIDefaults", "TextAndMnemonicHashMap", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.UIDefaults$TextAndMnemonicHashMap",
		"java.util.HashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.UIDefaults"
	};
	$loadClass(UIDefaults$TextAndMnemonicHashMap, name, initialize, &classInfo$$, UIDefaults$TextAndMnemonicHashMap::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UIDefaults$TextAndMnemonicHashMap));
	});
	return class$;
}

$Class* UIDefaults$TextAndMnemonicHashMap::class$ = nullptr;

	} // swing
} // javax