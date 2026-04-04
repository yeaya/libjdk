#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <java/awt/Point.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$DropLocation::init$($Point* p, int32_t index, $Position$Bias* bias) {
	$TransferHandler$DropLocation::init$(p);
	this->index = index;
	$set(this, bias, bias);
}

int32_t JTextComponent$DropLocation::getIndex() {
	return this->index;
}

$Position$Bias* JTextComponent$DropLocation::getBias() {
	return this->bias;
}

$String* JTextComponent$DropLocation::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[dropPoint="_s);
	var$0->append($(getDropPoint()));
	var$0->append(",index="_s);
	var$0->append(this->index);
	var$0->append(",bias="_s);
	var$0->append(this->bias);
	var$0->append("]"_s);
	return $str(var$0);
}

JTextComponent$DropLocation::JTextComponent$DropLocation() {
}

$Class* JTextComponent$DropLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JTextComponent$DropLocation, index)},
		{"bias", "Ljavax/swing/text/Position$Bias;", nullptr, $PRIVATE | $FINAL, $field(JTextComponent$DropLocation, bias)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;ILjavax/swing/text/Position$Bias;)V", nullptr, $PRIVATE, $method(JTextComponent$DropLocation, init$, void, $Point*, int32_t, $Position$Bias*)},
		{"getBias", "()Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC, $method(JTextComponent$DropLocation, getBias, $Position$Bias*)},
		{"getIndex", "()I", nullptr, $PUBLIC, $method(JTextComponent$DropLocation, getIndex, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DropLocation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$DropLocation", "javax.swing.text.JTextComponent", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.text.JTextComponent$DropLocation",
		"javax.swing.TransferHandler$DropLocation",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$DropLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$DropLocation);
	});
	return class$;
}

$Class* JTextComponent$DropLocation::class$ = nullptr;

		} // text
	} // swing
} // javax