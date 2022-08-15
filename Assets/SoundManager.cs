using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    [SerializeField] public AudioSource bgAudioSource;
    [SerializeField] public AudioSource sfxAudioSource;
    [SerializeField] private AudioClip punchClip;
    [SerializeField] private AudioClip treeBreakClip;
    [SerializeField] private AudioClip stoneBreakClip;
    [SerializeField] private AudioClip glassBreakClip;
    [SerializeField] private AudioClip moneyIncomeClip;

    private void Awake()
    {
        instance = this;
    }

    public bool ToggleMusic()
    {
        bgAudioSource.mute = !bgAudioSource.mute;
        return bgAudioSource.mute;
    }

    public bool ToggleSound()
    {
        sfxAudioSource.mute = !sfxAudioSource.mute;
        return sfxAudioSource.mute;
    }

    public void PlayPunch()
    {
        sfxAudioSource.PlayOneShot(punchClip);
    }
    public void PlayTreeBreak()
    {
        sfxAudioSource.PlayOneShot(treeBreakClip);
    }
    public void PlayStoneBreak()
    {
        sfxAudioSource.PlayOneShot(stoneBreakClip);
    }
    public void PlayGlassBreak()
    {
        sfxAudioSource.PlayOneShot(glassBreakClip);
    }
    public void PlayMoneyIncome()
    {
        sfxAudioSource.PlayOneShot(moneyIncomeClip);
    }
}
