#include <java/awt/im/InputMethodRequests.h>

#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <jcpp.h>

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;

namespace java {
	namespace awt {
		namespace im {

$MethodInfo _InputMethodRequests_MethodInfo_[] = {
	{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, cancelLatestCommittedText, $AttributedCharacterIterator*, $AttributedCharacterIterator$AttributeArray*)},
	{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getCommittedText, $AttributedCharacterIterator*, int32_t, int32_t, $AttributedCharacterIterator$AttributeArray*)},
	{"getCommittedTextLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getCommittedTextLength, int32_t)},
	{"getInsertPositionOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getInsertPositionOffset, int32_t)},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getLocationOffset, $TextHitInfo*, int32_t, int32_t)},
	{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getSelectedText, $AttributedCharacterIterator*, $AttributedCharacterIterator$AttributeArray*)},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodRequests, getTextLocation, $Rectangle*, $TextHitInfo*)},
	{}
};

$ClassInfo _InputMethodRequests_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.InputMethodRequests",
	nullptr,
	nullptr,
	nullptr,
	_InputMethodRequests_MethodInfo_
};

$Object* allocate$InputMethodRequests($Class* clazz) {
	return $of($alloc(InputMethodRequests));
}

$Class* InputMethodRequests::load$($String* name, bool initialize) {
	$loadClass(InputMethodRequests, name, initialize, &_InputMethodRequests_ClassInfo_, allocate$InputMethodRequests);
	return class$;
}

$Class* InputMethodRequests::class$ = nullptr;

		} // im
	} // awt
} // java