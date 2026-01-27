#include <javax/swing/text/rtf/RTFReader$Destination.h>

#include <java/util/Dictionary.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$MethodInfo _RTFReader$Destination_MethodInfo_[] = {
	{"begingroup", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, begingroup, void)},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, close, void)},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, endgroup, void, $Dictionary*)},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, handleBinaryBlob, void, $bytes*)},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, handleKeyword, bool, $String*)},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, handleKeyword, bool, $String*, int32_t)},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFReader$Destination, handleText, void, $String*)},
	{}
};

$InnerClassInfo _RTFReader$Destination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$Destination_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.rtf.RTFReader$Destination",
	nullptr,
	nullptr,
	nullptr,
	_RTFReader$Destination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$Destination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$Destination($Class* clazz) {
	return $of($alloc(RTFReader$Destination));
}

$Class* RTFReader$Destination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$Destination, name, initialize, &_RTFReader$Destination_ClassInfo_, allocate$RTFReader$Destination);
	return class$;
}

$Class* RTFReader$Destination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax