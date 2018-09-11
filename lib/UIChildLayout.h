/*! \file UIChildLayout.h
	\brief ����ļ��������Ӳ��ֵ���Ķ���
		   �Ӳ�����ʹ�õ�����һ��xml��������
	\author duilib
	\date 14:10:2013   17:15
	\copyright GNU Public License
	\version 1.0
*/

#ifndef __UICHILDLAYOUT_H__
#define __UICHILDLAYOUT_H__


/*! \class CChildLayoutUI
    \brief ��װ���Ӳ��ֵ�һЩ����
*/

class CUIChildLayout : public CUIContainer
{
public:
	CUIChildLayout();
	
	/** \fn void Init()
	    \brief ��ʼ���Ӳ���,���m_pstrXMLFile�����˵Ļ�,�����Builderȥ�������Layout
	*/
	
	void Init();

	/** \fn void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue)
	    \brief ���ô˿ؼ�������
		\param [in] pstrName ��������
		\param [in] pstrValue ����ֵ
	*/

	void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue);
	
	/** \fn void SetChildLayoutXML(CDuiString pXML)
	    \brief ���������Ӳ��ֵ�xml
	    \param [in] pXML xml��·��
	*/
	
	void SetChildLayoutXML(const CUIString& strXML);
	
	/** \fn DuiLib::CDuiString GetChildLayoutXML()
	    \brief ��ȡ�����Ӳ��ֵ�xml
	    \return xml��·��
	*/
	
	CUIString GetChildLayoutXML();
	
	/** \fn LPVOID GetInterface(LPCTSTR pstrName)
	    \brief ͨ�����ƻ�ȡ�ӿ�
		\param [in] pstrName �ӿ�����
	    \return �ӿڵ�ָ��
	*/
	
	virtual LPVOID GetInterface(const CUIString& strName);
	
	/** \fn LPCTSTR GetClass() const
	    \brief ��ȡ���������
	    \return ����
	*/
	
	virtual CUIString GetClass() const;
    
	VOID SetBuilderCallback(IDialogBuilderCallback* pCallback);

private:

	/** xml��·��*/
	CUIString m_pstrXMLFile;
	IDialogBuilderCallback *m_Callback;
};
#endif // __UICHILDLAYOUT_H__
