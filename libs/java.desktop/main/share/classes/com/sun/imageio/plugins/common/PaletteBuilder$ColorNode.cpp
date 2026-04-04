#include <com/sun/imageio/plugins/common/PaletteBuilder$ColorNode.h>
#include <com/sun/imageio/plugins/common/PaletteBuilder.h>
#include <jcpp.h>

using $PaletteBuilder$ColorNodeArray = $Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>;
using $PaletteBuilder = ::com::sun::imageio::plugins::common::PaletteBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void PaletteBuilder$ColorNode::init$($PaletteBuilder* this$0) {
	$set(this, this$0, this$0);
	this->isLeaf = false;
	this->level = 0;
	this->childCount = 0;
	$set(this, children, $new($PaletteBuilder$ColorNodeArray, 8));
	for (int32_t i = 0; i < 8; ++i) {
		this->children->set(i, nullptr);
	}
	this->colorCount = 0;
	this->red = (this->green = (this->blue = 0));
	this->paletteIndex = 0;
}

int32_t PaletteBuilder$ColorNode::getLeafChildCount() {
	if (this->isLeaf) {
		return 0;
	}
	int32_t cnt = 0;
	for (int32_t i = 0; i < $nc(this->children)->length; ++i) {
		if (this->children->get(i) != nullptr) {
			if ($nc(this->children->get(i))->isLeaf) {
				++cnt;
			} else {
				cnt += $nc(this->children->get(i))->getLeafChildCount();
			}
		}
	}
	return cnt;
}

int32_t PaletteBuilder$ColorNode::getRGB() {
	int32_t r = $div((int32_t)this->red, this->colorCount);
	int32_t g = $div((int32_t)this->green, this->colorCount);
	int32_t b = $div((int32_t)this->blue, this->colorCount);
	int32_t c = (((255 << 24) | ((0xff & r) << 16)) | ((0xff & g) << 8)) | (0xff & b);
	return c;
}

PaletteBuilder$ColorNode::PaletteBuilder$ColorNode() {
}

$Class* PaletteBuilder$ColorNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/common/PaletteBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(PaletteBuilder$ColorNode, this$0)},
		{"isLeaf", "Z", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, isLeaf)},
		{"childCount", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, childCount)},
		{"children", "[Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, 0, $field(PaletteBuilder$ColorNode, children)},
		{"colorCount", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, colorCount)},
		{"red", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, red)},
		{"blue", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, blue)},
		{"green", "J", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, green)},
		{"paletteIndex", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, paletteIndex)},
		{"level", "I", nullptr, $PUBLIC, $field(PaletteBuilder$ColorNode, level)},
		{"nextReducible", "Lcom/sun/imageio/plugins/common/PaletteBuilder$ColorNode;", nullptr, 0, $field(PaletteBuilder$ColorNode, nextReducible)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/common/PaletteBuilder;)V", nullptr, $PUBLIC, $method(PaletteBuilder$ColorNode, init$, void, $PaletteBuilder*)},
		{"getLeafChildCount", "()I", nullptr, $PUBLIC, $virtualMethod(PaletteBuilder$ColorNode, getLeafChildCount, int32_t)},
		{"getRGB", "()I", nullptr, $PUBLIC, $virtualMethod(PaletteBuilder$ColorNode, getRGB, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode", "com.sun.imageio.plugins.common.PaletteBuilder", "ColorNode", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.PaletteBuilder$ColorNode",
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
		"com.sun.imageio.plugins.common.PaletteBuilder"
	};
	$loadClass(PaletteBuilder$ColorNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaletteBuilder$ColorNode);
	});
	return class$;
}

$Class* PaletteBuilder$ColorNode::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com