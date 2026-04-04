#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Button.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/GridLayout.h>
#include <java/awt/Image.h>
#include <java/awt/Label.h>
#include <java/awt/Panel.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/MouseListener.h>
#include <java/text/BreakIterator.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon$1.h>
#include <sun/awt/X11/InfoWindow$Balloon$2.h>
#include <sun/awt/X11/InfoWindow$Balloon$3.h>
#include <sun/awt/X11/InfoWindow$Balloon$ActionPerformer.h>
#include <sun/awt/X11/InfoWindow$Balloon$Displayer.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

#undef BALLOON_CAPTION_BACKGROUND_COLOR
#undef BALLOON_CAPTION_FONT
#undef BALLOON_ICON_HEIGHT
#undef BALLOON_ICON_WIDTH
#undef BALLOON_SHOW_TIME
#undef BALLOON_TEXT_MAX_LENGTH
#undef BALLOON_TRAY_ICON_INDENT
#undef BALLOON_WORD_LINE_MAX_COUNT
#undef BALLOON_WORD_LINE_MAX_LENGTH
#undef BOLD
#undef CENTER
#undef DIALOG
#undef DONE
#undef EAST
#undef NORTH
#undef WEST

using $LabelArray = $Array<::java::awt::Label>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Button = ::java::awt::Button;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $GridLayout = ::java::awt::GridLayout;
using $Image = ::java::awt::Image;
using $Label = ::java::awt::Label;
using $Panel = ::java::awt::Panel;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Balloon$1 = ::sun::awt::X11::InfoWindow$Balloon$1;
using $InfoWindow$Balloon$2 = ::sun::awt::X11::InfoWindow$Balloon$2;
using $InfoWindow$Balloon$3 = ::sun::awt::X11::InfoWindow$Balloon$3;
using $InfoWindow$Balloon$ActionPerformer = ::sun::awt::X11::InfoWindow$Balloon$ActionPerformer;
using $InfoWindow$Balloon$Displayer = ::sun::awt::X11::InfoWindow$Balloon$Displayer;
using $InfoWindow$Balloon$LiveArguments = ::sun::awt::X11::InfoWindow$Balloon$LiveArguments;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;

namespace sun {
	namespace awt {
		namespace X11 {

$Color* InfoWindow$Balloon::BALLOON_CAPTION_BACKGROUND_COLOR = nullptr;
$Font* InfoWindow$Balloon::BALLOON_CAPTION_FONT = nullptr;

void InfoWindow$Balloon::init$($Frame* parent, Object$* target, $InfoWindow$Balloon$LiveArguments* liveArguments) {
	$useLocalObjectStack();
	$InfoWindow::init$(parent, $$new($Color, 90, 80, 190));
	$set(this, mainPanel, $new($Panel));
	$set(this, captionPanel, $new($Panel));
	$set(this, captionLabel, $new($Label, ""_s));
	$set(this, closeButton, $new($Button, "X"_s));
	$set(this, textPanel, $new($Panel));
	$set(this, iconCanvas, $new($XTrayIconPeer$IconCanvas, InfoWindow$Balloon::BALLOON_ICON_WIDTH, InfoWindow$Balloon::BALLOON_ICON_HEIGHT));
	$set(this, lineLabels, $new($LabelArray, InfoWindow$Balloon::BALLOON_WORD_LINE_MAX_COUNT));
	$set(this, ap, $new($InfoWindow$Balloon$ActionPerformer, this));
	$set(this, displayer, $new($InfoWindow$Balloon$Displayer, this));
	$set(this, liveArguments, liveArguments);
	$set(this, target, target);
	$XTrayIconPeer::suppressWarningString(this);
	setCloser($$new($InfoWindow$Balloon$1, this), InfoWindow$Balloon::BALLOON_SHOW_TIME);
	add(this->mainPanel);
	$nc(this->captionLabel)->setFont(InfoWindow$Balloon::BALLOON_CAPTION_FONT);
	$nc(this->captionLabel)->addMouseListener(this->ap);
	$nc(this->captionPanel)->setLayout($$new($BorderLayout));
	$nc(this->captionPanel)->add(this->captionLabel, $BorderLayout::WEST);
	$nc(this->captionPanel)->add(this->closeButton, $BorderLayout::EAST);
	$nc(this->captionPanel)->setBackground(InfoWindow$Balloon::BALLOON_CAPTION_BACKGROUND_COLOR);
	$nc(this->captionPanel)->addMouseListener(this->ap);
	$nc(this->closeButton)->addActionListener($$new($InfoWindow$Balloon$2, this));
	$nc(this->mainPanel)->setLayout($$new($BorderLayout));
	$nc(this->mainPanel)->setBackground($Color::white);
	$nc(this->mainPanel)->add(this->captionPanel, $BorderLayout::NORTH);
	$nc(this->mainPanel)->add(this->iconCanvas, $BorderLayout::WEST);
	$nc(this->mainPanel)->add(this->textPanel, $BorderLayout::CENTER);
	$nc(this->iconCanvas)->addMouseListener(this->ap);
	for (int32_t i = 0; i < InfoWindow$Balloon::BALLOON_WORD_LINE_MAX_COUNT; ++i) {
		$nc(this->lineLabels)->set(i, $$new($Label));
		$nc(this->lineLabels->get(i))->addMouseListener(this->ap);
		$nc($nc(this->lineLabels)->get(i))->setBackground($Color::white);
	}
	$nc($nc(this->displayer)->thread)->start();
}

void InfoWindow$Balloon::display($String* caption, $String* text, $String* messageType) {
	if (!this->gtkImagesLoaded) {
		loadGtkImages();
	}
	$nc(this->displayer)->display(caption, text, messageType);
}

void InfoWindow$Balloon::_display($String* caption, $String* text, $String* messageType) {
	$useLocalObjectStack();
	$nc(this->captionLabel)->setText(caption);
	$var($BreakIterator, iter, $BreakIterator::getWordInstance());
	if (text != nullptr) {
		$nc(iter)->setText(text);
		int32_t start = iter->first();
		int32_t end = 0;
		int32_t nLines = 0;
		do {
			end = iter->next();
			if (end == $BreakIterator::DONE || $(text->substring(start, end))->length() >= 50) {
				$nc($nc(this->lineLabels)->get(nLines))->setText($(text->substring(start, end == $BreakIterator::DONE ? iter->last() : end)));
				$nc(this->textPanel)->add($nc(this->lineLabels)->get(nLines++));
				start = end;
			}
			if (nLines == InfoWindow$Balloon::BALLOON_WORD_LINE_MAX_COUNT) {
				if (end != $BreakIterator::DONE) {
					$nc($nc(this->lineLabels)->get(nLines - 1))->setText($$new($String, $$str({$($nc($nc(this->lineLabels)->get(nLines - 1))->getText()), " ..."_s})));
				}
				break;
			}
		} while (end != $BreakIterator::DONE);
		$nc(this->textPanel)->setLayout($$new($GridLayout, nLines, 1));
	}
	if ("ERROR"_s->equals(messageType)) {
		$set(this, iconImage, this->errorImage);
	} else if ("WARNING"_s->equals(messageType)) {
		$set(this, iconImage, this->warnImage);
	} else if ("INFO"_s->equals(messageType)) {
		$set(this, iconImage, this->infoImage);
	} else {
		$set(this, iconImage, nullptr);
	}
	if (this->iconImage != nullptr) {
		$var($Dimension, tpSize, $nc(this->textPanel)->getSize());
		$nc(this->iconCanvas)->setSize(InfoWindow$Balloon::BALLOON_ICON_WIDTH, (InfoWindow$Balloon::BALLOON_ICON_HEIGHT > $nc(tpSize)->height ? InfoWindow$Balloon::BALLOON_ICON_HEIGHT : tpSize->height));
		$nc(this->iconCanvas)->validate();
	}
	$SunToolkit::executeOnEventHandlerThread(this->target, $$new($InfoWindow$Balloon$3, this));
}

void InfoWindow$Balloon::dispose() {
	$nc($nc(this->displayer)->thread)->interrupt();
	$InfoWindow::dispose();
}

void InfoWindow$Balloon::loadGtkImages() {
	if (!this->gtkImagesLoaded) {
		$var($UNIXToolkit, tk, $cast($UNIXToolkit, $Toolkit::getDefaultToolkit()));
		if ($nc(tk)->checkGtkVersion(3, 10, 0)) {
			$set(this, errorImage, $cast($Image, tk->getDesktopProperty("gtk.icon.dialog-error.6.rtl"_s)));
			$set(this, warnImage, $cast($Image, tk->getDesktopProperty("gtk.icon.dialog-warning.6.rtl"_s)));
			$set(this, infoImage, $cast($Image, tk->getDesktopProperty("gtk.icon.dialog-information.6.rtl"_s)));
		} else {
			$set(this, errorImage, $cast($Image, tk->getDesktopProperty("gtk.icon.gtk-dialog-error.6.rtl"_s)));
			$set(this, warnImage, $cast($Image, tk->getDesktopProperty("gtk.icon.gtk-dialog-warning.6.rtl"_s)));
			$set(this, infoImage, $cast($Image, tk->getDesktopProperty("gtk.icon.gtk-dialog-info.6.rtl"_s)));
		}
		this->gtkImagesLoaded = true;
	}
}

void InfoWindow$Balloon::clinit$($Class* clazz) {
	$assignStatic(InfoWindow$Balloon::BALLOON_CAPTION_BACKGROUND_COLOR, $new($Color, 200, 200, 255));
	$init($Font);
	$assignStatic(InfoWindow$Balloon::BALLOON_CAPTION_FONT, $new($Font, $Font::DIALOG, $Font::BOLD, 12));
}

InfoWindow$Balloon::InfoWindow$Balloon() {
}

$Class* InfoWindow$Balloon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"liveArguments", "Lsun/awt/X11/InfoWindow$Balloon$LiveArguments;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Balloon, liveArguments)},
		{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Balloon, target)},
		{"BALLOON_SHOW_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_SHOW_TIME)},
		{"BALLOON_TEXT_MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_TEXT_MAX_LENGTH)},
		{"BALLOON_WORD_LINE_MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_WORD_LINE_MAX_LENGTH)},
		{"BALLOON_WORD_LINE_MAX_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_WORD_LINE_MAX_COUNT)},
		{"BALLOON_ICON_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_ICON_WIDTH)},
		{"BALLOON_ICON_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_ICON_HEIGHT)},
		{"BALLOON_TRAY_ICON_INDENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Balloon, BALLOON_TRAY_ICON_INDENT)},
		{"BALLOON_CAPTION_BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InfoWindow$Balloon, BALLOON_CAPTION_BACKGROUND_COLOR)},
		{"BALLOON_CAPTION_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InfoWindow$Balloon, BALLOON_CAPTION_FONT)},
		{"mainPanel", "Ljava/awt/Panel;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, mainPanel)},
		{"captionPanel", "Ljava/awt/Panel;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, captionPanel)},
		{"captionLabel", "Ljava/awt/Label;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, captionLabel)},
		{"closeButton", "Ljava/awt/Button;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, closeButton)},
		{"textPanel", "Ljava/awt/Panel;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, textPanel)},
		{"iconCanvas", "Lsun/awt/X11/XTrayIconPeer$IconCanvas;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, iconCanvas)},
		{"lineLabels", "[Ljava/awt/Label;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, lineLabels)},
		{"ap", "Lsun/awt/X11/InfoWindow$Balloon$ActionPerformer;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, ap)},
		{"iconImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, iconImage)},
		{"errorImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, errorImage)},
		{"warnImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, warnImage)},
		{"infoImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, infoImage)},
		{"gtkImagesLoaded", "Z", nullptr, $PRIVATE, $field(InfoWindow$Balloon, gtkImagesLoaded)},
		{"displayer", "Lsun/awt/X11/InfoWindow$Balloon$Displayer;", nullptr, $PRIVATE, $field(InfoWindow$Balloon, displayer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Ljava/lang/Object;Lsun/awt/X11/InfoWindow$Balloon$LiveArguments;)V", nullptr, $PUBLIC, $method(InfoWindow$Balloon, init$, void, $Frame*, Object$*, $InfoWindow$Balloon$LiveArguments*)},
		{"_display", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(InfoWindow$Balloon, _display, void, $String*, $String*, $String*)},
		{"display", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Balloon, display, void, $String*, $String*, $String*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Balloon, dispose, void)},
		{"loadGtkImages", "()V", nullptr, $PRIVATE, $method(InfoWindow$Balloon, loadGtkImages, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$Message", "sun.awt.X11.InfoWindow$Balloon", "Message", $PRIVATE | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$Displayer", "sun.awt.X11.InfoWindow$Balloon", "Displayer", $PRIVATE},
		{"sun.awt.X11.InfoWindow$Balloon$ActionPerformer", "sun.awt.X11.InfoWindow$Balloon", "ActionPerformer", $PRIVATE},
		{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.awt.X11.InfoWindow$Balloon$3", nullptr, nullptr, 0},
		{"sun.awt.X11.InfoWindow$Balloon$2", nullptr, nullptr, 0},
		{"sun.awt.X11.InfoWindow$Balloon$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.InfoWindow$Balloon",
		"sun.awt.X11.InfoWindow",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Balloon, name, initialize, &classInfo$$, InfoWindow$Balloon::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(InfoWindow$Balloon));
	});
	return class$;
}

$Class* InfoWindow$Balloon::class$ = nullptr;

		} // X11
	} // awt
} // sun