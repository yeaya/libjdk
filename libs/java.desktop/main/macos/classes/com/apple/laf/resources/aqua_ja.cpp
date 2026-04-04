#include <com/apple/laf/resources/aqua_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

void aqua_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AbstractButton.click.textAndMnemonic"_s,
			u"クリック"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.addition.textAndMnemonic"_s,
			u"追加"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.deletion.textAndMnemonic"_s,
			u"削除"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.redo.textAndMnemonic"_s,
			u"やり直し"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.styleChange.textAndMnemonic"_s,
			u"スタイル変更"_s
		}),
		$$new($ObjectArray, {
			"AbstractDocument.undo.textAndMnemonic"_s,
			u"元に戻す"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.redo.textAndMnemonic"_s,
			u"やり直し"_s
		}),
		$$new($ObjectArray, {
			"AbstractUndoableEdit.undo.textAndMnemonic"_s,
			u"元に戻す"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.cancel.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsb.textAndMnemonic"_s,
			"HSB(&H)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbBlue.textAndMnemonic"_s,
			"B"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbBrightness.textAndMnemonic"_s,
			"B"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbGreen.textAndMnemonic"_s,
			"G"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbHue.textAndMnemonic"_s,
			"H"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbRed.textAndMnemonic"_s,
			"R"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.hsbSaturation.textAndMnemonic"_s,
			"S"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.ok.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.preview.textAndMnemonic"_s,
			u"プレビュー"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.reset.textAndMnemonic"_s,
			u"リセット(&R)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgb.textAndMnemonic"_s,
			"RGB(&G)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbBlue.textAndMnemonic"_s,
			u"青(&B)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbGreen.textAndMnemonic"_s,
			u"緑(&N)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.rgbRed.textAndMnemonic"_s,
			u"赤(&D)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.sample.textAndMnemonic"_s,
			u"サンプル・テキスト  サンプル・テキスト"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatches.textAndMnemonic"_s,
			u"サンプル(&S)"_s
		}),
		$$new($ObjectArray, {
			"ColorChooser.swatchesRecent.textAndMnemonic"_s,
			u"最新:"_s
		}),
		$$new($ObjectArray, {
			"ComboBox.togglePopup.textAndMnemonic"_s,
			u"トグル・ポップアップ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.acceptAllFileFilter.textAndMnemonic"_s,
			u"すべてのファイル"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.by.textAndMnemonic"_s,
			u"名前"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.byDate.textAndMnemonic"_s,
			u"変更日"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.chooseButton.textAndMnemonic"_s,
			u"選択"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.createButton.textAndMnemonic"_s,
			u"作成"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.desktopName"_s,
			u"デスクトップ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryDescription.textAndMnemonic"_s,
			u"ディレクトリ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.directoryOpenButton.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileDescription.textAndMnemonic"_s,
			u"汎用ファイル"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileNameLabel.textAndMnemonic"_s,
			u"ファイル:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeGigaBytes"_s,
			"{0} GB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeKiloBytes"_s,
			"{0} KB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.fileSizeMegaBytes"_s,
			"{0} MB"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.filesOfTypeLabel.textAndMnemonic"_s,
			u"ファイル形式:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.helpButton.textAndMnemonic"_s,
			u"ヘルプ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder"_s,
			u"無題のフォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.mac.newFolder.subsequent"_s,
			u"無題のフォルダ{0}"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderAccessibleName"_s,
			u"新規フォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderButton.textAndMnemonic"_s,
			u"新規フォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderError.textAndMnemonic"_s,
			u"フォルダの作成中にエラーが発生しました"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderErrorSeparator"_s,
			":"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderExistsError.textAndMnemonic"_s,
			u"その名前はすでに使用されています"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderPrompt.textAndMnemonic"_s,
			u"新規フォルダの名前:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.newFolderTitle.textAndMnemonic"_s,
			u"新規フォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openButton.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openDialogTitle.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.openTitle.textAndMnemonic"_s,
			u"開く"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveButton.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s,
			u"別名保存:"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveDialogTitle.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.saveTitle.textAndMnemonic"_s,
			u"保存"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFileName"_s,
			u"無題"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.untitledFolderName"_s,
			u"無題のフォルダ"_s
		}),
		$$new($ObjectArray, {
			"FileChooser.updateButton.textAndMnemonic"_s,
			u"更新"_s
		}),
		$$new($ObjectArray, {
			"FormView.browseFileButton.textAndMnemonic"_s,
			u"参照..."_s
		}),
		$$new($ObjectArray, {
			"FormView.resetButton.textAndMnemonic"_s,
			u"リセット"_s
		}),
		$$new($ObjectArray, {
			"FormView.submitButton.textAndMnemonic"_s,
			u"問合せの実行"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.closeButtonToolTip"_s,
			u"閉じる"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.iconButtonToolTip"_s,
			u"最小化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.maxButtonToolTip"_s,
			u"最大化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrame.restoreButtonToolTip"_s,
			u"復元"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButton.textAndMnemonic"_s,
			u"閉じる"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.closeButtonAccessibleName"_s,
			u"閉じる"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.iconifyButtonAccessibleName"_s,
			u"アイコン化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s,
			u"最大化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.maximizeButtonAccessibleName"_s,
			u"最大化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s,
			u"最小化"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.moveButton.textAndMnemonic"_s,
			u"移動"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.restoreButton.textAndMnemonic"_s,
			u"復元"_s
		}),
		$$new($ObjectArray, {
			"InternalFrameTitlePane.sizeButton.textAndMnemonic"_s,
			u"サイズ"_s
		}),
		$$new($ObjectArray, {
			"IsindexView.prompt"_s,
			u"検索用の索引です。検索するキーワードを入力してください:"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.cancelButton.textAndMnemonic"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.inputDialog.titleAndMnemonic"_s,
			u"入力"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.messageDialog.titleAndMnemonic"_s,
			u"メッセージ"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.noButton.textAndMnemonic"_s,
			u"いいえ(&N)"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.okButton.textAndMnemonic"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.title.textAndMnemonic"_s,
			u"オプションの選択"_s
		}),
		$$new($ObjectArray, {
			"OptionPane.yesButton.textAndMnemonic"_s,
			u"はい(&Y)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButton.textAndMnemonic"_s,
			u"中止(&A)"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.abortButtonToolTip.textAndMnemonic"_s,
			u"印刷の中止"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentAborting.textAndMnemonic"_s,
			u"印刷を中止しています..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentInitial.textAndMnemonic"_s,
			u"印刷中..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.contentProgress.textAndMnemonic"_s,
			u"ページ{0}を印刷しました..."_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleAborting.textAndMnemonic"_s,
			u"印刷を中止しています"_s
		}),
		$$new($ObjectArray, {
			"PrintingDialog.titleProgress.textAndMnemonic"_s,
			u"印刷しています"_s
		}),
		$$new($ObjectArray, {
			"ProgressMonitor.progress.textAndMnemonic"_s,
			u"進行中..."_s
		}),
		$$new($ObjectArray, {
			"SplitPane.leftButton.textAndMnemonic"_s,
			u"左ボタン"_s
		}),
		$$new($ObjectArray, {
			"SplitPane.rightButton.textAndMnemonic"_s,
			u"右ボタン"_s
		})
	});
}

aqua_ja::aqua_ja() {
}

$Class* aqua_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(aqua_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(aqua_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.apple.laf.resources.aqua_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(aqua_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(aqua_ja);
	});
	return class$;
}

$Class* aqua_ja::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com