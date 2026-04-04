#include <com/sun/imageio/plugins/jpeg/AdobeMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef APP14
#undef ID_SIZE

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void AdobeMarkerSegment::init$(int32_t transform) {
	$MarkerSegment::init$($JPEG::APP14);
	this->version = 101;
	this->flags0 = 0;
	this->flags1 = 0;
	this->transform = transform;
}

void AdobeMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	$nc(buffer)->bufPtr += AdobeMarkerSegment::ID_SIZE;
	this->version = ($nc(buffer->buf)->get(buffer->bufPtr++) & 0xff) << 8;
	this->version |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	this->flags0 = (buffer->buf->get(buffer->bufPtr++) & 0xff) << 8;
	this->flags0 |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	this->flags1 = (buffer->buf->get(buffer->bufPtr++) & 0xff) << 8;
	this->flags1 |= buffer->buf->get(buffer->bufPtr++) & 0xff;
	this->transform = buffer->buf->get(buffer->bufPtr++) & 0xff;
	buffer->bufAvail -= this->length;
}

void AdobeMarkerSegment::init$($Node* node) {
	AdobeMarkerSegment::init$(0);
	updateFromNativeNode(node, true);
}

$IIOMetadataNode* AdobeMarkerSegment::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "app14Adobe"_s));
	node->setAttribute("version"_s, $($Integer::toString(this->version)));
	node->setAttribute("flags0"_s, $($Integer::toString(this->flags0)));
	node->setAttribute("flags1"_s, $($Integer::toString(this->flags1)));
	node->setAttribute("transform"_s, $($Integer::toString(this->transform)));
	return node;
}

void AdobeMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	this->transform = getAttributeValue(node, attrs, "transform"_s, 0, 2, true);
	int32_t count = $nc(attrs)->getLength();
	if (count > 4) {
		$throwNew($IIOInvalidTreeException, "Adobe APP14 node cannot have > 4 attributes"_s, node);
	}
	if (count > 1) {
		int32_t value = getAttributeValue(node, attrs, "version"_s, 100, 255, false);
		this->version = (value != -1) ? value : this->version;
		value = getAttributeValue(node, attrs, "flags0"_s, 0, 0x0000ffff, false);
		this->flags0 = (value != -1) ? value : this->flags0;
		value = getAttributeValue(node, attrs, "flags1"_s, 0, 0x0000ffff, false);
		this->flags1 = (value != -1) ? value : this->flags1;
	}
}

void AdobeMarkerSegment::write($ImageOutputStream* ios) {
	this->length = 14;
	writeTag(ios);
	$var($bytes, id, $new($bytes, {
		65,
		100,
		111,
		98,
		101
	}));
	$nc(ios)->write(id);
	write2bytes(ios, this->version);
	write2bytes(ios, this->flags0);
	write2bytes(ios, this->flags1);
	ios->write(this->transform);
}

void AdobeMarkerSegment::writeAdobeSegment($ImageOutputStream* ios, int32_t transform) {
	$init(AdobeMarkerSegment);
	($$new(AdobeMarkerSegment, transform))->write(ios);
}

void AdobeMarkerSegment::print() {
	$useLocalObjectStack();
	printTag("Adobe APP14"_s);
	$nc($System::out)->print("Version: "_s);
	$System::out->println(this->version);
	$System::out->print("Flags0: 0x"_s);
	$System::out->println($($Integer::toHexString(this->flags0)));
	$System::out->print("Flags1: 0x"_s);
	$System::out->println($($Integer::toHexString(this->flags1)));
	$System::out->print("Transform: "_s);
	$System::out->println(this->transform);
}

AdobeMarkerSegment::AdobeMarkerSegment() {
}

$Class* AdobeMarkerSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"version", "I", nullptr, 0, $field(AdobeMarkerSegment, version)},
		{"flags0", "I", nullptr, 0, $field(AdobeMarkerSegment, flags0)},
		{"flags1", "I", nullptr, 0, $field(AdobeMarkerSegment, flags1)},
		{"transform", "I", nullptr, 0, $field(AdobeMarkerSegment, transform)},
		{"ID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AdobeMarkerSegment, ID_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AdobeMarkerSegment, init$, void, int32_t)},
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(AdobeMarkerSegment, init$, void, $JPEGBuffer*), "java.io.IOException"},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(AdobeMarkerSegment, init$, void, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(AdobeMarkerSegment, getNativeNode, $IIOMetadataNode*)},
		{"print", "()V", nullptr, 0, $virtualMethod(AdobeMarkerSegment, print, void)},
		{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, $virtualMethod(AdobeMarkerSegment, updateFromNativeNode, void, $Node*, bool), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $virtualMethod(AdobeMarkerSegment, write, void, $ImageOutputStream*), "java.io.IOException"},
		{"writeAdobeSegment", "(Ljavax/imageio/stream/ImageOutputStream;I)V", nullptr, $STATIC, $staticMethod(AdobeMarkerSegment, writeAdobeSegment, void, $ImageOutputStream*, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.AdobeMarkerSegment",
		"com.sun.imageio.plugins.jpeg.MarkerSegment",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AdobeMarkerSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AdobeMarkerSegment);
	});
	return class$;
}

$Class* AdobeMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com