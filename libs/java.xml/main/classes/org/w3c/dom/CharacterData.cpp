#include <org/w3c/dom/CharacterData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* CharacterData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, appendData, void, $String*), "org.w3c.dom.DOMException"},
		{"deleteData", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, deleteData, void, int32_t, int32_t), "org.w3c.dom.DOMException"},
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, getData, $String*), "org.w3c.dom.DOMException"},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, getLength, int32_t)},
		{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, insertData, void, int32_t, $String*), "org.w3c.dom.DOMException"},
		{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, replaceData, void, int32_t, int32_t, $String*), "org.w3c.dom.DOMException"},
		{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, setData, void, $String*), "org.w3c.dom.DOMException"},
		{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharacterData, substringData, $String*, int32_t, int32_t), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.CharacterData",
		nullptr,
		"org.w3c.dom.Node",
		nullptr,
		methodInfos$$
	};
	$loadClass(CharacterData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterData);
	});
	return class$;
}

$Class* CharacterData::class$ = nullptr;

		} // dom
	} // w3c
} // org