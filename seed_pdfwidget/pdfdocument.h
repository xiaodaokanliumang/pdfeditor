#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#ifndef IPDFDOCUMENT_H
#include "seed_pdfwidget/ipdfdocument.h"
#endif /*IPDFDOCUMENT_H*/

#include "QtWidgets/QTextEdit"

BEGIN_DOX_NAMESPACE

FORWARD_DECLARE_CLASS(IPDFViewer)

class PDFDocument
	: public QTextEdit
	, public IPDFDocument
{
	REGISTER_ACTUALIZE(PDFDocument, IPDFDocument)

public:

	/* @�ӿ� Ĭ�Ϲ��캯��
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	PDFDocument();

	/* @�ӿ� Ĭ����������
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	~PDFDocument();

	/* @�ӿ� �����ļ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool save();

	/* @�ӿ� 
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��15��
	 */
	virtual void clearAll();

	/* @�ӿ� ��ȡ�ĵ��ı�����ɫ
	 * @���� QColor �ĵ���������ɫ
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual QColor color() const;

	/* @�ӿ� 
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual QString title() const;

	/* @�ӿ� �����ĵ���������ɫ
	 * @���� QColor �ĵ���������ɫ
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual bool color(const QColor &);

	/* @�ӿ� ���ļ�
	 * @���� DocType �ļ�������
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool open(const QString &, const DocType &);

	/* @�ӿ� ���ļ����
	 * @���� QString ����·��
	 * @���� DocType ��������
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool saveAs(const QString &, const DocType &);

	/* @�ӿ� 
	 * @���� 
	 * @���� 
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��15��
	 */
	virtual void addText(const QString &, bool isAppend = true);

private:

	QString m_file;
	QString m_fName;

};

END_DOX_NAMESPACE

#endif /*PDFDOCUMENT_H*/