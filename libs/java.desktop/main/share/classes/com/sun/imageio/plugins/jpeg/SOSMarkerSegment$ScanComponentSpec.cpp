#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOSMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void SOSMarkerSegment$ScanComponentSpec::init$($SOSMarkerSegment* this$0, int8_t componentSel, int32_t tableSel) {
	$set(this, this$0, this$0);
	this->componentSelector = componentSel;
	this->dcHuffTable = tableSel;
	this->acHuffTable = tableSel;
}

void SOSMarkerSegment$ScanComponentSpec::init$($SOSMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	this->componentSelector = $nc($nc(buffer)->buf)->get($nc(buffer)->bufPtr++);
	this->dcHuffTable = buffer->buf->get(buffer->bufPtr) >> 4;
	this->acHuffTable = buffer->buf->get(buffer->bufPtr++) & 0x0f;
}

void SOSMarkerSegment$ScanComponentSpec::init$($SOSMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	this->componentSelector = $MarkerSegment::getAttributeValue(node, attrs, "componentSelector"_s, 0, 255, true);
	this->dcHuffTable = $MarkerSegment::getAttributeValue(node, attrs, "dcHuffTable"_s, 0, 3, true);
	this->acHuffTable = $MarkerSegment::getAttributeValue(node, attrs, "acHuffTable"_s, 0, 3, true);
}

$Object* SOSMarkerSegment$ScanComponentSpec::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

$IIOMetadataNode* SOSMarkerSegment$ScanComponentSpec::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "scanComponentSpec"_s));
	node->setAttribute("componentSelector"_s, $($Integer::toString(this->componentSelector)));
	node->setAttribute("dcHuffTable"_s, $($Integer::toString(this->dcHuffTable)));
	node->setAttribute("acHuffTable"_s, $($Integer::toString(this->acHuffTable)));
	return node;
}

void SOSMarkerSegment$ScanComponentSpec::print() {
	$nc($System::out)->print("Component Selector: "_s);
	$System::out->println(this->componentSelector);
	$System::out->print("DC huffman table: "_s);
	$System::out->println(this->dcHuffTable);
	$System::out->print("AC huffman table: "_s);
	$System::out->println(this->acHuffTable);
}

SOSMarkerSegment$ScanComponentSpec::SOSMarkerSegment$ScanComponentSpec() {
}

$Class* SOSMarkerSegment$ScanComponentSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(SOSMarkerSegment$ScanComponentSpec, this$0)},
		{"componentSelector", "I", nullptr, 0, $field(SOSMarkerSegment$ScanComponentSpec, componentSelector)},
		{"dcHuffTable", "I", nullptr, 0, $field(SOSMarkerSegment$ScanComponentSpec, dcHuffTable)},
		{"acHuffTable", "I", nullptr, 0, $field(SOSMarkerSegment$ScanComponentSpec, acHuffTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment;BI)V", nullptr, 0, $method(SOSMarkerSegment$ScanComponentSpec, init$, void, $SOSMarkerSegment*, int8_t, int32_t)},
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(SOSMarkerSegment$ScanComponentSpec, init$, void, $SOSMarkerSegment*, $JPEGBuffer*)},
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(SOSMarkerSegment$ScanComponentSpec, init$, void, $SOSMarkerSegment*, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(SOSMarkerSegment$ScanComponentSpec, clone, $Object*)},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(SOSMarkerSegment$ScanComponentSpec, getNativeNode, $IIOMetadataNode*)},
		{"print", "()V", nullptr, 0, $virtualMethod(SOSMarkerSegment$ScanComponentSpec, print, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.SOSMarkerSegment$ScanComponentSpec", "com.sun.imageio.plugins.jpeg.SOSMarkerSegment", "ScanComponentSpec", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.SOSMarkerSegment$ScanComponentSpec",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.SOSMarkerSegment"
	};
	$loadClass(SOSMarkerSegment$ScanComponentSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SOSMarkerSegment$ScanComponentSpec);
	});
	return class$;
}

$Class* SOSMarkerSegment$ScanComponentSpec::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com